#include "set_material.h"

void SetMaterial(QStringList list, QString file_path)
{
    QFile file(file_path);

    if(!file.open(QFile::ReadOnly | QFile::Text)) {
            QMessageBox::information(0, "Error", "Error open file: " + file_path);
            return;
}
}
