/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *buttonReset;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit_2;
    QComboBox *boxPrep;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit_3;
    QComboBox *boxKaf;
    QHBoxLayout *horizontalLayout_6;
    QTextEdit *sphere_3;
    QComboBox *boxIndex;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *sphere_2;
    QComboBox *boxUnit;
    QHBoxLayout *layout_year;
    QTextEdit *year;
    QComboBox *boxYear;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *sphere;
    QComboBox *boxSphere;
    QPushButton *buttonAdd;
    QTableView *tableView;
    QPushButton *buttonDel;
    QPushButton *buttonClear;
    QLineEdit *editSearch;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->resize(1186, 764);
        mainWindow->setAutoFillBackground(true);
        mainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1151, 701));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane{\n"
"border:  none;\n"
"color: #fff\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        buttonReset = new QPushButton(tab);
        buttonReset->setObjectName(QString::fromUtf8("buttonReset"));
        buttonReset->setGeometry(QRect(810, 430, 87, 27));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(680, 70, 361, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setMaximumSize(QSize(140, 30));
        textEdit_2->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"height: 12px; \n"
"width:2px;\n"
"color:#fff; \n"
"background: rgb(53, 53, 53)\n"
"}"));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setFrameShadow(QFrame::Plain);
        textEdit_2->setReadOnly(true);

        horizontalLayout->addWidget(textEdit_2);

        boxPrep = new QComboBox(layoutWidget);
        boxPrep->setObjectName(QString::fromUtf8("boxPrep"));
        boxPrep->setMaximumSize(QSize(16777215, 30));
        boxPrep->setStyleSheet(QString::fromUtf8(""));
        boxPrep->setEditable(false);

        horizontalLayout->addWidget(boxPrep);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textEdit_3 = new QTextEdit(layoutWidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setMaximumSize(QSize(140, 30));
        textEdit_3->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"height: 12px; \n"
"width:2px;\n"
"color:#fff; \n"
"background: rgb(53, 53, 53);\n"
"}"));
        textEdit_3->setFrameShape(QFrame::NoFrame);
        textEdit_3->setFrameShadow(QFrame::Plain);
        textEdit_3->setReadOnly(true);

        horizontalLayout_2->addWidget(textEdit_3);

        boxKaf = new QComboBox(layoutWidget);
        boxKaf->setObjectName(QString::fromUtf8("boxKaf"));
        boxKaf->setMaximumSize(QSize(16777215, 30));
        boxKaf->setStyleSheet(QString::fromUtf8(""));
        boxKaf->setEditable(false);

        horizontalLayout_2->addWidget(boxKaf);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        sphere_3 = new QTextEdit(layoutWidget);
        sphere_3->setObjectName(QString::fromUtf8("sphere_3"));
        sphere_3->setMaximumSize(QSize(140, 45));
        sphere_3->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"height: 12px; \n"
"width:2px;\n"
"color:#fff; \n"
"background: rgb(53, 53, 53);\n"
"}"));
        sphere_3->setFrameShape(QFrame::NoFrame);
        sphere_3->setFrameShadow(QFrame::Plain);
        sphere_3->setReadOnly(true);

        horizontalLayout_6->addWidget(sphere_3);

        boxIndex = new QComboBox(layoutWidget);
        boxIndex->setObjectName(QString::fromUtf8("boxIndex"));
        boxIndex->setMaximumSize(QSize(16777215, 30));
        boxIndex->setStyleSheet(QString::fromUtf8(""));
        boxIndex->setEditable(false);

        horizontalLayout_6->addWidget(boxIndex);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        sphere_2 = new QTextEdit(layoutWidget);
        sphere_2->setObjectName(QString::fromUtf8("sphere_2"));
        sphere_2->setMaximumSize(QSize(140, 45));
        sphere_2->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"height: 12px; \n"
"width:2px;\n"
"color:#fff; \n"
"background: rgb(53, 53, 53);\n"
"}"));
        sphere_2->setFrameShape(QFrame::NoFrame);
        sphere_2->setFrameShadow(QFrame::Plain);
        sphere_2->setReadOnly(true);

        horizontalLayout_5->addWidget(sphere_2);

        boxUnit = new QComboBox(layoutWidget);
        boxUnit->setObjectName(QString::fromUtf8("boxUnit"));
        boxUnit->setMaximumSize(QSize(16777215, 30));
        boxUnit->setStyleSheet(QString::fromUtf8(""));
        boxUnit->setEditable(false);

        horizontalLayout_5->addWidget(boxUnit);


        verticalLayout->addLayout(horizontalLayout_5);

        layout_year = new QHBoxLayout();
        layout_year->setObjectName(QString::fromUtf8("layout_year"));
        year = new QTextEdit(layoutWidget);
        year->setObjectName(QString::fromUtf8("year"));
        year->setMaximumSize(QSize(140, 30));
        year->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"height: 12px; \n"
"width:2px;\n"
"color:#fff; \n"
"background: rgb(53, 53, 53);\n"
"}"));
        year->setFrameShape(QFrame::NoFrame);
        year->setFrameShadow(QFrame::Plain);
        year->setReadOnly(true);

        layout_year->addWidget(year);

        boxYear = new QComboBox(layoutWidget);
        boxYear->setObjectName(QString::fromUtf8("boxYear"));
        boxYear->setMaximumSize(QSize(16777215, 30));
        boxYear->setStyleSheet(QString::fromUtf8(""));
        boxYear->setEditable(false);

        layout_year->addWidget(boxYear);


        verticalLayout->addLayout(layout_year);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sphere = new QTextEdit(layoutWidget);
        sphere->setObjectName(QString::fromUtf8("sphere"));
        sphere->setMaximumSize(QSize(140, 45));
        sphere->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"height: 12px; \n"
