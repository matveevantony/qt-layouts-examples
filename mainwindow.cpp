#include "mainwindow.h"
#include "vboxwindow.h"
#include "hboxwindow.h"
#include <QBoxLayout>
#include <QPushButton>

MainWindow::MainWindow(QWidget* parent)
    : QWidget(parent)
{
    // настройки главного окна
    setWindowFlag(Qt::Window);
    setWindowTitle("Примеры компоновщиков");
    setGeometry(0, 0, 300, 150);
    QBoxLayout* main_layout = new QBoxLayout(QBoxLayout::TopToBottom, this);
    QPushButton* button1 = new QPushButton("QBoxLayout (vertical)");
    QPushButton* button2 = new QPushButton("QBoxLayout (horizontal)");
    QPushButton* button3 = new QPushButton("QGridLayout");
    QPushButton* button4 = new QPushButton("QFormLayout");
    main_layout->addWidget(button1);
    main_layout->addWidget(button2);
    main_layout->addWidget(button3);
    main_layout->addWidget(button4);

    // инициализация дополнительных окон
    vboxWin = new VBoxWindow(this);
    hboxWin = new HBoxWindow(this);
    gridWin = new GridWindow(this);
    formWin = new FormWindow(this);

    // связь кнопок с действиями
    connect(button1, &QPushButton::clicked, vboxWin, &VBoxWindow::show);
    connect(button2, &QPushButton::clicked, hboxWin, &HBoxWindow::show);
    connect(button3, &QPushButton::clicked, gridWin, &GridWindow::show);
    connect(button4, &QPushButton::clicked, formWin, &FormWindow::show);
}

MainWindow::~MainWindow() = default;
