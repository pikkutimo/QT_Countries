/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QGridLayout *gridLayout;
    QRadioButton *sortAlphabeticallyButton;
    QRadioButton *sortByAreaButton;
    QListView *listView;
    QListView *countryListView;
    QRadioButton *sortByPopulationButton;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(781, 537);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sortAlphabeticallyButton = new QRadioButton(centralwidget);
        sortAlphabeticallyButton->setObjectName(QString::fromUtf8("sortAlphabeticallyButton"));

        gridLayout->addWidget(sortAlphabeticallyButton, 4, 0, 1, 2);

        sortByAreaButton = new QRadioButton(centralwidget);
        sortByAreaButton->setObjectName(QString::fromUtf8("sortByAreaButton"));

        gridLayout->addWidget(sortByAreaButton, 3, 0, 1, 2);

        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        QFont font;
        font.setPointSize(16);
        listView->setFont(font);

        gridLayout->addWidget(listView, 0, 0, 1, 2);

        countryListView = new QListView(centralwidget);
        countryListView->setObjectName(QString::fromUtf8("countryListView"));
        countryListView->setFont(font);

        gridLayout->addWidget(countryListView, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        sortByPopulationButton = new QRadioButton(centralwidget);
        sortByPopulationButton->setObjectName(QString::fromUtf8("sortByPopulationButton"));

        gridLayout_2->addWidget(sortByPopulationButton, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Countries of the World", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Compare", nullptr));
        sortAlphabeticallyButton->setText(QCoreApplication::translate("MainWindow", "Sort by Name", nullptr));
        sortByAreaButton->setText(QCoreApplication::translate("MainWindow", "Sort by Area", nullptr));
        sortByPopulationButton->setText(QCoreApplication::translate("MainWindow", "Sort by Population", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
