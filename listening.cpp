#include "listening.h"
#include "ui_listening.h"

Listening::Listening(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Listening)
{
    ui->setupUi(this);
    this->setWindowTitle("For listen");

}

Listening::~Listening()
{
    delete ui;
}
