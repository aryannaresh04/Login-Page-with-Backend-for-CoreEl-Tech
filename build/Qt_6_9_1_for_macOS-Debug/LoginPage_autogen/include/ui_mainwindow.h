/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *mainLayout;
    QSpacerItem *topSpacer;
    QFrame *frame;
    QVBoxLayout *formLayout;
    QLabel *labelLogo;
    QLabel *labelTitle;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QSpacerItem *bottomSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(384, 635);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"QMainWindow {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0,\n"
"                                stop:0 #fff5ec, stop:1 #fdd9b5);\n"
"}\n"
"   "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mainLayout = new QVBoxLayout(centralwidget);
        mainLayout->setObjectName("mainLayout");
        topSpacer = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        mainLayout->addItem(topSpacer);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(360, 380));
        frame->setMaximumSize(QSize(400, 420));
        frame->setStyleSheet(QString::fromUtf8("\n"
"QFrame {\n"
"    background-color: white;\n"
"    border-radius: 20px;\n"
"    padding: 30px;\n"
"    border: 1px solid #f5d4b6;\n"
"}\n"
"QLabel {\n"
"    font: 14pt \"Segoe UI\";\n"
"    color: #2d2d2d;\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
"QLineEdit {\n"
"    border: 2px solid #f7941d;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font: 11pt \"Segoe UI\";\n"
"    background-color: #ffffff;\n"
"}\n"
"QPushButton {\n"
"    background-color: #f7941d;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    font: bold 12pt \"Segoe UI\";\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e94e1b;\n"
"}\n"
"       "));
        formLayout = new QVBoxLayout(frame);
        formLayout->setObjectName("formLayout");
        labelLogo = new QLabel(frame);
        labelLogo->setObjectName("labelLogo");
        labelLogo->setMaximumSize(QSize(150, 150));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/images/coreel_logo.png")));
        labelLogo->setScaledContents(true);
        labelLogo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->addWidget(labelLogo, 0, Qt::AlignmentFlag::AlignHCenter);

        labelTitle = new QLabel(frame);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setStyleSheet(QString::fromUtf8("font-size: 18pt; font-weight: bold; margin-bottom: 10px;"));

        formLayout->addWidget(labelTitle, 0, Qt::AlignmentFlag::AlignHCenter);

        lineEdit_Username = new QLineEdit(frame);
        lineEdit_Username->setObjectName("lineEdit_Username");

        formLayout->addWidget(lineEdit_Username);

        lineEdit_Password = new QLineEdit(frame);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->addWidget(lineEdit_Password);

        pushButton_Login = new QPushButton(frame);
        pushButton_Login->setObjectName("pushButton_Login");

        formLayout->addWidget(pushButton_Login);


        mainLayout->addWidget(frame);

        bottomSpacer = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        mainLayout->addItem(bottomSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 384, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CoreEL Login", nullptr));
        labelTitle->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        lineEdit_Username->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Username", nullptr));
        lineEdit_Password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Password", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
