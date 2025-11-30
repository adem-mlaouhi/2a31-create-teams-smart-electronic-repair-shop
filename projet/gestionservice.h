#ifndef GESTIONSERVICE_H
#define GESTIONSERVICE_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QListWidgetItem>

namespace Ui {
class gestionservice;
}

class gestionservice : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestionservice(QWidget *parent = nullptr);
    ~gestionservice();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_add_clicked();
    void on_bp1_clicked();
    void on_s1_clicked();
    void on_m1_clicked();
    void on_afficher_clicked();
    void on_re_clicked();
    void on_trb_clicked();
    void on_pdf_clicked();

private:
    Ui::gestionservice *ui;

    QString selectedImagePath;   // temporary selected image
    QString generateID();        // SRxxxx
    bool imageExists(const QString &name);

    void refreshTable(QString order = "ID ASC");

    // --- CLASSIFIER ---
    QVector<int> computeHistogram(const QString &path);
    double compareHistograms(const QVector<int> &h1, const QVector<int> &h2);
    QString classifyImage(const QString &imagePath);
};

#endif // GESTIONSERVICE_H
