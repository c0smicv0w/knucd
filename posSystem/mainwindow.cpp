#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_menu1_clicked()
{
    return;
}

void MainWindow::on_menu2_clicked()
{
    return;
}

void MainWindow::on_menu3_clicked()
{
    return;
}

void MainWindow::on_menu4_clicked()
{
    return;
}
