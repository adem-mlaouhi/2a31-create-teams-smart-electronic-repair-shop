/********************************************************************************
** Form generated from reading UI file 'gestion_pieces_detachees.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_PIECES_DETACHEES_H
#define UI_GESTION_PIECES_DETACHEES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *sidebarWidget;
    QVBoxLayout *sidebarLayout;
    QLabel *logoLabel;
    QSpacerItem *verticalSpacer_3;
    QPushButton *employerBtn;
    QPushButton *projectsBtn;
    QPushButton *clientsBtn;
    QPushButton *resourcesBtn;
    QPushButton *sponsorsBtn;
    QPushButton *templatesBtn;
    QPushButton *shopBtn;
    QSpacerItem *verticalSpacer;
    QWidget *sideFormContainer;
    QVBoxLayout *sideFormContainerLayout;
    QWidget *formPanel;
    QVBoxLayout *formPanelLayout;
    QLabel *contactTitle;
    QFormLayout *contactFormLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *subjectLabel;
    QLineEdit *subjectLineEdit;
    QLabel *messageLabel;
    QTextEdit *messageTextEdit;
    QPushButton *contactSubmitBtn;
    QStackedWidget *mainStackedWidget;
    QWidget *normalContentPage;
    QVBoxLayout *normalContentLayout;
    QWidget *headerWidget;
    QHBoxLayout *headerLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginBtn;
    QStackedWidget *stackedWidget;
    QWidget *employerPage;
    QVBoxLayout *employerPageLayout;
    QWidget *employerHeaderWidget;
    QHBoxLayout *employerHeaderLayout;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QPushButton *sortByIdButton;
    QPushButton *exportPdfButton;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *employerTabWidget;
    QWidget *modifierTab;
    QVBoxLayout *modifierLayout;
    QTableWidget *modifyEmployeeTable;
    QPushButton *editSelectedButton;
    QWidget *supprimerTab;
    QVBoxLayout *supprimerLayout;
    QLabel *supprimerTitle;
    QTableWidget *deleteEmployeeTable;
    QPushButton *deleteSelectedButton;
    QLabel *deleteWarningLabel;
    QWidget *ajouterTab;
    QVBoxLayout *ajouterLayout;
    QSpacerItem *verticalSpacer_add;
    QWidget *tab;
    QWidget *projectsPage;
    QVBoxLayout *projectsLayout;
    QWidget *equipmentMainWidget;
    QGroupBox *equipmentGroupBox;
    QLabel *equipmentLabel1;
    QLabel *equipmentLabel2;
    QLineEdit *equipmentLineEdit2;
    QLineEdit *equipmentLineEdit1;
    QWidget *equipmentTypeWidget;
    QHBoxLayout *equipmentTypeLayout;
    QLabel *equipmentTypeLabel;
    QComboBox *equipmentComboBox;
    QWidget *equipmentDateWidget;
    QHBoxLayout *equipmentDateLayout;
    QLabel *equipmentDateLabel;
    QDateEdit *equipmentDateEdit;
    QWidget *equipmentButtonsWidget;
    QHBoxLayout *equipmentButtonsLayout;
    QPushButton *equipmentSaveBtn;
    QPushButton *equipmentCancelBtn;
    QLabel *equipmentListLabel;
    QTableWidget *equipmentTableWidget;
    QPushButton *equipmentPdfBtn;
    QWidget *equipmentSearchWidget;
    QWidget *equipmentSearchLayoutWidget;
    QHBoxLayout *equipmentSearchLayout;
    QPushButton *equipmentSearchBtn;
    QLineEdit *equipmentSearchLineEdit;
    QWidget *equipmentSortWidget;
    QHBoxLayout *equipmentSortLayout;
    QLabel *equipmentSortLabel;
    QComboBox *equipmentSortComboBox;
    QPushButton *equipmentSortBtn;
    QWidget *clientsPage;
    QVBoxLayout *clientsLayout;
    QGroupBox *clientMainGroupBox;
    QGroupBox *clientFormGroupBox;
    QLabel *clientIdLabel;
    QLineEdit *clientIdLineEdit;
    QLabel *clientNomLabel;
    QLineEdit *clientNomLineEdit;
    QLabel *clientPrenomLabel;
    QLineEdit *clientPrenomLineEdit;
    QLabel *clientTelephoneLabel;
    QLineEdit *clientTelephoneLineEdit;
    QLabel *clientEmailLabel;
    QLineEdit *clientEmailLineEdit;
    QPushButton *clientValidateBtn;
    QTableWidget *clientTableWidget;
    QWidget *clientSearchWidget;
    QWidget *clientSearchLayoutWidget;
    QHBoxLayout *clientSearchLayout;
    QPushButton *clientSearchBtn;
    QLineEdit *clientSearchLineEdit;
    QLabel *clientListLabel;
    QPushButton *clientPdfBtn;
    QWidget *clientSortWidget;
    QHBoxLayout *clientSortLayout;
    QLabel *clientSortLabel;
    QComboBox *clientSortComboBox;
    QPushButton *clientSortBtn;
    QWidget *libraryPage;
    QVBoxLayout *libraryLayout;
    QWidget *settingsPage;
    QVBoxLayout *settingsPageLayout;
    QWidget *editorPage;
    QVBoxLayout *editorLayout;
    QWidget *shopPage;
    QVBoxLayout *shopLayout;
    QWidget *loginOverlayPage;
    QVBoxLayout *loginOverlayLayout;
    QSpacerItem *topSpacer;
    QWidget *loginFormWidget;
    QVBoxLayout *loginFormLayout;
    QLabel *loginTitle;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *loginSubmitButton;
    QPushButton *backToMainButton;
    QSpacerItem *bottomSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1264, 830);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #ffffff;\n"
"    font-family: 'Times New Roman', serif;\n"
"}\n"
"\n"
"/* Remove all hover effects and animations */\n"
"QLabel {\n"
"    color: #2c3e50;\n"
"    font-family: 'Times New Roman', serif;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"/* Sidebar button styling - rounded with gradient effect */\n"
"QPushButton {\n"
"    text-align: left;\n"
"    padding: 12px 24px;\n"
"    border: 1px solid #dee2e6;\n"
"    background-color: #f8f9fa;\n"
"    color: #2c3e50;\n"
"    font-family: 'Times New Roman', serif;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    border-radius: 8px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QPushButton[checked=\"true\"] {\n"
"    background-color: #f3e6fb;\n"
"    color: #6A1B9A;\n"
"    border: 2px solid #6A1B9A;\n"
"    font-weight: bold;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e9ecef;\n"
"}\n"
"\n"
"/* Tab Widget styling without animations */\n"
"QTabWidget::pa"
                        "ne {\n"
"    border: 1px solid #e1e8ed;\n"
"    border-radius: 8px;\n"
"    background-color: #ffffff;\n"
"    margin-top: 4px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    alignment: left;\n"
"    left: 8px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background-color: #f8f9fa;\n"
"    border: 1px solid #dee2e6;\n"
"    border-bottom: none;\n"
"    border-radius: 6px 6px 0 0;\n"
"    padding: 12px 24px;\n"
"    margin-right: 2px;\n"
"    font-weight: 600;\n"
"    color: #657786;\n"
"    font-family: 'Times New Roman', serif;\n"
"    font-size: 14px;\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background-color: #ffffff;\n"
"    color: #6A1B9A;\n"
"    border-bottom: 3px solid #6A1B9A;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Table styling */\n"
"QTableWidget {\n"
"    border: 1px solid #bdc3c7;\n"
"    background-color: #ffffff;\n"
"    font-family: 'Times New Roman', serif;\n"
"    font-size: 12px;\n"
"    gridline-color: #ecf0f1;\n"
"    selection-background-color: #6A1B9A;\n"
"    "
                        "selection-color: white;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #ecf0f1;\n"
