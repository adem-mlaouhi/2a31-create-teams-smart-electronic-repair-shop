#include <QTableWidget>
#include <QMessageBox>
#include "gestion_service.h"
void supprimer(QTableWidget *tw, int colonne)
{
    if (!tw) return;

    if (colonne >= 0 && colonne < tw->columnCount()) {
        tw->removeColumn(colonne);
        QMessageBox::information(nullptr, "Information", "Successfully deleted");
    } else {
        QMessageBox::warning(nullptr, "Erreur", "Colonne invalide !");
    }
}
