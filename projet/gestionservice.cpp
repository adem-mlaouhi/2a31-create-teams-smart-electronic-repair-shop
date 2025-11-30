#include "gestionservice.h"
#include "ui_gestionservice.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QRandomGenerator>
#include <QDate>
#include <QFileDialog>
#include <QDir>
#include <QFile>
#include <QPrinter>
#include <QPainter>
#include <QTextDocument>

// ----------------------------------------------------
// Generate ID: SRxxxx
// ----------------------------------------------------
QString gestionservice::generateID()
{
    int num = QRandomGenerator::global()->bounded(0, 10000);
    return "SR" + QString("%1").arg(num, 4, 10, QChar('0'));
}

// ----------------------------------------------------
// Constructor
// ----------------------------------------------------
gestionservice::gestionservice(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::gestionservice)
{
    ui->setupUi(this);

    ui->tw->setColumnCount(7);
    QStringList headers = {"ID", "Client", "Problème", "Employé", "Date", "Prix", "Image"};
    ui->tw->setHorizontalHeaderLabels(headers);

    if (ui->trc->count() == 0) {
        ui->trc->addItem("");
        ui->trc->addItem("A-Z");
        ui->trc->addItem("prix");
        ui->trc->addItem("temp");
    }

    selectedImagePath.clear();
    refreshTable();
}

gestionservice::~gestionservice()
{
    delete ui;
}

void gestionservice::closeEvent(QCloseEvent *event)
{
    QMainWindow::closeEvent(event);
}

// ----------------------------------------------------
// Add image button
// ----------------------------------------------------
void gestionservice::on_add_clicked()
{
    QString path = QFileDialog::getOpenFileName(
        this,
        "Choisir une image",
        "",
        "Images (*.png *.jpg *.jpeg *.bmp)");

    if (path.isEmpty())
        return;

    QString fileName = QFileInfo(path).fileName();

    if (imageExists(fileName)) {
        QMessageBox::warning(this, "Erreur", "Image déjà utilisée !");
        return;
    }

    selectedImagePath = path;

    QPixmap pix(path);
    ui->img->clear();
    ui->img->setIconSize(ui->img->size());

    QListWidgetItem *item = new QListWidgetItem();
    item->setIcon(QIcon(pix));
    item->setSizeHint(ui->img->size());
    ui->img->addItem(item);
}

// ----------------------------------------------------
// Check if image already exists in DB
// ----------------------------------------------------
bool gestionservice::imageExists(const QString &name)
{
    QSqlQuery q("SELECT IMAGE FROM SERVICE");
    while (q.next()) {
        if (q.value(0).toString() == name)
            return true;
    }
    return false;
}

// ----------------------------------------------------
// compute grayscale histogram
// ----------------------------------------------------
QVector<int> gestionservice::computeHistogram(const QString &path)
{
    QImage img(path);
    if (img.isNull())
        return QVector<int>();

    img = img.convertToFormat(QImage::Format_Grayscale8);

    QVector<int> hist(256);
    hist.fill(0);

    for (int y = 0; y < img.height(); y++) {
        const uchar *line = img.scanLine(y);
        for (int x = 0; x < img.width(); x++) {
            hist[line[x]]++;
        }
    }

    return hist;
}

// ----------------------------------------------------
// Cosine similarity
// ----------------------------------------------------
double gestionservice::compareHistograms(const QVector<int> &h1,
                                         const QVector<int> &h2)
{
    if (h1.isEmpty() || h2.isEmpty())
        return 0.0;

    double dot = 0, mag1 = 0, mag2 = 0;

    for (int i = 0; i < 256; i++) {
        dot += h1[i] * h2[i];
        mag1 += h1[i] * h1[i];
        mag2 += h2[i] * h2[i];
    }

    if (mag1 == 0 || mag2 == 0)
        return 0.0;

    return dot / (qSqrt(mag1) * qSqrt(mag2));
}