"    padding: 8px;\n"
"    border: 1px solid #bdc3c7;\n"
"    font-weight: bold;\n"
"    font-size: 12px;\n"
"    color: #2c3e50;\n"
"    font-family: 'Times New Roman', serif;\n"
"}\n"
"\n"
"/* Input styling */\n"
"QLineEdit {\n"
"    border: 2px solid #dee2e6;\n"
"    border-radius: 6px;\n"
"    padding: 8px 12px;\n"
"    font-size: 14px;\n"
"    background-color: white;\n"
"    color: #495057;\n"
"    font-family: 'Times New Roman', serif;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #6A1B9A;\n"
"}\n"
"\n"
"/* Action buttons */\n"
"QPushButton#loginBtn, QPushButton#changePhotoBtn, QPushButton#removePhotoBtn, QPushButton#backToMainButton {\n"
"    background-color: #6A1B9A;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 8px 16px;\n"
"    font-family: 'Times New Roman', serif;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Employer module buttons - Rectangle sha"
                        "rp style */\n"
"QPushButton#searchButton, QPushButton#sortByIdButton, QPushButton#exportPdfButton {\n"
"    background-color: #6A1B9A;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    padding: 10px 20px;\n"
"    font-family: 'Times New Roman', serif;\n"
"    font-weight: bold;\n"
"    font-size: 13px;\n"
"    min-height: 32px;\n"
"}\n"
"\n"
"QPushButton#searchButton:pressed, QPushButton#sortByIdButton:pressed, QPushButton#exportPdfButton:pressed {\n"
"    background-color: #2a0033;\n"
"}\n"
"\n"
"/* Employer action buttons - Purple rectangle sharp style with spacing */\n"
"QPushButton#saveEmployeeButton, QPushButton#editSelectedButton, QPushButton#deleteSelectedButton {\n"
"    background-color: #8e44ad;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 0px;\n"
"    padding: 10px 20px;\n"
"    margin: 8px;\n"
"    font-family: 'Times New Roman', serif;\n"
"    font-weight: bold;\n"
"    font-size: 13px;\n"
"    min-height: 32px;\n"
"}\n"
"\n"
"QPushButton#saveEmp"
                        "loyeeButton:pressed, QPushButton#editSelectedButton:pressed, QPushButton#deleteSelectedButton:pressed {\n"
"    background-color: #4a0072;\n"
"}\n"
"\n"
"QPushButton#removePhotoBtn {\n"
"    background-color: #dc3545;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sidebarWidget = new QWidget(centralwidget);
        sidebarWidget->setObjectName("sidebarWidget");
        sidebarWidget->setMinimumSize(QSize(200, 0));
        sidebarWidget->setMaximumSize(QSize(200, 16777215));
        sidebarWidget->setStyleSheet(QString::fromUtf8("/* Appliquer au QWidget parent (formulaire ou sidebar) */\n"
"background-color: #E6CCFF; /* violet tr\303\250s clair */\n"
"border-radius: 8px;        /* coins arrondis, optionnel */\n"
""));
        sidebarLayout = new QVBoxLayout(sidebarWidget);
        sidebarLayout->setSpacing(0);
        sidebarLayout->setObjectName("sidebarLayout");
        sidebarLayout->setContentsMargins(0, 16, 0, 16);
        logoLabel = new QLabel(sidebarWidget);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setBold(true);
        logoLabel->setFont(font);
        logoLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    padding: 12px;\n"
