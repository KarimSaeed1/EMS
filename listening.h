#ifndef LISTENING_H
#define LISTENING_H

#include <QDialog>

namespace Ui {
class Listening;
}

class Listening : public QDialog
{
    Q_OBJECT

public:
    explicit Listening(QWidget *parent = nullptr);
    ~Listening();

private:
    Ui::Listening *ui;
};

#endif // LISTENING_H
