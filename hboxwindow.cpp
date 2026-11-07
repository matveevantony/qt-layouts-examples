#include "hboxwindow.h"
#include <QBoxLayout>
#include <QPushButton>

HBoxWindow::HBoxWindow(QWidget *parent)
    : QWidget{parent}
{
    // настройки параметров окна
    setWindowFlag(Qt::Window);
    setWindowTitle("Горизонтальная компоновка");
    setGeometry(0, 0, 800, 55);
    setMinimumSize(800, 55);
    setWindowModality(Qt::WindowModal);

    // настройка компоновщика
    QBoxLayout* layout = new QBoxLayout(QBoxLayout::LeftToRight, this);

    // добавление виджетов
    for (int i = 1; i <= 3; i++) {
        QPushButton* btn = new QPushButton(QString("button %1").arg(i));
        btn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        layout->addWidget(btn, 1);
    }
    // настройка ширины элементов при компоновке
    QPushButton* btn2 = new QPushButton("button 4");
    btn2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    layout->addWidget(btn2, 2);
    QPushButton* btn3 = new QPushButton("button 5");
    btn3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    layout->addWidget(btn3, 3);
}