"    font-weight: bold;\n"
"    background-color: transparent;\n"
"    border-bottom: 1px solid #dee2e6;\n"
"}"));
        logoLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        sidebarLayout->addWidget(logoLabel);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        sidebarLayout->addItem(verticalSpacer_3);

        employerBtn = new QPushButton(sidebarWidget);
        employerBtn->setObjectName("employerBtn");
        employerBtn->setMinimumSize(QSize(0, 45));
        employerBtn->setCheckable(true);
        employerBtn->setChecked(true);
        employerBtn->setAutoExclusive(true);

        sidebarLayout->addWidget(employerBtn);

        projectsBtn = new QPushButton(sidebarWidget);
        projectsBtn->setObjectName("projectsBtn");
        projectsBtn->setMinimumSize(QSize(0, 45));
        projectsBtn->setCheckable(true);
        projectsBtn->setAutoExclusive(true);

        sidebarLayout->addWidget(projectsBtn);

        clientsBtn = new QPushButton(sidebarWidget);
        clientsBtn->setObjectName("clientsBtn");
        clientsBtn->setMinimumSize(QSize(0, 45));
        clientsBtn->setCheckable(true);
        clientsBtn->setAutoExclusive(true);

        sidebarLayout->addWidget(clientsBtn);

        resourcesBtn = new QPushButton(sidebarWidget);
        resourcesBtn->setObjectName("resourcesBtn");
        resourcesBtn->setMinimumSize(QSize(0, 45));
        resourcesBtn->setCheckable(true);
        resourcesBtn->setAutoExclusive(true);

        sidebarLayout->addWidget(resourcesBtn);

        sponsorsBtn = new QPushButton(sidebarWidget);
        sponsorsBtn->setObjectName("sponsorsBtn");
        sponsorsBtn->setMinimumSize(QSize(0, 45));
        sponsorsBtn->setCheckable(true);
        sponsorsBtn->setAutoExclusive(true);

        sidebarLayout->addWidget(sponsorsBtn);

        templatesBtn = new QPushButton(sidebarWidget);
        templatesBtn->setObjectName("templatesBtn");
        templatesBtn->setMinimumSize(QSize(0, 45));
        templatesBtn->setCheckable(true);
        templatesBtn->setAutoExclusive(true);

        sidebarLayout->addWidget(templatesBtn);

        shopBtn = new QPushButton(sidebarWidget);
        shopBtn->setObjectName("shopBtn");
        shopBtn->setMinimumSize(QSize(0, 45));
        shopBtn->setCheckable(true);
        shopBtn->setAutoExclusive(true);

        sidebarLayout->addWidget(shopBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        sidebarLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(sidebarWidget);

        sideFormContainer = new QWidget(centralwidget);
        sideFormContainer->setObjectName("sideFormContainer");
        sideFormContainer->setMinimumSize(QSize(320, 0));
        sideFormContainer->setStyleSheet(QString::fromUtf8("QWidget#sideFormContainer {\n"
"    background-color: #ffffff;\n"
"}\n"
"/* Slight visual separation from sidebar */\n"
"QWidget#sideFormContainer QWidget#formPanel {\n"
"    background-color: #fbf7ff;\n"
"    border: 1px solid #f0e7f6;\n"
"    border-radius: 8px;\n"
"    margin: 12px;\n"
"    padding: 16px;\n"
"}\n"
"QWidget#sideFormContainer QLabel#nameLabel, \n"
"QWidget#sideFormContainer QLabel#emailLabel,\n"
"QWidget#sideFormContainer QLabel#subjectLabel,\n"
"QWidget#sideFormContainer QLabel#messageLabel {\n"
"    color: #2c3e50;\n"
"    font-weight: 600;\n"
"    margin-bottom: 6px;\n"
"}\n"
"QWidget#sideFormContainer QLineEdit#nameLineEdit, \n"
"QWidget#sideFormContainer QLineEdit#emailLineEdit,\n"
"QWidget#sideFormContainer QLineEdit#subjectLineEdit,\n"
"QWidget#sideFormContainer QTextEdit#messageTextEdit {\n"
"    border: 1px solid #e6dff0;\n"
"    border-radius: 6px;\n"
"    padding: 8px 10px;\n"
"    background: white;\n"
"}\n"
"QWidget#sideFormContainer QLineEdit#nameLineEdit:focus, \n"
"QWidget#sid"
                        "eFormContainer QLineEdit#emailLineEdit:focus,\n"
"QWidget#sideFormContainer QLineEdit#subjectLineEdit:focus,\n"
"QWidget#sideFormContainer QTextEdit#messageTextEdit:focus {\n"
"    border-color: #6A1B9A;\n"
"}\n"
"QWidget#sideFormContainer QPushButton#contactSubmitBtn {\n"
"    background-color: #6A1B9A;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 16px;\n"
"    font-weight: bold;\n"
"}\n"
"QWidget#sideFormContainer QPushButton#contactSubmitBtn:pressed {\n"
"    background-color: #4a0072;\n"
"}\n"
""));
        sideFormContainerLayout = new QVBoxLayout(sideFormContainer);
        sideFormContainerLayout->setSpacing(0);
        sideFormContainerLayout->setObjectName("sideFormContainerLayout");
        sideFormContainerLayout->setContentsMargins(0, 0, 0, 0);
        formPanel = new QWidget(sideFormContainer);
        formPanel->setObjectName("formPanel");
        formPanelLayout = new QVBoxLayout(formPanel);
        formPanelLayout->setSpacing(8);
        formPanelLayout->setObjectName("formPanelLayout");
        formPanelLayout->setContentsMargins(8, 8, 8, 8);
        contactTitle = new QLabel(formPanel);
        contactTitle->setObjectName("contactTitle");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setWeight(QFont::DemiBold);
        contactTitle->setFont(font1);

        formPanelLayout->addWidget(contactTitle);

        contactFormLayout = new QFormLayout();
        contactFormLayout->setObjectName("contactFormLayout");
        contactFormLayout->setHorizontalSpacing(12);
        contactFormLayout->setVerticalSpacing(12);
        nameLabel = new QLabel(formPanel);
        nameLabel->setObjectName("nameLabel");

        contactFormLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(formPanel);
        nameLineEdit->setObjectName("nameLineEdit");

        contactFormLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        emailLabel = new QLabel(formPanel);
        emailLabel->setObjectName("emailLabel");

        contactFormLayout->setWidget(1, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(formPanel);
        emailLineEdit->setObjectName("emailLineEdit");

        contactFormLayout->setWidget(1, QFormLayout::FieldRole, emailLineEdit);

        subjectLabel = new QLabel(formPanel);
        subjectLabel->setObjectName("subjectLabel");

        contactFormLayout->setWidget(2, QFormLayout::LabelRole, subjectLabel);

        subjectLineEdit = new QLineEdit(formPanel);
        subjectLineEdit->setObjectName("subjectLineEdit");

        contactFormLayout->setWidget(2, QFormLayout::FieldRole, subjectLineEdit);

        messageLabel = new QLabel(formPanel);
        messageLabel->setObjectName("messageLabel");

        contactFormLayout->setWidget(3, QFormLayout::LabelRole, messageLabel);

        messageTextEdit = new QTextEdit(formPanel);
        messageTextEdit->setObjectName("messageTextEdit");
        messageTextEdit->setMinimumSize(QSize(200, 120));

        contactFormLayout->setWidget(3, QFormLayout::FieldRole, messageTextEdit);


        formPanelLayout->addLayout(contactFormLayout);

        contactSubmitBtn = new QPushButton(formPanel);
        contactSubmitBtn->setObjectName("contactSubmitBtn");
        contactSubmitBtn->setMinimumSize(QSize(120, 36));

        formPanelLayout->addWidget(contactSubmitBtn);


        sideFormContainerLayout->addWidget(formPanel);


        horizontalLayout->addWidget(sideFormContainer);

        mainStackedWidget = new QStackedWidget(centralwidget);
        mainStackedWidget->setObjectName("mainStackedWidget");
        mainStackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"    background-color: #ffffff;\n"
"    margin: 10px;\n"
"}"));
        normalContentPage = new QWidget();
        normalContentPage->setObjectName("normalContentPage");
        normalContentLayout = new QVBoxLayout(normalContentPage);
        normalContentLayout->setSpacing(0);
        normalContentLayout->setObjectName("normalContentLayout");
        normalContentLayout->setContentsMargins(0, 0, 0, 0);
        headerWidget = new QWidget(normalContentPage);
        headerWidget->setObjectName("headerWidget");
        headerWidget->setMinimumSize(QSize(0, 60));
        headerWidget->setMaximumSize(QSize(16777215, 60));
        headerWidget->setStyleSheet(QString::fromUtf8("QWidget#headerWidget {\n"
"    background-color: #ffffff;\n"
"    border-bottom: 1px solid #dee2e6;\n"
"}"));
        headerLayout = new QHBoxLayout(headerWidget);
        headerLayout->setObjectName("headerLayout");
        headerLayout->setContentsMargins(24, 12, 24, 12);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout->addItem(horizontalSpacer);

        loginBtn = new QPushButton(headerWidget);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setMinimumSize(QSize(100, 30));

        headerLayout->addWidget(loginBtn);


        normalContentLayout->addWidget(headerWidget);

        stackedWidget = new QStackedWidget(normalContentPage);
        stackedWidget->setObjectName("stackedWidget");
        employerPage = new QWidget();
        employerPage->setObjectName("employerPage");
        employerPageLayout = new QVBoxLayout(employerPage);
        employerPageLayout->setSpacing(20);
        employerPageLayout->setObjectName("employerPageLayout");
        employerPageLayout->setContentsMargins(24, 24, 24, 24);
        employerHeaderWidget = new QWidget(employerPage);
        employerHeaderWidget->setObjectName("employerHeaderWidget");
        employerHeaderLayout = new QHBoxLayout(employerHeaderWidget);
        employerHeaderLayout->setSpacing(12);
        employerHeaderLayout->setObjectName("employerHeaderLayout");
        searchLineEdit = new QLineEdit(employerHeaderWidget);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setMinimumSize(QSize(250, 32));

        employerHeaderLayout->addWidget(searchLineEdit);

        searchButton = new QPushButton(employerHeaderWidget);
        searchButton->setObjectName("searchButton");
        searchButton->setMinimumSize(QSize(100, 56));

        employerHeaderLayout->addWidget(searchButton);

        sortByIdButton = new QPushButton(employerHeaderWidget);
        sortByIdButton->setObjectName("sortByIdButton");
        sortByIdButton->setMinimumSize(QSize(100, 56));

        employerHeaderLayout->addWidget(sortByIdButton);

        exportPdfButton = new QPushButton(employerHeaderWidget);
        exportPdfButton->setObjectName("exportPdfButton");
        exportPdfButton->setMinimumSize(QSize(120, 56));

        employerHeaderLayout->addWidget(exportPdfButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        employerHeaderLayout->addItem(horizontalSpacer_2);


        employerPageLayout->addWidget(employerHeaderWidget);

        employerTabWidget = new QTabWidget(employerPage);
        employerTabWidget->setObjectName("employerTabWidget");
        modifierTab = new QWidget();
        modifierTab->setObjectName("modifierTab");
        modifierLayout = new QVBoxLayout(modifierTab);
        modifierLayout->setSpacing(20);
        modifierLayout->setObjectName("modifierLayout");
        modifierLayout->setContentsMargins(16, 16, 16, 16);
        modifyEmployeeTable = new QTableWidget(modifierTab);
        if (modifyEmployeeTable->columnCount() < 6)
            modifyEmployeeTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        modifyEmployeeTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        modifyEmployeeTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        modifyEmployeeTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        modifyEmployeeTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        modifyEmployeeTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        modifyEmployeeTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        modifyEmployeeTable->setObjectName("modifyEmployeeTable");
        modifyEmployeeTable->setMinimumSize(QSize(600, 300));
        modifyEmployeeTable->setRowCount(0);
        modifyEmployeeTable->setColumnCount(6);
        modifyEmployeeTable->horizontalHeader()->setVisible(true);
        modifyEmployeeTable->verticalHeader()->setVisible(false);

        modifierLayout->addWidget(modifyEmployeeTable);

        editSelectedButton = new QPushButton(modifierTab);
        editSelectedButton->setObjectName("editSelectedButton");
        editSelectedButton->setMinimumSize(QSize(200, 68));

        modifierLayout->addWidget(editSelectedButton);

        employerTabWidget->addTab(modifierTab, QString());
        supprimerTab = new QWidget();
        supprimerTab->setObjectName("supprimerTab");
        supprimerLayout = new QVBoxLayout(supprimerTab);
        supprimerLayout->setSpacing(20);
        supprimerLayout->setObjectName("supprimerLayout");
        supprimerLayout->setContentsMargins(16, 16, 16, 16);
        supprimerTitle = new QLabel(supprimerTab);
        supprimerTitle->setObjectName("supprimerTitle");
        supprimerTitle->setFont(font1);

        supprimerLayout->addWidget(supprimerTitle);

        deleteEmployeeTable = new QTableWidget(supprimerTab);
        if (deleteEmployeeTable->columnCount() < 6)
            deleteEmployeeTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        deleteEmployeeTable->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        deleteEmployeeTable->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        deleteEmployeeTable->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        deleteEmployeeTable->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        deleteEmployeeTable->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        deleteEmployeeTable->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        deleteEmployeeTable->setObjectName("deleteEmployeeTable");
        deleteEmployeeTable->setMinimumSize(QSize(600, 300));
        deleteEmployeeTable->setRowCount(0);
        deleteEmployeeTable->setColumnCount(6);
        deleteEmployeeTable->horizontalHeader()->setVisible(true);
        deleteEmployeeTable->verticalHeader()->setVisible(false);

        supprimerLayout->addWidget(deleteEmployeeTable);

        deleteSelectedButton = new QPushButton(supprimerTab);
        deleteSelectedButton->setObjectName("deleteSelectedButton");
        deleteSelectedButton->setMinimumSize(QSize(200, 68));

        supprimerLayout->addWidget(deleteSelectedButton);

        deleteWarningLabel = new QLabel(supprimerTab);
        deleteWarningLabel->setObjectName("deleteWarningLabel");
        deleteWarningLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #dc3545;\n"
"    font-weight: bold;\n"
"    padding: 8px;\n"
"    background-color: #f8d7da;\n"
"    border: 1px solid #f5c6cb;\n"
"    border-radius: 4px;\n"
"}"));

        supprimerLayout->addWidget(deleteWarningLabel);

        employerTabWidget->addTab(supprimerTab, QString());
        ajouterTab = new QWidget();
        ajouterTab->setObjectName("ajouterTab");
        ajouterLayout = new QVBoxLayout(ajouterTab);
        ajouterLayout->setSpacing(20);
        ajouterLayout->setObjectName("ajouterLayout");
        ajouterLayout->setContentsMargins(16, 16, 16, 16);
        verticalSpacer_add = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        ajouterLayout->addItem(verticalSpacer_add);

        employerTabWidget->addTab(ajouterTab, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        employerTabWidget->addTab(tab, QString());

        employerPageLayout->addWidget(employerTabWidget);

        stackedWidget->addWidget(employerPage);
        projectsPage = new QWidget();
        projectsPage->setObjectName("projectsPage");
        projectsLayout = new QVBoxLayout(projectsPage);
        projectsLayout->setSpacing(0);
        projectsLayout->setObjectName("projectsLayout");
        projectsLayout->setContentsMargins(0, 0, 0, 0);
        equipmentMainWidget = new QWidget(projectsPage);
        equipmentMainWidget->setObjectName("equipmentMainWidget");
        equipmentMainWidget->setMinimumSize(QSize(1199, 650));
        equipmentMainWidget->setStyleSheet(QString::fromUtf8("QWidget { background-color: #E6E6FA ;  }"));
        equipmentGroupBox = new QGroupBox(equipmentMainWidget);
        equipmentGroupBox->setObjectName("equipmentGroupBox");
        equipmentGroupBox->setGeometry(QRect(10, 0, 341, 611));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        equipmentGroupBox->setFont(font2);
        equipmentGroupBox->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox {\n"
"    background-color: #FFFFFF;\n"
"    border: 10px solid #9305F2;   /* Violet clair */\n"
"    border-radius: 15px;         /* Coins arrondis */\n"
"    margin-top: 30px;            /* D\303\251calage du titre */\n"
"    padding: 12px;\n"
"    color: #48038C;              /* Couleur du texte interne */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Titre du QGroupBox */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;   /* Centr\303\251 en haut */\n"
"    padding: 10px 30px;\n"
"    background-color: white;\n"
"    color: #48038C;\n"
"    border-radius: 10px;\n"
"    font-weight: bold;\n"
"}\n"
""));
        equipmentLabel1 = new QLabel(equipmentGroupBox);
        equipmentLabel1->setObjectName("equipmentLabel1");
        equipmentLabel1->setGeometry(QRect(10, 50, 161, 20));
        equipmentLabel1->setStyleSheet(QString::fromUtf8("QLabel {background-color: transparent; color: #260259; /* Texte sombre lisible */ font-size: 18px; font-weight: bold; }"));
        equipmentLabel2 = new QLabel(equipmentGroupBox);
        equipmentLabel2->setObjectName("equipmentLabel2");
        equipmentLabel2->setGeometry(QRect(10, 110, 161, 20));
        equipmentLabel2->setStyleSheet(QString::fromUtf8("QLabel {background-color: transparent; color: #260259; /* Texte sombre lisible */ font-size: 18px; font-weight: bold; }"));
        equipmentLineEdit2 = new QLineEdit(equipmentGroupBox);
        equipmentLineEdit2->setObjectName("equipmentLineEdit2");
        equipmentLineEdit2->setGeometry(QRect(10, 130, 271, 26));
        equipmentLineEdit2->setStyleSheet(QString::fromUtf8(" QLineEdit { background: #FFFFFF; border: 2px solid #6BA5F2; border-radius: 10px; padding: 6px 10px; color: #260259; } QLineEdit:focus { border: 2px solid #9305F2; background: #F3E9FF; }"));
        equipmentLineEdit1 = new QLineEdit(equipmentGroupBox);
        equipmentLineEdit1->setObjectName("equipmentLineEdit1");
        equipmentLineEdit1->setGeometry(QRect(10, 70, 271, 26));
        equipmentLineEdit1->setStyleSheet(QString::fromUtf8(" QLineEdit { background: #FFFFFF; border: 2px solid #6BA5F2; border-radius: 10px; padding: 6px 10px; color: #260259; } QLineEdit:focus { border: 2px solid #9305F2; background: #F3E9FF; }"));
        equipmentTypeWidget = new QWidget(equipmentGroupBox);
        equipmentTypeWidget->setObjectName("equipmentTypeWidget");
        equipmentTypeWidget->setGeometry(QRect(20, 320, 185, 40));
        equipmentTypeLayout = new QHBoxLayout(equipmentTypeWidget);
        equipmentTypeLayout->setObjectName("equipmentTypeLayout");
        equipmentTypeLayout->setContentsMargins(0, 0, 0, 0);
        equipmentTypeLabel = new QLabel(equipmentTypeWidget);
        equipmentTypeLabel->setObjectName("equipmentTypeLabel");
        equipmentTypeLabel->setStyleSheet(QString::fromUtf8("QLabel {background-color: transparent; color: #260259; /* Texte sombre lisible */ font-size: 18px; font-weight: bold; }"));

        equipmentTypeLayout->addWidget(equipmentTypeLabel);

        equipmentComboBox = new QComboBox(equipmentTypeWidget);
        equipmentComboBox->addItem(QString());
        equipmentComboBox->addItem(QString());
        equipmentComboBox->addItem(QString());
        equipmentComboBox->setObjectName("equipmentComboBox");
        equipmentComboBox->setStyleSheet(QString::fromUtf8(" QComboBox { background: #FFFFFF; border: 2px solid #6BA5F2; border-radius: 10px; padding: 6px 10px; color: #260259; } QComboBox:focus { border: 2px solid #9305F2; background: #F3E9FF; }"));

        equipmentTypeLayout->addWidget(equipmentComboBox);

        equipmentDateWidget = new QWidget(equipmentGroupBox);
        equipmentDateWidget->setObjectName("equipmentDateWidget");
        equipmentDateWidget->setGeometry(QRect(10, 370, 266, 40));
        equipmentDateLayout = new QHBoxLayout(equipmentDateWidget);
        equipmentDateLayout->setObjectName("equipmentDateLayout");
        equipmentDateLayout->setContentsMargins(0, 0, 0, 0);
        equipmentDateLabel = new QLabel(equipmentDateWidget);
        equipmentDateLabel->setObjectName("equipmentDateLabel");
        equipmentDateLabel->setStyleSheet(QString::fromUtf8("QLabel {background-color: transparent; color: #260259; /* Texte sombre lisible */ font-size: 18px; font-weight: bold; }"));

        equipmentDateLayout->addWidget(equipmentDateLabel);

        equipmentDateEdit = new QDateEdit(equipmentDateWidget);
        equipmentDateEdit->setObjectName("equipmentDateEdit");
        equipmentDateEdit->setStyleSheet(QString::fromUtf8(" QDateEdit { background: #FFFFFF; border: 2px solid #6BA5F2; border-radius: 10px; padding: 6px 10px; color: #260259; }  QDateEdit:focus { border: 2px solid #9305F2; background: #F3E9FF; }"));

        equipmentDateLayout->addWidget(equipmentDateEdit);

        equipmentButtonsWidget = new QWidget(equipmentGroupBox);
        equipmentButtonsWidget->setObjectName("equipmentButtonsWidget");
        equipmentButtonsWidget->setGeometry(QRect(40, 540, 261, 38));
        equipmentButtonsLayout = new QHBoxLayout(equipmentButtonsWidget);
        equipmentButtonsLayout->setObjectName("equipmentButtonsLayout");
        equipmentButtonsLayout->setContentsMargins(0, 0, 0, 0);
        equipmentSaveBtn = new QPushButton(equipmentButtonsWidget);
        equipmentSaveBtn->setObjectName("equipmentSaveBtn");
        QFont font3;
        equipmentSaveBtn->setFont(font3);
        equipmentSaveBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #9305F2;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 6px 12px;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #7a04c2; /* un peu plus sombre au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5c0391; /* encore plus sombre quand press\303\251 */\n"
