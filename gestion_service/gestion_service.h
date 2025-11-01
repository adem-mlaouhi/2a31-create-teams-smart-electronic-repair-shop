#ifndef GESTION_SERVICE_H
#define GESTION_SERVICE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTableWidget>
#include <QRandomGenerator>

QT_BEGIN_NAMESPACE
namespace Ui {
class Gestion_Service;
}
QT_END_NAMESPACE

class Gestion_Service : public QMainWindow
{
    Q_OBJECT

public:
    explicit Gestion_Service(QWidget *parent = nullptr);
    ~Gestion_Service();

private slots:
    void on_bp1_clicked();  // Add button
    void on_s1_clicked();   // Delete selected row

private:
    Ui::Gestion_Service *ui;
};

#endif // GESTION_SERVICE_H