"width:2px;\n"
"color:#fff; \n"
"background: rgb(53, 53, 53);\n"
"}"));
        sphere->setFrameShape(QFrame::NoFrame);
        sphere->setFrameShadow(QFrame::Plain);
        sphere->setReadOnly(true);

        horizontalLayout_4->addWidget(sphere);

        boxSphere = new QComboBox(layoutWidget);
        boxSphere->setObjectName(QString::fromUtf8("boxSphere"));
        boxSphere->setMaximumSize(QSize(16777215, 30));
        boxSphere->setStyleSheet(QString::fromUtf8(""));
        boxSphere->setEditable(false);

        horizontalLayout_4->addWidget(boxSphere);


        verticalLayout->addLayout(horizontalLayout_4);

        buttonAdd = new QPushButton(tab);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        buttonAdd->setGeometry(QRect(10, 560, 87, 27));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 0, 611, 551));
        tableView->setStyleSheet(QString::fromUtf8(""));
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tableView->setSelectionMode(QAbstractItemView::MultiSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
        buttonDel = new QPushButton(tab);
        buttonDel->setObjectName(QString::fromUtf8("buttonDel"));
        buttonDel->setGeometry(QRect(100, 560, 87, 27));
        buttonDel->setCheckable(false);
        buttonDel->setAutoRepeat(false);
        buttonDel->setAutoExclusive(false);
        buttonDel->setAutoRepeatDelay(10);
        buttonDel->setAutoDefault(true);
        buttonDel->setFlat(false);
        buttonClear = new QPushButton(tab);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));
        buttonClear->setGeometry(QRect(320, 600, 87, 27));
        editSearch = new QLineEdit(tab);
        editSearch->setObjectName(QString::fromUtf8("editSearch"));
        editSearch->setGeometry(QRect(10, 600, 291, 27));
        editSearch->setLayoutDirection(Qt::LeftToRight);
        editSearch->setAutoFillBackground(false);
        editSearch->setStyleSheet(QString::fromUtf8(""));
        editSearch->setFrame(true);
        editSearch->setReadOnly(false);
        editSearch->setClearButtonEnabled(false);
        tabWidget->addTab(tab, QString());
        mainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1186, 24));
        mainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainWindow->setStatusBar(statusbar);

        retranslateUi(mainWindow);

        tabWidget->setCurrentIndex(0);
        buttonDel->setDefault(true);


        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "\320\243\321\207\320\265\321\202 \321\200\320\260\320\261\320\276\321\202\321\213 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217 \320\267\320\260 \321\203\321\207\320\265\320\261\320\275\321\213\320\271 \320\263\320\276\320\264", nullptr));
#if QT_CONFIG(tooltip)
        mainWindow->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        buttonReset->setText(QCoreApplication::translate("mainWindow", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("mainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214:</p></body></html>", nullptr));
#if QT_CONFIG(statustip)
        boxPrep->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        boxPrep->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        boxPrep->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        boxPrep->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        boxPrep->setCurrentText(QString());
        boxPrep->setPlaceholderText(QString());
        textEdit_3->setHtml(QCoreApplication::translate("mainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\232\320\260\321\204\320\265\320\264\321\200\320\260:</p></body></html>", nullptr));
#if QT_CONFIG(statustip)
        boxKaf->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        boxKaf->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        boxKaf->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        boxKaf->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        boxKaf->setCurrentText(QString());
        boxKaf->setPlaceholderText(QString());
        sphere_3->setHtml(QCoreApplication::translate("mainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\320\276\320\272\320\260\320\267\320\260\321\202\320\265\320\273\321\214:</p></body></html>", nullptr));
#if QT_CONFIG(statustip)
        boxIndex->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        boxIndex->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        boxIndex->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        boxIndex->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        boxIndex->setCurrentText(QString());
        boxIndex->setPlaceholderText(QString());
        sphere_2->setHtml(QCoreApplication::translate("mainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\225\320\264\320\270\320\275\320\270\321\206\320\260 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217:</p></body></html>", nullptr));
#if QT_CONFIG(statustip)
        boxUnit->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        boxUnit->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        boxUnit->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        boxUnit->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        boxUnit->setCurrentText(QString());
        boxUnit->setPlaceholderText(QString());
        year->setHtml(QCoreApplication::translate("mainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\223\320\276\320\264:</p></body></html>", nullptr));
#if QT_CONFIG(statustip)
        boxYear->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        boxYear->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        boxYear->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        boxYear->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        boxYear->setCurrentText(QString());
        boxYear->setPlaceholderText(QString());
        sphere->setHtml(QCoreApplication::translate("mainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\321\204\320\265\321\200\320\260 \320\264\320\265\321\217\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270:</p></body></html>", nullptr));
#if QT_CONFIG(statustip)
        boxSphere->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        boxSphere->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        boxSphere->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        boxSphere->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        boxSphere->setCurrentText(QString());
        boxSphere->setPlaceholderText(QString());
        buttonAdd->setText(QCoreApplication::translate("mainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        buttonDel->setText(QCoreApplication::translate("mainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        buttonClear->setText(QCoreApplication::translate("mainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        editSearch->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        editSearch->setInputMask(QString());
        editSearch->setText(QString());
        editSearch->setPlaceholderText(QCoreApplication::translate("mainWindow", "\320\237\320\276\320\270\321\201\320\272...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("mainWindow", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
