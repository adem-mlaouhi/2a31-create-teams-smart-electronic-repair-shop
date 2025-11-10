/********************************************************************************
** Form generated from reading UI file 'gestionservice.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONSERVICE_H
#define UI_GESTIONSERVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestionservice
{
public:
    QWidget *centralwidget;
    QPushButton *b1;
    QPushButton *b5;
    QPushButton *b2;
    QPushButton *b4;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QFrame *frame_3;
    QLineEdit *lineEdit_3;
    QToolButton *toolButton_10;
    QLabel *label_3;
    QLabel *label_9;
    QToolButton *s1;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;
    QListView *listView;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *an;
    QLineEdit *ap;
    QPushButton *bp1;
    QToolButton *toolButton_9;
    QListView *listView_2;
    QToolButton *m1;
    QLabel *label;
    QPushButton *pushButton;
    QTableWidget *tw;
    QPushButton *b3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestionservice)
    {
        if (gestionservice->objectName().isEmpty())
            gestionservice->setObjectName("gestionservice");
        gestionservice->resize(1291, 600);
        centralwidget = new QWidget(gestionservice);
        centralwidget->setObjectName("centralwidget");
        b1 = new QPushButton(centralwidget);
        b1->setObjectName("b1");
        b1->setGeometry(QRect(10, 110, 191, 24));
        b1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #8e44ad;  /* purple background */\n"
"    color: white;               /* white text */\n"
"    border: 2px solid #732d91;  /* darker purple border */\n"
"    border-radius: 5px;         /* rounded corners */\n"
"}\n"
""));
        b5 = new QPushButton(centralwidget);
        b5->setObjectName("b5");
        b5->setGeometry(QRect(10, 310, 191, 24));
        b5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #8e44ad;  /* purple background */\n"
"    color: white;               /* white text */\n"
"    border: 2px solid #732d91;  /* darker purple border */\n"
"    border-radius: 5px;         /* rounded corners */\n"
"}\n"
""));
        b2 = new QPushButton(centralwidget);
        b2->setObjectName("b2");
        b2->setGeometry(QRect(10, 160, 191, 24));
        b2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #8e44ad;  /* purple background */\n"
"    color: white;               /* white text */\n"
"    border: 2px solid #732d91;  /* darker purple border */\n"
"    border-radius: 5px;         /* rounded corners */\n"
"}\n"
""));
        b4 = new QPushButton(centralwidget);
        b4->setObjectName("b4");
        b4->setGeometry(QRect(10, 260, 191, 24));
        b4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #8e44ad;  /* purple background */\n"
"    color: white;               /* white text */\n"
"    border: 2px solid #732d91;  /* darker purple border */\n"
"    border-radius: 5px;         /* rounded corners */\n"
"}\n"
""));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(230, -20, 1091, 521));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(400, 350, 81, 22));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 40, 211, 61));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 16pt \"Segoe UI\";\n"
"color: rgb(170, 0, 255);"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(470, 60, 75, 24));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #8e44ad;  /* purple background */\n"
"    color: white;               /* white text */\n"
"    border: 2px solid #732d91;  /* darker purple border */\n"
"    border-radius: 5px;         /* rounded corners */\n"
"}\n"
""));
        frame_3 = new QFrame(groupBox);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(390, 110, 251, 41));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 0, 200);\n"
"border-radius: 5px;  "));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        lineEdit_3 = new QLineEdit(frame_3);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(20, 10, 191, 21));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        toolButton_10 = new QToolButton(frame_3);
        toolButton_10->setObjectName("toolButton_10");
        toolButton_10->setGeometry(QRect(220, 10, 22, 22));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 340, 61, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(170, 0, 255);"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 110, 91, 31));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(170, 0, 255);"));
        s1 = new QToolButton(groupBox);
        s1->setObjectName("s1");
        s1->setGeometry(QRect(940, 200, 51, 51));
        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 60, 271, 431));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 0, 200);\n"
"border-radius: 5px;  "));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(10, 10, 251, 411));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 10, 71, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(170, 0, 255);"));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 50, 75, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #8e44ad;  /* purple background */\n"
"    color: white;               /* white text */\n"
"    border: 2px solid #732d91;  /* darker purple border */\n"
"    border-radius: 5px;         /* rounded corners */\n"
"}\n"
""));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 80, 71, 21));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(170, 0, 255);"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 130, 81, 31));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(170, 0, 255);"));
        listView = new QListView(frame_2);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 160, 211, 121));
        listView->setStyleSheet(QString::fromUtf8("    border: 2px solid #8e44ad;  /* purple border */\n"
"   border-radius: 5px;          /* optional rounded corners */\n"
""));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 290, 71, 21));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(170, 0, 255);"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 320, 71, 21));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(170, 0, 255);"));
        an = new QLineEdit(frame_2);
        an->setObjectName("an");
        an->setGeometry(QRect(100, 290, 113, 22));
        an->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #5dade2;  \n"
"    border-radius: 4px;      \n"
"    padding: 2px;   \n"
"}\n"
""));
        ap = new QLineEdit(frame_2);
        ap->setObjectName("ap");
        ap->setGeometry(QRect(100, 320, 113, 22));
        ap->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #5dade2;  \n"
"    border-radius: 4px;      \n"
"    padding: 2px;   \n"
"}\n"
""));
        bp1 = new QPushButton(frame_2);
        bp1->setObjectName("bp1");
        bp1->setGeometry(QRect(90, 360, 75, 24));
        bp1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #8e44ad;  /* purple background */\n"
