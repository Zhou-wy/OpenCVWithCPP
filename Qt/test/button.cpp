//
// Created by zhouwy on 2022/1/9.
//

// You may need to build the project (run Qt uic code generator) to get "ui_button.h" resolved

#include "button.h"
#include "ui_button.h"

button::button(QWidget *parent) :
        QWidget(parent), ui(new Ui::button) {
    ui->setupUi(this);
}

button::~button() {
    delete ui;
}
