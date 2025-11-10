#ifndef GESTIONSERVICE_H
#define GESTIONSERVICE_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class GestionService;
}

class GestionService : public QDialog
{
    Q_OBJECT

public:
    explicit GestionService(QWidget *parent = nullptr);
    ~GestionService();

private slots:
    void on_ajouter_clicked();   // Add service
    void on_supprimer_clicked(); // Delete service
    void on_modifier_clicked();  // Edit service
    void on_afficher_clicked();  // Display services

private:
    Ui::GestionService *ui;      // UI object
    QSqlQueryModel *model;       // Model for table view

    void refreshTable();         // Refresh table data
};

#endif // GESTIONSERVICE_H