"}\n"
""));

        equipmentButtonsLayout->addWidget(equipmentSaveBtn);

        equipmentCancelBtn = new QPushButton(equipmentButtonsWidget);
        equipmentCancelBtn->setObjectName("equipmentCancelBtn");
        equipmentCancelBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    color: #6BA5F2;\n"
"    border: 0px solid #6BA5F2;\n"
"    border-radius: 0px;\n"
"    padding: 0px 0px;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f0f8ff; /* l\303\251ger bleu clair au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #dceeff; /* bleu encore plus marqu\303\251 quand press\303\251 */\n"
"}\n"
""));

        equipmentButtonsLayout->addWidget(equipmentCancelBtn);

        equipmentListLabel = new QLabel(equipmentMainWidget);
        equipmentListLabel->setObjectName("equipmentListLabel");
        equipmentListLabel->setGeometry(QRect(380, 60, 301, 41));
        equipmentListLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent;\n"
"    color: #48038C;\n"
"    font-size: 30px;   /* plus grand pour un titre */\n"
"    font-weight: bold; /* en gras */\n"
"}\n"
""));
        equipmentTableWidget = new QTableWidget(equipmentMainWidget);
        if (equipmentTableWidget->columnCount() < 6)
            equipmentTableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        equipmentTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        equipmentTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        equipmentTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        equipmentTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        equipmentTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        equipmentTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem17);
        equipmentTableWidget->setObjectName("equipmentTableWidget");
        equipmentTableWidget->setGeometry(QRect(360, 101, 791, 261));
        equipmentTableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: #F5F0FF;   /* Violet tr\303\250s tr\303\250s clair */\n"
