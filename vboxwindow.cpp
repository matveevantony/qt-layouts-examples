#include "vboxwindow.h"
#include <QBoxLayout>
#include <QPushButton>

VBoxWindow::VBoxWindow(QWidget *parent)
    : QWidget{parent}
{
    // настройки параметров окна
    setWindowFlag(Qt::Window);
    setWindowTitle("Вертикальная компоновка");
    setGeometry(0, 0, 300, 250);
    setMinimumSize(300, 250);
    setWindowModality(Qt::WindowModal);

    // настройка компоновщика
    QBoxLayout* layout = new QBoxLayout(QBoxLayout::TopToBottom, this);

    // добавление виджетов
    for (int i = 1; i <= 5; i++) {
        QPushButton* btn = new QPushButton(QString("Button %1").arg(i));
        btn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        layout->addWidget(btn);
    }
}
