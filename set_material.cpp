#include "set_material.h"

void SetMaterial(QStringList &list_material, QStringList &list_plotnost, QString file_path)
{
    QFile file(file_path);

    if(!file.open(QFile::ReadOnly | QFile::Text)) {
            QMessageBox::information(0, "Error", "Error open file: " + file_path);
            return;
    }

    QTextStream file_text(&file);

    QString tmp = "";
    QStringList tmp_list;

    while (!file_text.atEnd()) {
        tmp = file_text.readLine();
        tmp_list << tmp.split(" ");
    }

    for(int it = 0; it != tmp_list.size(); ++it) {

        (it % 2 == 0) ? list_material << tmp_list.at(it) : list_plotnost << tmp_list.at(it);

    }
    tmp_list.clear();
    file.close();

}
