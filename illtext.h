//
// Created by illmilo on 17/06/2024.
//

#ifndef ILLTEXT_ILLTEXT_H
#define ILLTEXT_ILLTEXT_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class illText; }
QT_END_NAMESPACE

class illText : public QWidget {
Q_OBJECT

public:
    explicit illText(QWidget *parent = nullptr);

    ~illText() override;

private:
    Ui::illText *ui;
};


#endif //ILLTEXT_ILLTEXT_H
