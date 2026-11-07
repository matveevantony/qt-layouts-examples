#include "formwindow.h"
#include <QFormLayout>
#include <QLineEdit>
#include <QComboBox>

FormWindow::FormWindow(QWidget *parent)
    : QWidget{parent}
{
    // настройки параметров окна
    setWindowFlag(Qt::Window);
    setWindowTitle("Компоновка формы");
    setGeometry(0, 0, 300, 150);
    setMinimumSize(300, 150);
    setWindowModality(Qt::WindowModal);

    // настройка компоновщика
    QFormLayout* layout = new QFormLayout(this);

    // добавление виджетов
    QLineEdit* surname_input = new QLineEdit();
    QLineEdit* name_input = new QLineEdit();
    QComboBox* gender = new QComboBox();
    gender->addItem("мужской");
    gender->addItem("женский");
    layout->addRow("Фамилия", surname_input);
    layout->addRow("Имя", name_input);
    layout->addRow("Пол", gender);
}
