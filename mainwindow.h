#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "websites.h"
#include "about.h"
#include "listening.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addWordButton_clicked();

    void on_tabWidget_tabCloseRequested(int index);

    void on_actionFor_photos_triggered();

    void on_actionAbout_triggered();

    void on_actionListening_triggered();

private:
    Ui::MainWindow *ui;
    Websites *photos ;
    About *about;
    Listening *listen;
};
#endif // MAINWINDOW_H
