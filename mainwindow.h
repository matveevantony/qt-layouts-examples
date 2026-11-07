#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "vboxwindow.h"
#include "hboxwindow.h"
#include "gridwindow.h"
#include "formwindow.h"

class MainWindow : public QWidget
{
    Q_OBJECT
private:
    // дополнительные окна
    VBoxWindow* vboxWin;
    HBoxWindow* hboxWin;
    GridWindow* gridWin;
    FormWindow* formWin;
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
};
#endif // MAINWINDOW_H