"    border: 2px solid #1034A6;\n"
"    border-radius: 12px;\n"
"    gridline-color: white;       /* Lignes blanches */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #1034A6;   /* Bleu fonc\303\251 */\n"
"    color: white;                /* Texte blanc */\n"
"    border: none;\n"
"    padding: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QHeaderView::section:first {\n"
"    border-top-left-radius: 8px;\n"
"}\n"
"\n"
"QHeaderView::section:last {\n"
"    border-top-right-radius: 8px;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    border: 1px solid white;     /* Bordures blanches entre cellules */\n"
"}\n"
""));
        equipmentPdfBtn = new QPushButton(equipmentMainWidget);
        equipmentPdfBtn->setObjectName("equipmentPdfBtn");
        equipmentPdfBtn->setGeometry(QRect(690, 60, 51, 41));
        equipmentPdfBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    color: #6BA5F2;\n"
"    border: 0px solid #6BA5F2;\n"
"    border-radius: 0px;\n"
"    padding: 0px 0px;\n"
"    font-size: 18px;\n"
"}"));
        equipmentSearchWidget = new QWidget(equipmentMainWidget);
        equipmentSearchWidget->setObjectName("equipmentSearchWidget");
        equipmentSearchWidget->setGeometry(QRect(800, 60, 301, 40));
        equipmentSearchWidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color:#9305F2;   /* fond violet */\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: white;     /* champ blanc */\n"
"    color: #333;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding-left: 25px;          /* espace pour l'ic\303\264ne de recherche */\n"
"    padding-right: 25px;         /* espace pour l'ic\303\264ne d'action */\n"
"    height: 28px;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
""));
        equipmentSearchLayoutWidget = new QWidget(equipmentSearchWidget);
        equipmentSearchLayoutWidget->setObjectName("equipmentSearchLayoutWidget");
        equipmentSearchLayoutWidget->setGeometry(QRect(0, 0, 291, 37));
        equipmentSearchLayout = new QHBoxLayout(equipmentSearchLayoutWidget);
        equipmentSearchLayout->setObjectName("equipmentSearchLayout");
        equipmentSearchLayout->setContentsMargins(0, 0, 0, 0);
        equipmentSearchBtn = new QPushButton(equipmentSearchLayoutWidget);
        equipmentSearchBtn->setObjectName("equipmentSearchBtn");
        equipmentSearchBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #6BA5F2;\n"
"    background-color: white;\n"
"    border: 1px solid #6BA5F2;\n"
"}"));

        equipmentSearchLayout->addWidget(equipmentSearchBtn);

        equipmentSearchLineEdit = new QLineEdit(equipmentSearchLayoutWidget);
        equipmentSearchLineEdit->setObjectName("equipmentSearchLineEdit");

        equipmentSearchLayout->addWidget(equipmentSearchLineEdit);

        equipmentSortWidget = new QWidget(equipmentMainWidget);
        equipmentSortWidget->setObjectName("equipmentSortWidget");
        equipmentSortWidget->setGeometry(QRect(390, 380, 301, 40));
        equipmentSortLayout = new QHBoxLayout(equipmentSortWidget);
        equipmentSortLayout->setObjectName("equipmentSortLayout");
        equipmentSortLayout->setContentsMargins(0, 0, 0, 0);
        equipmentSortLabel = new QLabel(equipmentSortWidget);
        equipmentSortLabel->setObjectName("equipmentSortLabel");
        equipmentSortLabel->setStyleSheet(QString::fromUtf8("QLabel { color: #260259; /* Texte sombre lisible */ font-size: 18px; font-weight: bold; }"));

        equipmentSortLayout->addWidget(equipmentSortLabel);

        equipmentSortComboBox = new QComboBox(equipmentSortWidget);
        equipmentSortComboBox->addItem(QString());
        equipmentSortComboBox->addItem(QString());
        equipmentSortComboBox->addItem(QString());
        equipmentSortComboBox->setObjectName("equipmentSortComboBox");
        equipmentSortComboBox->setStyleSheet(QString::fromUtf8(" QComboBox { background: #FFFFFF; border: 2px solid #6BA5F2; border-radius: 10px; padding: 6px 10px; color: #260259; } QComboBox:focus { border: 2px solid #9305F2; background: #F3E9FF; }"));

        equipmentSortLayout->addWidget(equipmentSortComboBox);

        equipmentSortBtn = new QPushButton(equipmentSortWidget);
        equipmentSortBtn->setObjectName("equipmentSortBtn");
        equipmentSortBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #9305F2;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 6px 12px;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #7a04c2; /* un peu plus sombre au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5c0391; /* encore plus sombre quand press\303\251 */\n"
