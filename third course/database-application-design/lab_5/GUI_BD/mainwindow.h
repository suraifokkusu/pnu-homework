#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class mainWindow; }
QT_END_NAMESPACE

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();


private slots:
 void Connect();
 void Disconnect();
 void selectTable(QString nameTable);
 void selectKaf();
 void selectPrep();
 void selectSphere();
 void selectUnit();
 void selectIndex();
 void selectWork();
 void on_buttonReset_clicked();
 void setFilterKafedra(QString currentText);
 void setFilterPrep(QString currentText);
 void setFilterIndex(QString currentText);
 void search(QString);
 void on_buttonClear_clicked();
 void on_buttonAdd_clicked();
 void on_buttonDel_clicked();
 void keyPressEvent(QKeyEvent*);
private:
    Ui::mainWindow *ui;
};
#endif // MAINWINDOW_H