"    color: white;               /* white text */\n"
"    border: 2px solid #732d91;  /* darker purple border */\n"
"    border-radius: 5px;         /* rounded corners */\n"
"}\n"
""));
        toolButton_9 = new QToolButton(frame_2);
        toolButton_9->setObjectName("toolButton_9");
        toolButton_9->setGeometry(QRect(70, 50, 22, 22));
        listView_2 = new QListView(frame_2);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(50, 100, 141, 31));
        listView_2->setStyleSheet(QString::fromUtf8("    border: 2px solid #8e44ad;  /* purple border */\n"
"   border-radius: 5px;          /* optional rounded corners */\n"
""));
        m1 = new QToolButton(groupBox);
        m1->setObjectName("m1");
        m1->setGeometry(QRect(940, 260, 51, 51));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 161, 61));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 16pt \"Segoe UI\";\n"
"color: rgb(170, 0, 255);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(490, 350, 75, 24));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #8e44ad;  /* purple background */\n"
"    color: white;               /* white text */\n"
"    border: 2px solid #732d91;  /* darker purple border */\n"
"    border-radius: 5px;         /* rounded corners */\n"
"}\n"
""));
        tw = new QTableWidget(groupBox);
        if (tw->columnCount() < 6)
            tw->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tw->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tw->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tw->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tw->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tw->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tw->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tw->setObjectName("tw");
        tw->setGeometry(QRect(320, 180, 611, 151));
        tw->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    background-color: #0b3d91;  /* dark blue */\n"
"    color: white;               /* white text */\n"
"    font-weight: bold;          /* make header text stand out */\n"
"    border: 1px solid #062b66;  /* darker border for contrast */\n"
"    padding: 4px;               /* a bit of spacing */\n"
"    border-radius: 5px;  \n"
"}"));
        b3 = new QPushButton(centralwidget);
        b3->setObjectName("b3");
        b3->setGeometry(QRect(10, 210, 191, 24));
        b3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #8e44ad;  /* purple background */\n"
"    color: white;               /* white text */\n"
"    border: 2px solid #732d91;  /* darker purple border */\n"
"    border-radius: 5px;         /* rounded corners */\n"
"}\n"
""));
        gestionservice->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestionservice);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1291, 22));
        gestionservice->setMenuBar(menubar);
        statusbar = new QStatusBar(gestionservice);
        statusbar->setObjectName("statusbar");
        gestionservice->setStatusBar(statusbar);

        retranslateUi(gestionservice);

        QMetaObject::connectSlotsByName(gestionservice);
    } // setupUi

    void retranslateUi(QMainWindow *gestionservice)
    {
        gestionservice->setWindowTitle(QCoreApplication::translate("gestionservice", "gestionservice", nullptr));
        b1->setText(QCoreApplication::translate("gestionservice", "gestion_client", nullptr));
        b5->setText(QCoreApplication::translate("gestionservice", "Gestion d\342\200\231employ\303\251es ", nullptr));
        b2->setText(QCoreApplication::translate("gestionservice", "gestion_equipement", nullptr));
        b4->setText(QCoreApplication::translate("gestionservice", "Gestion des Pi\303\250ces d\303\251tach\303\251es ", nullptr));
        groupBox->setTitle(QString());
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("gestionservice", "A-Z", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("gestionservice", "temp", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("gestionservice", "prix", nullptr));

        label_2->setText(QCoreApplication::translate("gestionservice", "Liste de Service :", nullptr));
        pushButton_4->setText(QCoreApplication::translate("gestionservice", "\360\237\223\204PDF", nullptr));
        toolButton_10->setText(QCoreApplication::translate("gestionservice", "\360\237\224\215", nullptr));
        label_3->setText(QCoreApplication::translate("gestionservice", "Tri par :", nullptr));
        label_9->setText(QCoreApplication::translate("gestionservice", "Rechercher:", nullptr));
        s1->setText(QCoreApplication::translate("gestionservice", "\360\237\227\221\357\270\217", nullptr));
        label_4->setText(QCoreApplication::translate("gestionservice", "Photo", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gestionservice", "envoyer", nullptr));
        label_5->setText(QCoreApplication::translate("gestionservice", "Problem", nullptr));
        label_6->setText(QCoreApplication::translate("gestionservice", "Employ\303\251", nullptr));
        label_7->setText(QCoreApplication::translate("gestionservice", "Nom", nullptr));
        label_8->setText(QCoreApplication::translate("gestionservice", "Pr\303\251nom", nullptr));
        bp1->setText(QCoreApplication::translate("gestionservice", "valider", nullptr));
        toolButton_9->setText(QCoreApplication::translate("gestionservice", "...", nullptr));
        m1->setText(QCoreApplication::translate("gestionservice", "\360\237\226\212\357\270\217", nullptr));
        label->setText(QCoreApplication::translate("gestionservice", "       Ajouter", nullptr));
        pushButton->setText(QCoreApplication::translate("gestionservice", "Trier", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tw->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("gestionservice", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tw->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("gestionservice", "equipement", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tw->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("gestionservice", "client", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tw->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("gestionservice", "employer", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tw->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("gestionservice", "temp", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tw->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("gestionservice", "prix", nullptr));
        b3->setText(QCoreApplication::translate("gestionservice", "gestion_service", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestionservice: public Ui_gestionservice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONSERVICE_H
