/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QPushButton *buttonConnect;
    QPushButton *buttonDisconnect;
    QSpinBox *changePort;
    QLineEdit *changeUser;
    QLineEdit *changePassword;
    QTextEdit *user;
    QTextEdit *password;
    QTextEdit *port;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *host;
    QLineEdit *changeHost;

    void setupUi(QWidget *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName(QString::fromUtf8("Authorization"));
        Authorization->resize(400, 300);
        buttonConnect = new QPushButton(Authorization);
        buttonConnect->setObjectName(QString::fromUtf8("buttonConnect"));
        buttonConnect->setGeometry(QRect(220, 190, 111, 27));
        buttonConnect->setMinimumSize(QSize(45, 0));
        buttonDisconnect = new QPushButton(Authorization);
        buttonDisconnect->setObjectName(QString::fromUtf8("buttonDisconnect"));
        buttonDisconnect->setGeometry(QRect(220, 220, 111, 27));
        buttonDisconnect->setMinimumSize(QSize(45, 0));
        changePort = new QSpinBox(Authorization);
        changePort->setObjectName(QString::fromUtf8("changePort"));
        changePort->setGeometry(QRect(50, 220, 111, 28));
        changePort->setAlignment(Qt::AlignCenter);
        changePort->setMaximum(9999);
        changePort->setValue(5432);
        changeUser = new QLineEdit(Authorization);
        changeUser->setObjectName(QString::fromUtf8("changeUser"));
        changeUser->setGeometry(QRect(50, 140, 111, 28));
        changeUser->setStyleSheet(QString::fromUtf8(""));
        changeUser->setAlignment(Qt::AlignCenter);
        changePassword = new QLineEdit(Authorization);
        changePassword->setObjectName(QString::fromUtf8("changePassword"));
        changePassword->setGeometry(QRect(220, 140, 113, 27));
        changePassword->setAlignment(Qt::AlignCenter);
        user = new QTextEdit(Authorization);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(50, 100, 121, 30));
        user->setMaximumSize(QSize(16777215, 30));
        user->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background:  rgb(54,54,54);\n"
"border:none;\n"
"}"));
        user->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214</p></body></html>"));
        user->setAcceptRichText(true);
        password = new QTextEdit(Authorization);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(240, 100, 71, 30));
        password->setMaximumSize(QSize(16777215, 30));
        password->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background:  rgb(54,54,54);\n"
"border:none;\n"
"\n"
"}"));
        password->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\320\260\321\200\320\276\320\273\321\214</p></body></html>"));
        password->setAcceptRichText(true);
        port = new QTextEdit(Authorization);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(60, 180, 81, 30));
        port->setMaximumSize(QSize(16777215, 30));
        port->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background:   rgb(54,54,54);\n"
"border:none;\n"
"}"));
        port->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\320\276\321\200\321\202</p></body></html>"));
        port->setAcceptRichText(true);
        layoutWidget = new QWidget(Authorization);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 20, 281, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        host = new QTextEdit(layoutWidget);
        host->setObjectName(QString::fromUtf8("host"));
        host->setMaximumSize(QSize(16777215, 30));
        host->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background:  rgb(54,54,54);\n"
"border:none;\n"
"}"));
        host->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\245\320\276\321\201\321\202</p></body></html>"));
        host->setAcceptRichText(true);

        verticalLayout->addWidget(host);

        changeHost = new QLineEdit(layoutWidget);
        changeHost->setObjectName(QString::fromUtf8("changeHost"));
        changeHost->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(changeHost);


        retranslateUi(Authorization);

        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QWidget *Authorization)
    {
        Authorization->setWindowTitle(QCoreApplication::translate("Authorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        buttonConnect->setText(QCoreApplication::translate("Authorization", "\320\241\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", nullptr));
        buttonDisconnect->setText(QCoreApplication::translate("Authorization", "\320\240\320\260\320\267\321\212\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", nullptr));
        changePort->setSpecialValueText(QString());
        changeUser->setText(QCoreApplication::translate("Authorization", "mikita", nullptr));
        changePassword->setText(QCoreApplication::translate("Authorization", "1111", nullptr));
        changeHost->setText(QCoreApplication::translate("Authorization", "192.168.1.101", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