"}\n"
""));

        equipmentSortLayout->addWidget(equipmentSortBtn);


        projectsLayout->addWidget(equipmentMainWidget);

        stackedWidget->addWidget(projectsPage);
        clientsPage = new QWidget();
        clientsPage->setObjectName("clientsPage");
        clientsLayout = new QVBoxLayout(clientsPage);
        clientsLayout->setSpacing(0);
        clientsLayout->setObjectName("clientsLayout");
        clientsLayout->setContentsMargins(0, 0, 0, 0);
        clientMainGroupBox = new QGroupBox(clientsPage);
        clientMainGroupBox->setObjectName("clientMainGroupBox");
        clientMainGroupBox->setMinimumSize(QSize(1194, 643));
        clientMainGroupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        clientFormGroupBox = new QGroupBox(clientMainGroupBox);
        clientFormGroupBox->setObjectName("clientFormGroupBox");
        clientFormGroupBox->setGeometry(QRect(40, 60, 221, 481));
        clientFormGroupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 15px;\n"
"    padding: 10px;\n"
"    background-color: #F3E8FD;\n"
"    margin-top: 10px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    color: #8A2BE2;\n"
"    font-weight: bold;\n"
"}"));
        clientIdLabel = new QLabel(clientFormGroupBox);
        clientIdLabel->setObjectName("clientIdLabel");
        clientIdLabel->setGeometry(QRect(50, 80, 81, 31));
        clientIdLabel->setStyleSheet(QString::fromUtf8("QLabel {background-color: transparent; color: #260259; /* Texte sombre lisible */ font-size: 18px; font-weight: bold; }"));
        clientIdLineEdit = new QLineEdit(clientFormGroupBox);
        clientIdLineEdit->setObjectName("clientIdLineEdit");
        clientIdLineEdit->setGeometry(QRect(40, 110, 161, 26));
        clientIdLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit { background: #FFFFFF; border: 2px solid #6BA5F2; border-radius: 10px; padding: 6px 10px; color: #260259; } QLineEdit:focus  { border: 2px solid #9305F2; background: #F3E9FF; }"));
        clientNomLabel = new QLabel(clientFormGroupBox);
        clientNomLabel->setObjectName("clientNomLabel");
        clientNomLabel->setGeometry(QRect(50, 140, 81, 31));
        clientNomLabel->setStyleSheet(QString::fromUtf8("QLabel {background-color: transparent; color: #260259; /* Texte sombre lisible */ font-size: 18px; font-weight: bold; }"));
        clientNomLineEdit = new QLineEdit(clientFormGroupBox);
        clientNomLineEdit->setObjectName("clientNomLineEdit");
        clientNomLineEdit->setGeometry(QRect(40, 170, 161, 26));
        clientNomLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit { background: #FFFFFF; border: 2px solid #6BA5F2; border-radius: 10px; padding: 6px 10px; color: #260259; } QLineEdit:focus  { border: 2px solid #9305F2; background: #F3E9FF; }"));
        clientPrenomLabel = new QLabel(clientFormGroupBox);
        clientPrenomLabel->setObjectName("clientPrenomLabel");
        clientPrenomLabel->setGeometry(QRect(50, 210, 91, 31));
        clientPrenomLabel->setStyleSheet(QString::fromUtf8("QLabel {background-color: transparent; color: #260259; /* Texte sombre lisible */ font-size: 18px; font-weight: bold; }"));
        clientPrenomLineEdit = new QLineEdit(clientFormGroupBox);
        clientPrenomLineEdit->setObjectName("clientPrenomLineEdit");
        clientPrenomLineEdit->setGeometry(QRect(40, 240, 161, 26));
        clientPrenomLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit { background: #FFFFFF; border: 2px solid #6BA5F2; border-radius: 10px; padding: 6px 10px; color: #260259; } QLineEdit:focus  { border: 2px solid #9305F2; background: #F3E9FF; }"));
        clientTelephoneLabel = new QLabel(clientFormGroupBox);
        clientTelephoneLabel->setObjectName("clientTelephoneLabel");
        clientTelephoneLabel->setGeometry(QRect(50, 270, 111, 31));
        clientTelephoneLabel->setStyleSheet(QString::fromUtf8("QLabel {background-color: transparent; color: #260259; /* Texte sombre lisible */ font-size: 18px; font-weight: bold; }"));
        clientTelephoneLineEdit = new QLineEdit(clientFormGroupBox);
        clientTelephoneLineEdit->setObjectName("clientTelephoneLineEdit");
        clientTelephoneLineEdit->setGeometry(QRect(40, 310, 161, 26));
        clientTelephoneLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit { background: #FFFFFF; border: 2px solid #6BA5F2; border-radius: 10px; padding: 6px 10px; color: #260259; } QLineEdit:focus  { border: 2px solid #9305F2; background: #F3E9FF; }"));
        clientEmailLabel = new QLabel(clientFormGroupBox);
        clientEmailLabel->setObjectName("clientEmailLabel");
        clientEmailLabel->setGeometry(QRect(50, 350, 71, 21));
        clientEmailLabel->setStyleSheet(QString::fromUtf8("QLabel {background-color: transparent; color: #260259; /* Texte sombre lisible */ font-size: 18px; font-weight: bold; }"));
        clientEmailLineEdit = new QLineEdit(clientFormGroupBox);
        clientEmailLineEdit->setObjectName("clientEmailLineEdit");
        clientEmailLineEdit->setGeometry(QRect(42, 380, 161, 26));
        clientEmailLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit { background: #FFFFFF; border: 2px solid #6BA5F2; border-radius: 10px; padding: 6px 10px; color: #260259; } QLineEdit:focus  { border: 2px solid #9305F2; background: #F3E9FF; }"));
        clientValidateBtn = new QPushButton(clientFormGroupBox);
        clientValidateBtn->setObjectName("clientValidateBtn");
        clientValidateBtn->setGeometry(QRect(50, 420, 141, 41));
        clientValidateBtn->setFont(font3);
        clientValidateBtn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color: #9305F2;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 6px 12px;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #7a04c2; /* un peu plus sombre au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5c0391; /* encore plus sombre quand press\303\251 */\n"
"}"));
        clientTableWidget = new QTableWidget(clientMainGroupBox);
        if (clientTableWidget->columnCount() < 6)
            clientTableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        clientTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        clientTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        clientTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        clientTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        clientTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        clientTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem23);
        clientTableWidget->setObjectName("clientTableWidget");
        clientTableWidget->setGeometry(QRect(270, 250, 791, 241));
        clientTableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: #F5F0FF;   /* Violet tr\303\250s tr\303\250s clair */\n"
"    border: 2px solid #1034A6;\n"
"    border-radius: 12px;\n"
"    gridline-color: white;       /* Lignes blanches */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #1034A6;   /* Bleu fonc\303\251 */\n"
"    color: white;                /* Texte blanc */\n"
"    border: none;\n"
"    padding: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QHeaderView::section:first {\n"
"    border-top-left-radius: 8px;\n"
"}\n"
"\n"
"QHeaderView::section:last {\n"
"    border-top-right-radius: 8px;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    border: 1px solid white;     /* Bordures blanches entre cellules */\n"
"}"));
        clientSearchWidget = new QWidget(clientMainGroupBox);
        clientSearchWidget->setObjectName("clientSearchWidget");
        clientSearchWidget->setGeometry(QRect(650, 180, 401, 51));
        clientSearchWidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color:#9305F2;   /* fond violet */\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: white;     /* champ blanc */\n"
