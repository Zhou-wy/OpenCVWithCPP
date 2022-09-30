//
// Created by zhouwy on 2021/12/6.
//

#ifndef TAMPLATE_MAINWINDOWS_H
#define TAMPLATE_MAINWINDOWS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindows; }
QT_END_NAMESPACE

class MainWindows : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindows(QWidget *parent = nullptr);

    ~MainWindows() override;

private:
    Ui::MainWindows *ui;
};

#endif //TAMPLATE_MAINWINDOWS_H
