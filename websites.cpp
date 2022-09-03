#include "websites.h"
#include "ui_websites.h"

Websites::Websites(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Websites)
{
    ui->setupUi(this);
    this->setWindowTitle("For images");
}

Websites::~Websites()
{
    delete ui;
}
