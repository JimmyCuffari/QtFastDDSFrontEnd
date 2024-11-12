#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>

#include <thread>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->textEditChat->setPlaceholderText("Start Typing...");
    ui->textEditUser->setPlaceholderText("Add User");


}

MainWindow::~MainWindow()
{
    delete ui;
}




void task1(std::string msg)
{
    std::cout << "task1 says: " << msg;
    //ui->Chat->addItem("ong");
}

void MainWindow::on_pushButton_clicked()
{

    ui->stackedWidget->setCurrentWidget(ui->settingsPage);

}


void MainWindow::on_pushButton_2_clicked()
{
    ui->Chat->addItem(ui->textEditChat->toPlainText());
    ui->textEditChat->clear();

    ui->Chat->addItem("EEE");
    std::thread t1(task1, "Hello");
    t1.join();
}

