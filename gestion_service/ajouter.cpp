#include <QLineEdit>
#include <QTableWidget>
#include <QMessageBox>
#include <QDebug>
#include <QRandomGenerator>
#include <QStringList>
#include "gestion_service.h"
void ajouter(QLineEdit *an, QLineEdit *ap, QTableWidget *tw)
{
    QString nom = an->text().trimmed();
    QString prenom = ap->text().trimmed();
    if (nom.isEmpty() || prenom.isEmpty()) {
        QMessageBox::critical(nullptr, "Erreur", "Invalide nom et prenom");
        return;
    }
    int row = tw->rowCount();
    tw->insertRow(row);
    int prix = QRandomGenerator::global()->bounded(100, 201);
    tw->setItem(row, 0, new QTableWidgetItem(QString::number(row + 1)));
    tw->setItem(row, 1, new QTableWidgetItem(""));
    tw->setItem(row, 2, new QTableWidgetItem(""));
    tw->setItem(row, 3, new QTableWidgetItem(nom + " " + prenom));
    tw->setItem(row, 4, new QTableWidgetItem(""));
    tw->setItem(row, 5, new QTableWidgetItem(QString::number(prix)));
    tw->resizeColumnsToContents();
    QMessageBox::information(nullptr, "Succès", "Ajouté avec succès !");
    an->clear();
    ap->clear();
}
