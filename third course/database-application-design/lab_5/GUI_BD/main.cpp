#include <QApplication>
#include <QtGlobal>
#include <QtWidgets>
#include <QtCore>
#include <QtSql>
#include "mainwindow.h"
#include "authorization.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainWindow w;
    w.show();
    return a.exec();
}
