//
// Created by zhouwy on 2022/1/9.
//

#ifndef TEST_BUTTON_H
#define TEST_BUTTON_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class button; }
QT_END_NAMESPACE

class button : public QWidget {
    Q_OBJECT

public:
    explicit button(QWidget *parent = nullptr);

    ~button() override;

private:
    Ui::button *ui;
};

#endif //TEST_BUTTON_H
