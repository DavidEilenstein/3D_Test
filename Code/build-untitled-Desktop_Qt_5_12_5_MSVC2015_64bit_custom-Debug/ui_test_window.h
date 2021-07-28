/********************************************************************************
** Form generated from reading UI file 'test_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_WINDOW_H
#define UI_TEST_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_window
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_Target;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *test_window)
    {
        if (test_window->objectName().isEmpty())
            test_window->setObjectName(QString::fromUtf8("test_window"));
        test_window->resize(800, 600);
        centralwidget = new QWidget(test_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_Target = new QGridLayout();
        gridLayout_Target->setSpacing(0);
        gridLayout_Target->setObjectName(QString::fromUtf8("gridLayout_Target"));

        gridLayout_2->addLayout(gridLayout_Target, 0, 0, 1, 1);

        test_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(test_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        test_window->setMenuBar(menubar);
        statusbar = new QStatusBar(test_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        test_window->setStatusBar(statusbar);

        retranslateUi(test_window);

        QMetaObject::connectSlotsByName(test_window);
    } // setupUi

    void retranslateUi(QMainWindow *test_window)
    {
        test_window->setWindowTitle(QApplication::translate("test_window", "test_window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class test_window: public Ui_test_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_WINDOW_H
