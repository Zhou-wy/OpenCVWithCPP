//
// Created by zhouwy on 2022/1/9.
//

// You may need to build the project (run Qt uic code generator) to get "ui_widget.h" resolved

#include "widget.h"
#include "ui_widget.h"

widget::widget(QWidget *parent) :
        QWidget(parent), ui(new Ui::widget) {
    ui->setupUi(this);
}

widget::~widget() {
    delete ui;
}
