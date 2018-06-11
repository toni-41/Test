#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include "set_material.h"

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private:
    Ui::Calculator *ui;

    // Lists Материала иплотности
    QStringList List_Plotnost_Steell, List_Material_Steell;
    QStringList List_Plotnost_Cuprum, List_Material_Cuprum;

    //Пути к файлам материалов и плотности
    QString path_Steell = "./Steel.txt";
    QString path_Cuprum = "./Cuprum.txt";
};

#endif // CALCULATOR_H
