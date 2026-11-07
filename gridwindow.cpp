#include "gridwindow.h"
#include <QGridLayout>
#include <QPushButton>

GridWindow::GridWindow(QWidget *parent)
    : QWidget{parent}
{
    // настройки параметров окна
    setWindowFlag(Qt::Window);
    setWindowTitle("Клеточная компоновка");
    setGeometry(0, 0, 500, 250);
    setMinimumSize(500, 250);
    setWindowModality(Qt::WindowModal);

    // настройка компоновщика
    QGridLayout* layout = new QGridLayout(this);

    // добавление виджетов
    // обычные кнопки (занимают одну ячейку)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            QPushButton* btn = new QPushButton(QString("Button %1.%2").arg(i + 1).arg(j + 1));
            btn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            layout->addWidget(btn, i, j);
        }
    }
    // кнопка, вытянутая по вертикали
    QPushButton* vbtn = new QPushButton(QString("Vertical button"));
    vbtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    layout->addWidget(vbtn, 2, 0, 3, 1);
    // кнопка, вытянутая по горизонтали
    QPushButton* hbtn = new QPushButton(QString("Horizontal button"));
    hbtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    layout->addWidget(hbtn, 2, 1, 1, 3);
    // ещё обычные кнопки
    QPushButton* btn31 = new QPushButton(QString("Button 4.2"));
    btn31->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    layout->addWidget(btn31, 3, 1);
    QPushButton* btn41 = new QPushButton(QString("Button 5.2"));
    btn41->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    layout->addWidget(btn41, 4, 1);
    // кнопка, вытянутая и по вертикали, и по горизонтали
    QPushButton* big_btn = new QPushButton(QString("Big button"));
    big_btn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    layout->addWidget(big_btn, 3, 2, 2, 2);
}
