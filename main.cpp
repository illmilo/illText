#include <QApplication>

#include "illtext.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Main notepad window
    illText window;
    window.setWindowTitle("illText");
    window.show();

    return app.exec();
}
