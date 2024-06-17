//
// Created by illmilo on 17/06/2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_illText.h" resolved

#include "illtext.h"
#include "ui_illText.h"


illText::illText(QWidget *parent) :
        QWidget(parent), ui(new Ui::illText) {
    ui->setupUi(this);
}

illText::~illText() {
    delete ui;
}