// ----------------------------------------------------
// CLASSIFY IMAGE
// ----------------------------------------------------
QString gestionservice::classifyImage(const QString &imagePath)
{
    QVector<int> inputHist = computeHistogram(imagePath);

    double bestScore = 0.0;
    QString bestClass = "inconnu";

    struct Folder { QString path; QString name; };

    QList<Folder> folders = {
        {"images/mechanique", "mecanique"},
        {"images/informatique", "informatique"}
    };

    for (const Folder &f : folders) {

        QDir dir(f.path);
        if (!dir.exists())
            continue;

        QFileInfoList files = dir.entryInfoList(
            QStringList() << "*.png" << "*.jpg" << "*.jpeg" << "*.bmp");

        for (const QFileInfo &fi : files) {
            QVector<int> hist = computeHistogram(fi.absoluteFilePath());
            double score = compareHistograms(inputHist, hist);

            if (score > bestScore) {
                bestScore = score;
                bestClass = f.name;
            }
        }
    }

    // 20% = best for real photos
    if (bestScore < 0.20)
        return "inconnu";

    return bestClass;
}

// ----------------------------------------------------
// Add Record (bp1)
// ----------------------------------------------------
void gestionservice::on_bp1_clicked()
{
    QString nom = ui->an->text().trimmed();
    QString prenom = ui->ap->text().trimmed();
    QString client = nom + " " + prenom;
    QString employee = ui->emp->text().trimmed();

    if (client.isEmpty() || employee.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Champs obligatoires !");
        return;
    }

    if (selectedImagePath.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Choisissez une image !");
        return;
    }

    QString imgName = QFileInfo(selectedImagePath).fileName();

    if (imageExists(imgName)) {
        QMessageBox::warning(this, "Erreur", "Image déjà existante !");
        return;
    }

    QString id = generateID();

    // Ensure unique
    QSqlQuery check;
    check.prepare("SELECT COUNT(*) FROM SERVICE WHERE ID=:i");
    check.bindValue(":i", id);
    check.exec(); check.next();

    while (check.value(0).toInt() > 0) {
        id = generateID();
        check.bindValue(":i", id);
        check.exec(); check.next();
    }

    // Copy image
    QDir().mkpath("images");
    QFile::copy(selectedImagePath, "images/" + imgName);

    // Determine problem category
    QString problemDetected = classifyImage(selectedImagePath);

    int prix = QRandomGenerator::global()->bounded(100, 501);

    QSqlQuery q;
    q.prepare("INSERT INTO SERVICE (ID, CLIENT, PROBLEM, EMPLOYEE, DAT, PRIX, IMAGE) "
              "VALUES (:id, :c, :p, :e, SYSDATE, :pr, :img)");

    q.bindValue(":id", id);
    q.bindValue(":c", client);
    q.bindValue(":p", problemDetected);
    q.bindValue(":e", employee);
    q.bindValue(":pr", prix);
    q.bindValue(":img", imgName);

    if (!q.exec()) {
        QMessageBox::critical(this, "Erreur", q.lastError().text());
        return;
    }

    ui->an->clear();
    ui->ap->clear();
    ui->emp->clear();
    ui->img->clear();
    selectedImagePath.clear();

    refreshTable();
}

// ----------------------------------------------------
// Delete
// ----------------------------------------------------
void gestionservice::on_s1_clicked()
{
    QModelIndex idx = ui->tw->currentIndex();
    if (!idx.isValid()) {
        QMessageBox::warning(this, "Erreur", "Sélectionnez une ligne !");
        return;
    }

    QString id = ui->tw->item(idx.row(), 0)->text();

    QSqlQuery q;
    q.prepare("DELETE FROM SERVICE WHERE ID=:id");
    q.bindValue(":id", id);
    q.exec();

    refreshTable();
}

