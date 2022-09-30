//
// Created by zhouwy on 2022/3/10.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Mainwindow.h" resolved

#include "mainwindow.h"
#include "ui_Mainwindow.h"


Mainwindow::Mainwindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::Mainwindow) {
    ui->setupUi(this);
}

Mainwindow::~Mainwindow() {
    delete ui;
}

