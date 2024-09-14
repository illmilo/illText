//
// Created by illmilo on 03/09/2024.
//

#ifndef ILLTEXT_EDITOR_H
#define ILLTEXT_EDITOR_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class editor; }
QT_END_NAMESPACE

class editor : public QWidget {
Q_OBJECT

public:
    explicit editor(QWidget *parent = nullptr);

    ~editor() override;

private:
    Ui::editor *ui;
};


#endif //ILLTEXT_EDITOR_H
