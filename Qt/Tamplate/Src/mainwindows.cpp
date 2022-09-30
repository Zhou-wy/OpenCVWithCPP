//
// Created by zhouwy on 2021/12/6.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindows.h" resolved

#include "mainwindows.h"
#include "ui_MainWindows.h"

MainWindows::MainWindows(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainWindows) {
    ui->setupUi(this);
}

MainWindows::~MainWindows() {
    delete ui;
}