"    color: #333;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding-left: 25px;          /* espace pour l'ic\303\264ne de recherche */\n"
"    padding-right: 25px;         /* espace pour l'ic\303\264ne d'action */\n"
"    height: 28px;\n"
"    font-size: 15px;\n"
"}"));
        clientSearchLayoutWidget = new QWidget(clientSearchWidget);
        clientSearchLayoutWidget->setObjectName("clientSearchLayoutWidget");
        clientSearchLayoutWidget->setGeometry(QRect(30, 10, 361, 30));
        clientSearchLayout = new QHBoxLayout(clientSearchLayoutWidget);
        clientSearchLayout->setObjectName("clientSearchLayout");
        clientSearchLayout->setContentsMargins(0, 0, 0, 0);
        clientSearchBtn = new QPushButton(clientSearchLayoutWidget);
        clientSearchBtn->setObjectName("clientSearchBtn");
        clientSearchBtn->setStyleSheet(QString::fromUtf8("font-size: 16px"));

        clientSearchLayout->addWidget(clientSearchBtn);

        clientSearchLineEdit = new QLineEdit(clientSearchLayoutWidget);
        clientSearchLineEdit->setObjectName("clientSearchLineEdit");

        clientSearchLayout->addWidget(clientSearchLineEdit);

        clientListLabel = new QLabel(clientMainGroupBox);
        clientListLabel->setObjectName("clientListLabel");
        clientListLabel->setGeometry(QRect(280, 180, 351, 51));
        clientListLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent;\n"
"    color: #48038C;\n"
"    font-size: 30px;   /* plus grand pour un titre */\n"
"    font-weight: bold; /* en gras */\n"
"}"));
        clientPdfBtn = new QPushButton(clientMainGroupBox);
        clientPdfBtn->setObjectName("clientPdfBtn");
        clientPdfBtn->setGeometry(QRect(530, 180, 101, 51));
        clientPdfBtn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color: #9305F2;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 6px 12px;\n"
"    font-size: 18px;\n"
"}"));
        clientSortWidget = new QWidget(clientMainGroupBox);
        clientSortWidget->setObjectName("clientSortWidget");
        clientSortWidget->setGeometry(QRect(590, 510, 281, 40));
        clientSortLayout = new QHBoxLayout(clientSortWidget);
        clientSortLayout->setObjectName("clientSortLayout");
        clientSortLayout->setContentsMargins(0, 0, 0, 0);
        clientSortLabel = new QLabel(clientSortWidget);
        clientSortLabel->setObjectName("clientSortLabel");
        clientSortLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent;\n"
"    color: #48038C;\n"
"    font-size: 18px;   /* plus grand pour un titre */\n"
"    font-weight: bold; /* en gras */\n"
"}"));

        clientSortLayout->addWidget(clientSortLabel);

        clientSortComboBox = new QComboBox(clientSortWidget);
        clientSortComboBox->addItem(QString());
        clientSortComboBox->addItem(QString());
        clientSortComboBox->addItem(QString());
        clientSortComboBox->setObjectName("clientSortComboBox");
        clientSortComboBox->setStyleSheet(QString::fromUtf8("QComboBox { background: #FFFFFF; border: 2px solid #6BA5F2; border-radius: 10px; padding: 6px 10px; color: #260259; } QComboBox:focus { border: 2px solid #9305F2; background: #F3E9FF; }"));

        clientSortLayout->addWidget(clientSortComboBox);

        clientSortBtn = new QPushButton(clientSortWidget);
        clientSortBtn->setObjectName("clientSortBtn");
        clientSortBtn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color: #9305F2;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 6px 12px;\n"
"    font-size: 18px;\n"
"}"));

        clientSortLayout->addWidget(clientSortBtn);


        clientsLayout->addWidget(clientMainGroupBox);

        stackedWidget->addWidget(clientsPage);
        libraryPage = new QWidget();
        libraryPage->setObjectName("libraryPage");
        libraryLayout = new QVBoxLayout(libraryPage);
        libraryLayout->setSpacing(20);
        libraryLayout->setObjectName("libraryLayout");
        libraryLayout->setContentsMargins(24, 24, 24, 24);
        stackedWidget->addWidget(libraryPage);
        settingsPage = new QWidget();
        settingsPage->setObjectName("settingsPage");
        settingsPageLayout = new QVBoxLayout(settingsPage);
        settingsPageLayout->setSpacing(20);
        settingsPageLayout->setObjectName("settingsPageLayout");
        settingsPageLayout->setContentsMargins(24, 24, 24, 24);
        stackedWidget->addWidget(settingsPage);
        editorPage = new QWidget();
        editorPage->setObjectName("editorPage");
        editorLayout = new QVBoxLayout(editorPage);
        editorLayout->setSpacing(20);
        editorLayout->setObjectName("editorLayout");
        editorLayout->setContentsMargins(24, 24, 24, 24);
        stackedWidget->addWidget(editorPage);
        shopPage = new QWidget();
        shopPage->setObjectName("shopPage");
        shopLayout = new QVBoxLayout(shopPage);
        shopLayout->setSpacing(20);
        shopLayout->setObjectName("shopLayout");
        shopLayout->setContentsMargins(24, 24, 24, 24);
        stackedWidget->addWidget(shopPage);

        normalContentLayout->addWidget(stackedWidget);

        mainStackedWidget->addWidget(normalContentPage);
        loginOverlayPage = new QWidget();
        loginOverlayPage->setObjectName("loginOverlayPage");
        loginOverlayPage->setStyleSheet(QString::fromUtf8("QWidget#loginOverlayPage {\n"
"    background-color: rgba(0, 0, 0, 0.5);\n"
"}"));
        loginOverlayLayout = new QVBoxLayout(loginOverlayPage);
        loginOverlayLayout->setSpacing(20);
        loginOverlayLayout->setObjectName("loginOverlayLayout");
        loginOverlayLayout->setContentsMargins(50, 50, 50, 50);
        topSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        loginOverlayLayout->addItem(topSpacer);

        loginFormWidget = new QWidget(loginOverlayPage);
        loginFormWidget->setObjectName("loginFormWidget");
        loginFormWidget->setMinimumSize(QSize(400, 300));
        loginFormWidget->setMaximumSize(QSize(400, 300));
        loginFormWidget->setStyleSheet(QString::fromUtf8("QWidget#loginFormWidget {\n"
"    background-color: #ffffff;\n"
"    border-radius: 8px;\n"
"    border: 1px solid #dee2e6;\n"
"}"));
        loginFormLayout = new QVBoxLayout(loginFormWidget);
        loginFormLayout->setSpacing(25);
        loginFormLayout->setObjectName("loginFormLayout");
        loginFormLayout->setContentsMargins(40, 40, 40, 40);
        loginTitle = new QLabel(loginFormWidget);
        loginTitle->setObjectName("loginTitle");
        loginTitle->setFont(font1);
        loginTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    background-color: transparent;\n"
"}"));
        loginTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        loginFormLayout->addWidget(loginTitle);

        usernameLabel = new QLabel(loginFormWidget);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setFont(font1);
        usernameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    background-color: transparent;\n"
"}"));

        loginFormLayout->addWidget(usernameLabel);

        usernameLineEdit = new QLineEdit(loginFormWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setMinimumSize(QSize(0, 35));
        usernameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #dee2e6;\n"
"    border-radius: 6px;\n"
"    padding: 8px 12px;\n"
"    font-size: 14px;\n"
"    background-color: white;\n"
"    color: #495057;\n"
"    font-family: 'Times New Roman', serif;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #003366;\n"
"}"));

        loginFormLayout->addWidget(usernameLineEdit);

        passwordLabel = new QLabel(loginFormWidget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setFont(font1);
        passwordLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    background-color: transparent;\n"
"}"));

        loginFormLayout->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(loginFormWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setMinimumSize(QSize(0, 35));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #dee2e6;\n"
"    border-radius: 6px;\n"
"    padding: 8px 12px;\n"
"    font-size: 14px;\n"
"    background-color: white;\n"
"    color: #495057;\n"
"    font-family: 'Times New Roman', serif;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #003366;\n"
"}"));
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        loginFormLayout->addWidget(passwordLineEdit);

        loginSubmitButton = new QPushButton(loginFormWidget);
        loginSubmitButton->setObjectName("loginSubmitButton");
        loginSubmitButton->setMinimumSize(QSize(0, 40));
        loginSubmitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #003366;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 20px;\n"
