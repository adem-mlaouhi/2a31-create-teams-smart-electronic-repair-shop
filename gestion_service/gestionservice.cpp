#include "gestionservice.h"
#include "ui_gestionservice.h"
#include <QMessageBox>
#include <QSqlQuery>
GestionService::GestionService(QWidget *parent)
    : QDialog(parent), ui(new Ui::GestionService)
{
    ui->setupUi(this);
    model = new QSqlQueryModel(this);
    refreshTable();
}
GestionService::~GestionService()
{
    delete ui;
}
void GestionService::on_ajouter_clicked()
{
    QString client = ui->lineClient->text();
    QString problem = ui->lineProblem->text();
    double prix = ui->linePrix->text().toDouble();
    if (client.isEmpty() || problem.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Champs vides !");
        return;
    }
    QSqlQuery query;
    query.prepare("INSERT INTO SERVICE (CLIENT, PROBLEM, DAT, PRIX) "
                  "VALUES (:client, :problem, SYSDATE, :prix)");
    query.bindValue(":client", client);
    query.bindValue(":problem", problem);
    query.bindValue(":prix", prix);

    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Service ajouté !");
        refreshTable();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec d’ajout : " + query.lastError().text());
    }
}
void GestionService::on_supprimer_clicked()
{
    int id = ui->lineID->text().toInt();
    QSqlQuery query;
    query.prepare("DELETE FROM SERVICE WHERE ID = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        QMessageBox::information(this, "Supprimé", "Service supprimé !");
        refreshTable();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec suppression : " + query.lastError().text());
    }
}
void GestionService::on_modifier_clicked()
{
    int id = ui->lineID->text().toInt();
    QString client = ui->lineClient->text();
    QString problem = ui->lineProblem->text();
    double prix = ui->linePrix->text().toDouble();
    QSqlQuery query;
    query.prepare("UPDATE SERVICE SET CLIENT=:client, PROBLEM=:problem, PRIX=:prix WHERE ID=:id");
    query.bindValue(":client", client);
    query.bindValue(":problem", problem);
    query.bindValue(":prix", prix);
    query.bindValue(":id", id);
    if (query.exec()) {
        QMessageBox::information(this, "Modifié", "Service mis à jour !");
        refreshTable();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec modification : " + query.lastError().text());
    }
}
void GestionService::on_afficher_clicked()
{
    refreshTable();
}
void GestionService::refreshTable()
{
    model->setQuery("SELECT * dans SERVICE ORDER PAR ID ASC");
    ui->tableView->setModel(model);
}
