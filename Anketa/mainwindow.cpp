#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_4->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label_7->show();
    ui->label_4->hide();
}



void MainWindow::on_pushButton_2_clicked()
{
    ui->label_4->show();
    ui->label_7->hide();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label_4->hide();
    ui->label_7->hide();
}
