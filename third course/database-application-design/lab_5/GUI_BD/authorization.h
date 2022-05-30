#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QWidget>

namespace Ui {
class Authorization;
}

class Authorization : public QWidget
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = nullptr);
    ~Authorization();
    //значения, доступные основной форме
        QString usr;
        QString password;
        QString host;
        int port;
    //сигналы, отправляемые основной форме
      signals:
          void sendConnect();
          void sendDisconnect();


private:
    Ui::Authorization *ui;


private slots:
    void on_buttonConnect_clicked();
    void on_buttonDisconnect_clicked();
};
#endif // AUTHORIZATION_H