// ----------------------------------------------------
// Modify
// ----------------------------------------------------
void gestionservice::on_m1_clicked()
{
    QModelIndex idx = ui->tw->currentIndex();
    if (!idx.isValid()) {
        QMessageBox::warning(this, "Erreur", "Sélectionnez une ligne !");
        return;
    }

    QString id = ui->tw->item(idx.row(), 0)->text();
    QString client = ui->an->text().trimmed() + " " + ui->ap->text().trimmed();
    QString emp = ui->emp->text().trimmed();

    if (client.isEmpty() || emp.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Champs obligatoires !");
        return;
    }

    int prix = QRandomGenerator::global()->bounded(100, 501);

    QSqlQuery q;
    q.prepare("UPDATE SERVICE SET CLIENT=:c, EMPLOYEE=:e, PRIX=:p WHERE ID=:id");
    q.bindValue(":c", client);
    q.bindValue(":e", emp);
    q.bindValue(":p", prix);
    q.bindValue(":id", id);
    q.exec();

    refreshTable();
}

// ----------------------------------------------------
// afficher
// ----------------------------------------------------
void gestionservice::on_afficher_clicked()
{
    refreshTable();
}

// ----------------------------------------------------
// Search
// ----------------------------------------------------
void gestionservice::on_re_clicked()
{
    QString v = ui->rel->text().trimmed();

    QSqlQuery q;
    q.prepare("SELECT * FROM SERVICE WHERE LOWER(CLIENT) LIKE LOWER(:v) "
              "OR LOWER(EMPLOYEE) LIKE LOWER(:v)");
    q.bindValue(":v", "%" + v + "%");
    q.exec();

    ui->tw->setRowCount(0);
    int row = 0;

    while (q.next()) {
        ui->tw->insertRow(row);
        for (int i = 0; i < 7; i++)
            ui->tw->setItem(row, i, new QTableWidgetItem(q.value(i).toString()));
        row++;
    }
}

// ----------------------------------------------------
// Sorting
// ----------------------------------------------------
void gestionservice::on_trb_clicked()
{
    QString mode = ui->trc->currentText();

    if (mode == "A-Z") refreshTable("CLIENT ASC");
    else if (mode == "prix") refreshTable("PRIX ASC");
    else if (mode == "temp") refreshTable("DAT ASC");
    else refreshTable("ID ASC");
}

// ----------------------------------------------------
// Refresh table
// ----------------------------------------------------
void gestionservice::refreshTable(QString order)
{
    QSqlQuery q("SELECT ID, CLIENT, PROBLEM, EMPLOYEE, DAT, PRIX, IMAGE "
                "FROM SERVICE ORDER BY " + order);

    ui->tw->setRowCount(0);
    int row = 0;

    while (q.next()) {
        ui->tw->insertRow(row);
        for (int i = 0; i < 7; i++)
            ui->tw->setItem(row, i, new QTableWidgetItem(q.value(i).toString()));
        row++;
    }
}

// ----------------------------------------------------
// PDF Export
// ----------------------------------------------------
void gestionservice::on_pdf_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(
        this, "Enregistrer PDF", "", "PDF (*.pdf)");

    if (fileName.isEmpty())
        return;

    QPrinter p(QPrinter::HighResolution);
    p.setOutputFormat(QPrinter::PdfFormat);
    p.setOutputFileName(fileName);

    QString html = "<h2><center>Liste des Services</center></h2><br>";
    html += "<table border=1 cellspacing=0 cellpadding=4>";

    for (int r = 0; r < ui->tw->rowCount(); r++) {
        html += "<tr>";
        for (int c = 0; c < ui->tw->columnCount(); c++) {
            html += "<td>" + ui->tw->item(r, c)->text() + "</td>";
        }
        html += "</tr>";
    }

    html += "</table>";

    QTextDocument doc;
    doc.setHtml(html);
    doc.print(&p);

    QMessageBox::information(this, "PDF", "PDF généré avec succès !");
}
