#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QTabWidget>
#include <QPushButton>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Navigation button handlers
    void onEmployerBtnClicked();
    void onProjectsBtnClicked();
    void onClientsBtnClicked();
    void onResourcesBtnClicked();
    void onSponsorsBtnClicked();
    void onTemplatesBtnClicked();
    void onShopBtnClicked();
    
    // Other UI handlers
    void onLoginBtnClicked();
    void onBackToMainClicked();

private:
    Ui::MainWindow *ui;
    
    // Helper methods
    void setupConnections();
    void initializeUI();
    void switchToPage(QWidget *page);
};

#endif // MAINWINDOW_H
