#include "gestion_service.h"
#include "ui_gestion_service.h"
Gestion_Service::Gestion_Service(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Gestion_Service)
{
    ui->setupUi(this);

    // Configure the table
    ui->tw->setColumnCount(6);
    QStringList headers = {"ID Service", "Client", "Problème", "Nom + Prénom", "Temp", "Prix"};
    ui->tw->setHorizontalHeaderLabels(headers);
    ui->tw->setEditTriggers(QAbstractItemView::NoEditTriggers); // read-only cells
    ui->tw->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw->setSelectionMode(QAbstractItemView::SingleSelection);
}

Gestion_Service::~Gestion_Service()
{
    delete ui;
}

// ------------------- AJOUTER -------------------
void Gestion_Service::on_bp1_clicked()
{
    QString nom = ui->an->text().trimmed();
    QString prenom = ui->ap->text().trimmed();

    if (nom.isEmpty() || prenom.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "Invalide nom et prénom");
        return;
    }

    int row = ui->tw->rowCount();
    ui->tw->insertRow(row);

    // ID Service = line number
    ui->tw->setItem(row, 0, new QTableWidgetItem(QString::number(row + 1)));

    // Empty client & problem
    ui->tw->setItem(row, 1, new QTableWidgetItem(""));
    ui->tw->setItem(row, 2, new QTableWidgetItem(""));

    // Nom + prénom
    ui->tw->setItem(row, 3, new QTableWidgetItem(nom + " " + prenom));

    // Dummy time and random price
    ui->tw->setItem(row, 4, new QTableWidgetItem("00:00"));
    int prix = QRandomGenerator::global()->bounded(100, 201);
    ui->tw->setItem(row, 5, new QTableWidgetItem(QString::number(prix)));

    ui->an->clear();
    ui->ap->clear();
}

// ------------------- SUPPRIMER -------------------
void Gestion_Service::on_s1_clicked()
{
    int row = ui->tw->currentRow();

    if (row < 0) {
        QMessageBox::warning(this, "Alerte", "Aucune ligne sélectionnée !");
        return;
    }

    ui->tw->removeRow(row);
    QMessageBox::information(this, "Succès", "Ligne supprimée avec succès !");
}
