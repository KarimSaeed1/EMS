#include "form.h"
#include "ui_form.h"
#include<QFileDialog>
#include<QMessageBox>
#include<QDesktopServices>
#include<QUrl>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_addButton_clicked()
{
    QString file_name =QFileDialog::getOpenFileName(this,tr("Choose"),"C:/",tr("Images(*.png *.jpg * .jpeg *.bmp *.gif)"));

    if(QString::compare(file_name, QString()) !=0){
        QImage image;
        bool valid = image.load(file_name);

        if(valid){
            image = image.scaledToWidth(ui->label_5->width(),Qt::SmoothTransformation);
            ui->label_5->setPixmap(QPixmap::fromImage(image));
        }
        else {
            //error handeling
        }
    }
}


void Form::on_saveButton_clicked()
{
    QString file_name=QFileDialog::getOpenFileName(this
                                                   ,tr("Choose screen shot tool"),"C:/ProgramData/Microsoft/Windows/Start Menu/Programs/Accessories/Snipping Tool","All Files (*.*);;"
                                                    );
    QDesktopServices::openUrl(QUrl("file:///"+file_name,QUrl::TolerantMode));

}

