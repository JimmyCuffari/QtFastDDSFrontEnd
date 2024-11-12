#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>

#include <thread>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void task1(std::string msg)
{
    std::cout << "task1 says: " << msg;

}

void MainWindow::on_pushButton_clicked()
{

    ui->Chat->addItem("EEE");
    std::thread t1(task1, "Hello");
    t1.join();
}


void MainWindow::on_textEdit_currentCharFormatChanged(const QTextCharFormat &format)
{

}

