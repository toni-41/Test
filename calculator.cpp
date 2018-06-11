#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    // Id кнопок материала
    ui->button_Material->setId(ui->rb_Steell, 0);
    ui->button_Material->setId(ui->rb_Cuprum, 1);

    SetMaterial(List_Material_Steell, List_Plotnost_Steell, path_Steell);
    SetMaterial(List_Material_Cuprum, List_Plotnost_Cuprum, path_Cuprum);


    connect(ui->pb_Close, &QPushButton::clicked, this, &Calculator::close);

    connect(ui->button_Material, QOverload<int>::of(&QButtonGroup::buttonClicked), [=](int index){
        enum  { STEELL = 0, CUPRUM };
        switch (index) {
        case STEELL: ui->comboBox->clear(); ui->comboBox->addItems(List_Material_Steell);
             break;
        case CUPRUM: ui->comboBox->clear(); ui->comboBox->addItems(List_Material_Cuprum);
             break;
        default:
            break;
        }
    });

}

Calculator::~Calculator()
{
    delete ui;
}
