//
// Created by zhouwy on 2022/1/9.
//

#ifndef TEMPLATE_WIDGET_H
#define TEMPLATE_WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class widget; }
QT_END_NAMESPACE

class widget : public QWidget {
    Q_OBJECT

public:
    explicit widget(QWidget *parent = nullptr);

    ~widget() override;

private:
    Ui::widget *ui;
};

#endif //TEMPLATE_WIDGET_H
