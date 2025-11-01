#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    // Initialize UI and connect signals
    initializeUI();
    setupConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initializeUI()
{
    // Set initial states - show the employer page by default
    // The employer button should be checked by default in the UI
    if (ui->mainStackedWidget && ui->mainStackedWidget->count() > 0) {
        ui->mainStackedWidget->setCurrentIndex(0);
    }
    
    // Set default focus on the employer button
    if (ui->employerBtn) {
        ui->employerBtn->setChecked(true);
    }
}

void MainWindow::setupConnections()
{
    // Connect navigation buttons
    if (ui->employerBtn) {
        connect(ui->employerBtn, &QPushButton::clicked, this, &MainWindow::onEmployerBtnClicked);
    }
    if (ui->projectsBtn) {
        connect(ui->projectsBtn, &QPushButton::clicked, this, &MainWindow::onProjectsBtnClicked);
    }
    if (ui->clientsBtn) {
        connect(ui->clientsBtn, &QPushButton::clicked, this, &MainWindow::onClientsBtnClicked);
    }
    if (ui->resourcesBtn) {
        connect(ui->resourcesBtn, &QPushButton::clicked, this, &MainWindow::onResourcesBtnClicked);
    }
    if (ui->sponsorsBtn) {
        connect(ui->sponsorsBtn, &QPushButton::clicked, this, &MainWindow::onSponsorsBtnClicked);
    }
    if (ui->templatesBtn) {
        connect(ui->templatesBtn, &QPushButton::clicked, this, &MainWindow::onTemplatesBtnClicked);
    }
    if (ui->shopBtn) {
        connect(ui->shopBtn, &QPushButton::clicked, this, &MainWindow::onShopBtnClicked);
    }
    
    // Connect other UI elements
    if (ui->loginBtn) {
        connect(ui->loginBtn, &QPushButton::clicked, this, &MainWindow::onLoginBtnClicked);
    }
    if (ui->backToMainButton) {
        connect(ui->backToMainButton, &QPushButton::clicked, this, &MainWindow::onBackToMainClicked);
    }
}

void MainWindow::switchToPage(QWidget *page)
{
    // Switch to the specified page in the main content area
    if (ui->stackedWidget && page) {
        int pageIndex = ui->stackedWidget->indexOf(page);
        if (pageIndex >= 0) {
            ui->stackedWidget->setCurrentIndex(pageIndex);
            // Ensure employee-related form widgets are only visible on the employer page
            // Candidate object names (from designer): formWidget, employeeFormWidget, employeeForm, formPanel
            QList<QString> candidates = {"formWidget", "employeeFormWidget", "employeeForm", "formPanel"};
            for (const QString &name : candidates) {
                QWidget *w = ui->centralwidget->findChild<QWidget *>(name);
                if (w) {
                    w->setVisible(page == ui->employerPage);
                }
            }
        }
    }
}

// Navigation button handlers
void MainWindow::onEmployerBtnClicked()
{
    if (ui->employerPage) {
        switchToPage(ui->employerPage);
    }
}

void MainWindow::onProjectsBtnClicked()
{
    if (ui->projectsPage) {
        switchToPage(ui->projectsPage);
    }
}

void MainWindow::onClientsBtnClicked()
{
    if (ui->clientsPage) {
        switchToPage(ui->clientsPage);
    }
}

void MainWindow::onResourcesBtnClicked()
{
    if (ui->libraryPage) {
        switchToPage(ui->libraryPage);
    }
}

void MainWindow::onSponsorsBtnClicked()
{
    if (ui->settingsPage) {
        switchToPage(ui->settingsPage);
    }
}

void MainWindow::onTemplatesBtnClicked()
{
    if (ui->editorPage) {
        switchToPage(ui->editorPage);
    }
}

void MainWindow::onShopBtnClicked()
{
    if (ui->shopPage) {
        switchToPage(ui->shopPage);
    }
}

void MainWindow::onLoginBtnClicked()
{
    // Switch to login overlay page
    if (ui->mainStackedWidget) {
        ui->mainStackedWidget->setCurrentIndex(1);
    }
}

void MainWindow::onBackToMainClicked()
{
    // Switch back to normal content page
    if (ui->mainStackedWidget) {
        ui->mainStackedWidget->setCurrentIndex(0);
    }
}