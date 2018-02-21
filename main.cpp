#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file(":/style.qss");
    if(file.open(QFile::ReadOnly)) {
       QString StyleSheet = QString::fromUtf8(file.readAll());
       a.setStyleSheet(StyleSheet);
    }

    MainWindow w;
    w.show();

    return a.exec();
}
