//
// Created by illmilo on 25/08/2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_illText.h" resolved

#include "illtext.h"
#include "ui_illText.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>


illText::illText(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::illText) {
    ui->setupUi(this);

    // connect actions to slots
    connect(ui->actionNew, &QAction::triggered, this, &illText::newFile);
    connect(ui->actionOpen, &QAction::triggered, this, &illText::openFile);
    connect(ui->actionSave, &QAction::triggered, this, &illText::saveFile);

    connect(ui->actionCopy, &QAction::triggered, this, &illText::copyText);
    connect(ui->actionPaste, &QAction::triggered, this, &illText::pasteText);
    connect(ui->actionCut, &QAction::triggered, this, &illText::cutText);
}

illText::~illText() {
    delete ui;
}

void illText::newFile() {
    currentfile.clear();
    ui->textEdit->setText(QString());
}

void illText::openFile() {
    QString filename = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open this file: " + file.errorString());
        return;
    }

    currentfile = filename;
    setWindowTitle(filename);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void illText::saveFile() {
    QString filename;
    if (currentfile.isEmpty()) {
        filename = QFileDialog::getSaveFileName(this, "Save " + filename + "As");
        currentfile = filename;
    }
    else filename = currentfile;

    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }

    setWindowTitle(filename);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}

void illText::copyText() {
    ui->textEdit->copy();
}
void illText::cutText() {
    ui->textEdit->cut();
}
void illText::pasteText() {
    ui->textEdit->paste();
}