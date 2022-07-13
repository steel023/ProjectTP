/********************************************************************************
** Form generated from reading UI file 'mainwin_1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_1_H
#define UI_MAINWIN_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWin_1
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2_1;
    QLabel *label_9;
    QGroupBox *groupBox_2;
    QLabel *label_11;
    QGroupBox *groupBox_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_3;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWin_1)
    {
        if (MainWin_1->objectName().isEmpty())
            MainWin_1->setObjectName(QString::fromUtf8("MainWin_1"));
        MainWin_1->resize(593, 277);
        centralwidget = new QWidget(MainWin_1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 551, 71));
        groupBox_2_1 = new QGroupBox(groupBox);
        groupBox_2_1->setObjectName(QString::fromUtf8("groupBox_2_1"));
        groupBox_2_1->setGeometry(QRect(20, 20, 91, 31));
        label_9 = new QLabel(groupBox_2_1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 91, 31));
        QFont font;
        font.setBold(false);
        label_9->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(129, 20, 401, 31));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(-2, -1, 411, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 110, 551, 61));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 151, 24));
        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 20, 161, 24));
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 20, 161, 24));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 190, 551, 51));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 5, 551, 41));
        MainWin_1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWin_1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 593, 21));
        MainWin_1->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWin_1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWin_1->setStatusBar(statusbar);

        retranslateUi(MainWin_1);

        QMetaObject::connectSlotsByName(MainWin_1);
    } // setupUi

    void retranslateUi(QMainWindow *MainWin_1)
    {
        MainWin_1->setWindowTitle(QCoreApplication::translate("MainWin_1", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        groupBox_2_1->setTitle(QString());
        label_9->setText(QCoreApplication::translate("MainWin_1", "Username", nullptr));
        groupBox_2->setTitle(QString());
        label_11->setText(QCoreApplication::translate("MainWin_1", "TextLabel", nullptr));
        groupBox_4->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("MainWin_1", "Yes", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWin_1", "No", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWin_1", "Next", nullptr));
        groupBox_3->setTitle(QString());
        label_5->setText(QCoreApplication::translate("MainWin_1", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWin_1: public Ui_MainWin_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_1_H
