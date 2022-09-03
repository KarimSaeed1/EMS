#ifndef WEBSITES_H
#define WEBSITES_H

#include <QDialog>

namespace Ui {
class Websites;
}

class Websites : public QDialog
{
    Q_OBJECT

public:
    explicit Websites(QWidget *parent = nullptr);
    ~Websites();

private:
    Ui::Websites *ui;
};

#endif // WEBSITES_H
