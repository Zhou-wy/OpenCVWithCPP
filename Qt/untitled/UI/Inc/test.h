//
// Created by zhouwy on 2022/3/10.
//

#ifndef UNTITLED_TEST_H
#define UNTITLED_TEST_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class test; }
QT_END_NAMESPACE

class test : public QWidget {
Q_OBJECT

public:
    explicit test(QWidget *parent = nullptr);

    ~test() override;

private:
    Ui::test *ui;
};


#endif //UNTITLED_TEST_H
