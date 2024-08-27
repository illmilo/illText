//
// Created by illmilo on 25/08/2024.
//

#ifndef ILLTEXT_ILLTEXT_H
#define ILLTEXT_ILLTEXT_H

#include <QMainWindow>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class illText; }
QT_END_NAMESPACE

class illText : public QMainWindow {
    Q_OBJECT

public:
    explicit illText(QWidget *parent = nullptr);

    ~illText() override;

private slots:
    void newFile();
    void openFile();
    void saveFile();

    void cutText();
    void copyText();
    void pasteText();

private:
    Ui::illText *ui;
    QString currentfile;
};


#endif //ILLTEXT_ILLTEXT_H
