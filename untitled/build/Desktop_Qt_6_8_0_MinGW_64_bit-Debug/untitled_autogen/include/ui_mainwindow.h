/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QWidget *chatPage;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *textEditUser;
    QPushButton *pushButton;
    QListView *Users;
    QVBoxLayout *verticalLayout_4;
    QListWidget *Chat;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *textEditChat;
    QPushButton *pushButton_2;
    QWidget *settingsPage;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1017, 681);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        verticalLayout = new QVBoxLayout(loginPage);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(loginPage);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 30));
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(loginPage);
        textEdit->setObjectName("textEdit");
        textEdit->setMaximumSize(QSize(300, 30));

        verticalLayout->addWidget(textEdit);

        stackedWidget->addWidget(loginPage);
        chatPage = new QWidget();
        chatPage->setObjectName("chatPage");
        horizontalLayout = new QHBoxLayout(chatPage);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        textEditUser = new QTextEdit(chatPage);
        textEditUser->setObjectName("textEditUser");
        textEditUser->setMaximumSize(QSize(10000, 30));

        horizontalLayout_4->addWidget(textEditUser);

        pushButton = new QPushButton(chatPage);
        pushButton->setObjectName("pushButton");

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_4);

        Users = new QListView(chatPage);
        Users->setObjectName("Users");

        verticalLayout_3->addWidget(Users);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 10);

        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(7);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, -1, -1, -1);
        Chat = new QListWidget(chatPage);
        Chat->setObjectName("Chat");
        Chat->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        Chat->setProperty("isWrapping", QVariant(false));
        Chat->setUniformItemSizes(true);
        Chat->setWordWrap(true);

        verticalLayout_4->addWidget(Chat);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        textEditChat = new QTextEdit(chatPage);
        textEditChat->setObjectName("textEditChat");
        textEditChat->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_5->addWidget(textEditChat);

        pushButton_2 = new QPushButton(chatPage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(30, 30));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoUp));
        pushButton_2->setIcon(icon);

        horizontalLayout_5->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalLayout_4->setStretch(0, 20);
        verticalLayout_4->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout_4);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);
        stackedWidget->addWidget(chatPage);
        settingsPage = new QWidget();
        settingsPage->setObjectName("settingsPage");
        horizontalLayout_9 = new QHBoxLayout(settingsPage);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        pushButton_6 = new QPushButton(settingsPage);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout_9->addWidget(pushButton_6);

        stackedWidget->addWidget(settingsPage);

        horizontalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        pushButton_2->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