"    font-family: 'Times New Roman', serif;\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #002244;\n"
"}"));

        loginFormLayout->addWidget(loginSubmitButton);

        backToMainButton = new QPushButton(loginFormWidget);
        backToMainButton->setObjectName("backToMainButton");
        backToMainButton->setMinimumSize(QSize(0, 35));
        backToMainButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    color: #6c757d;\n"
"    border: 1px solid #dee2e6;\n"
"    border-radius: 4px;\n"
"    padding: 8px 16px;\n"
"    font-family: 'Times New Roman', serif;\n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #f8f9fa;\n"
"}"));

        loginFormLayout->addWidget(backToMainButton);


        loginOverlayLayout->addWidget(loginFormWidget);

        bottomSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        loginOverlayLayout->addItem(bottomSpacer);

        mainStackedWidget->addWidget(loginOverlayPage);

        horizontalLayout->addWidget(mainStackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        mainStackedWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        employerTabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion d'Entreprise", nullptr));
        logoLabel->setText(QCoreApplication::translate("MainWindow", "Gestion d'Entreprise", nullptr));
        employerBtn->setText(QCoreApplication::translate("MainWindow", "Employ\303\251s", nullptr));
        projectsBtn->setText(QCoreApplication::translate("MainWindow", "\303\211quipement", nullptr));
        clientsBtn->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        resourcesBtn->setText(QCoreApplication::translate("MainWindow", "Biblioth\303\250que", nullptr));
        sponsorsBtn->setText(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        templatesBtn->setText(QCoreApplication::translate("MainWindow", "\303\211diteur", nullptr));
        shopBtn->setText(QCoreApplication::translate("MainWindow", "Boutique", nullptr));
        contactTitle->setText(QCoreApplication::translate("MainWindow", "Contactez-nous", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        nameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Votre nom complet", nullptr));
        emailLabel->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        emailLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "adresse@email.com", nullptr));
        subjectLabel->setText(QCoreApplication::translate("MainWindow", "Sujet", nullptr));
        subjectLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Sujet du message", nullptr));
        messageLabel->setText(QCoreApplication::translate("MainWindow", "Message", nullptr));
        messageTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Votre message...", nullptr));
        contactSubmitBtn->setText(QCoreApplication::translate("MainWindow", "Envoyer", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Connexion", nullptr));
        searchLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Rechercher par nom, ID...", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        sortByIdButton->setText(QCoreApplication::translate("MainWindow", "Tri ID", nullptr));
        exportPdfButton->setText(QCoreApplication::translate("MainWindow", "Exporter PDF", nullptr));
        QTableWidgetItem *___qtablewidgetitem = modifyEmployeeTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = modifyEmployeeTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = modifyEmployeeTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = modifyEmployeeTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "T\303\251l\303\251phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = modifyEmployeeTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Poste", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = modifyEmployeeTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        editSelectedButton->setText(QCoreApplication::translate("MainWindow", "Modifier l'employ\303\251 s\303\251lectionn\303\251", nullptr));
        employerTabWidget->setTabText(employerTabWidget->indexOf(modifierTab), QCoreApplication::translate("MainWindow", "Afficher", nullptr));
        supprimerTitle->setText(QCoreApplication::translate("MainWindow", "Supprimer un employ\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = deleteEmployeeTable->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = deleteEmployeeTable->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = deleteEmployeeTable->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = deleteEmployeeTable->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "T\303\251l\303\251phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = deleteEmployeeTable->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Poste", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = deleteEmployeeTable->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        deleteSelectedButton->setText(QCoreApplication::translate("MainWindow", "Supprimer l'employ\303\251 s\303\251lectionn\303\251", nullptr));
        deleteWarningLabel->setText(QCoreApplication::translate("MainWindow", "\342\232\240\357\270\217 Attention: La suppression d'un employ\303\251 est irr\303\251versible!", nullptr));
        employerTabWidget->setTabText(employerTabWidget->indexOf(supprimerTab), QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        employerTabWidget->setTabText(employerTabWidget->indexOf(ajouterTab), QCoreApplication::translate("MainWindow", "ChatBot", nullptr));
        employerTabWidget->setTabText(employerTabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "QR Code", nullptr));
        equipmentGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Formulaire", nullptr));
        equipmentLabel1->setText(QCoreApplication::translate("MainWindow", "ID_Equipement *", nullptr));
        equipmentLabel2->setText(QCoreApplication::translate("MainWindow", "Marque/Mod\303\251le *", nullptr));
        equipmentTypeLabel->setText(QCoreApplication::translate("MainWindow", "Type *", nullptr));
        equipmentComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "PC", nullptr));
        equipmentComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Tablette ", nullptr));
        equipmentComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Smartphone", nullptr));

        equipmentDateLabel->setText(QCoreApplication::translate("MainWindow", "Date de depot *", nullptr));
        equipmentSaveBtn->setText(QCoreApplication::translate("MainWindow", "Enregistrer", nullptr));
        equipmentCancelBtn->setText(QCoreApplication::translate("MainWindow", "Annuler ", nullptr));
        equipmentListLabel->setText(QCoreApplication::translate("MainWindow", "Liste des \303\251quipement", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = equipmentTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "ID ", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = equipmentTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = equipmentTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Marque/Mod\303\251le", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = equipmentTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "DateDepot", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = equipmentTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Etat", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = equipmentTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Action", nullptr));
        equipmentPdfBtn->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
        equipmentSearchBtn->setText(QCoreApplication::translate("MainWindow", "\360\237\224\215", nullptr));
        equipmentSortLabel->setText(QCoreApplication::translate("MainWindow", "Trier par ", nullptr));
        equipmentSortComboBox->setItemText(0, QString());
        equipmentSortComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Type", nullptr));
        equipmentSortComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Etat", nullptr));

        equipmentSortBtn->setText(QCoreApplication::translate("MainWindow", "Trier", nullptr));
        clientMainGroupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        clientFormGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Formulaire Clients", nullptr));
        clientIdLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">ID</span></p></body></html>", nullptr));
        clientNomLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">Nom</span></p></body></html>", nullptr));
        clientPrenomLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">Prenom</span></p></body></html>", nullptr));
        clientTelephoneLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">T\303\251l\303\251phone</span></p></body></html>", nullptr));
        clientEmailLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">Email</span></p></body></html>", nullptr));
        clientValidateBtn->setText(QCoreApplication::translate("MainWindow", "Valider\342\230\221\357\270\217 ", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = clientTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = clientTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = clientTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = clientTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "T\303\251l\303\251phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = clientTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        clientSearchBtn->setText(QCoreApplication::translate("MainWindow", "\360\237\224\215", nullptr));
        clientSearchLineEdit->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        clientListLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Liste des Clients:</p></body></html>", nullptr));
        clientPdfBtn->setText(QCoreApplication::translate("MainWindow", "\360\237\223\221PDF", nullptr));
        clientSortLabel->setText(QCoreApplication::translate("MainWindow", "Trier par ", nullptr));
        clientSortComboBox->setItemText(0, QString());
        clientSortComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Nom", nullptr));
        clientSortComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Prenom", nullptr));

        clientSortBtn->setText(QCoreApplication::translate("MainWindow", "Trier", nullptr));
        loginTitle->setText(QCoreApplication::translate("MainWindow", "Connexion", nullptr));
        usernameLabel->setText(QCoreApplication::translate("MainWindow", "Nom d'utilisateur:", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Entrez votre nom d'utilisateur", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "Mot de passe:", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Entrez votre mot de passe", nullptr));
        loginSubmitButton->setText(QCoreApplication::translate("MainWindow", "Se connecter", nullptr));
        backToMainButton->setText(QCoreApplication::translate("MainWindow", "Retour au Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_PIECES_DETACHEES_H
