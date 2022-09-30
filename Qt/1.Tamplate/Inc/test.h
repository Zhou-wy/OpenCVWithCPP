//
// Created by zhouwy on 2021/12/5.
//

#ifndef INC_1_TAMPLATE_TEST_H
#define INC_1_TAMPLATE_TEST_H

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

#endif //INC_1_TAMPLATE_TEST_H
