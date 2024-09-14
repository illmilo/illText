#include <QApplication>

#include "editor.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Main notepad window
    editor window;
    window.setWindowTitle("illText");
    window.show();

    return app.exec();
}
