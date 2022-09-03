#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("English memorize system");
    //this->setStyleSheet("background-color:white;");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addWordButton_clicked()
{
    ui->tabWidget->addTab(new Form(),QString("word %0").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() -1);
}


void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}


void MainWindow::on_actionFor_photos_triggered()
{
 photos = new Websites(this);
 photos->show();
}


void MainWindow::on_actionAbout_triggered()
{
    about =new About(this);
    about->show();
}


void MainWindow::on_actionListening_triggered()
{
    listen = new Listening(this);
    listen->show();
}

