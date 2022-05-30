/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../GUI_BD/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainWindow_t {
    QByteArrayData data[23];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainWindow_t qt_meta_stringdata_mainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "mainWindow"
QT_MOC_LITERAL(1, 11, 7), // "Connect"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 10), // "Disconnect"
QT_MOC_LITERAL(4, 31, 11), // "selectTable"
QT_MOC_LITERAL(5, 43, 9), // "nameTable"
QT_MOC_LITERAL(6, 53, 9), // "selectKaf"
QT_MOC_LITERAL(7, 63, 10), // "selectPrep"
QT_MOC_LITERAL(8, 74, 12), // "selectSphere"
QT_MOC_LITERAL(9, 87, 10), // "selectUnit"
QT_MOC_LITERAL(10, 98, 11), // "selectIndex"
QT_MOC_LITERAL(11, 110, 10), // "selectWork"
QT_MOC_LITERAL(12, 121, 22), // "on_buttonReset_clicked"
QT_MOC_LITERAL(13, 144, 16), // "setFilterKafedra"
QT_MOC_LITERAL(14, 161, 11), // "currentText"
QT_MOC_LITERAL(15, 173, 13), // "setFilterPrep"
QT_MOC_LITERAL(16, 187, 14), // "setFilterIndex"
QT_MOC_LITERAL(17, 202, 6), // "search"
QT_MOC_LITERAL(18, 209, 22), // "on_buttonClear_clicked"
QT_MOC_LITERAL(19, 232, 20), // "on_buttonAdd_clicked"
QT_MOC_LITERAL(20, 253, 20), // "on_buttonDel_clicked"
QT_MOC_LITERAL(21, 274, 13), // "keyPressEvent"
QT_MOC_LITERAL(22, 288, 10) // "QKeyEvent*"

    },
    "mainWindow\0Connect\0\0Disconnect\0"
    "selectTable\0nameTable\0selectKaf\0"
    "selectPrep\0selectSphere\0selectUnit\0"
    "selectIndex\0selectWork\0on_buttonReset_clicked\0"
    "setFilterKafedra\0currentText\0setFilterPrep\0"
    "setFilterIndex\0search\0on_buttonClear_clicked\0"
    "on_buttonAdd_clicked\0on_buttonDel_clicked\0"
    "keyPressEvent\0QKeyEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    1,  106,    2, 0x08 /* Private */,
       6,    0,  109,    2, 0x08 /* Private */,
       7,    0,  110,    2, 0x08 /* Private */,
       8,    0,  111,    2, 0x08 /* Private */,
       9,    0,  112,    2, 0x08 /* Private */,
      10,    0,  113,    2, 0x08 /* Private */,
      11,    0,  114,    2, 0x08 /* Private */,
      12,    0,  115,    2, 0x08 /* Private */,
      13,    1,  116,    2, 0x08 /* Private */,
      15,    1,  119,    2, 0x08 /* Private */,
      16,    1,  122,    2, 0x08 /* Private */,
      17,    1,  125,    2, 0x08 /* Private */,
      18,    0,  128,    2, 0x08 /* Private */,
      19,    0,  129,    2, 0x08 /* Private */,
      20,    0,  130,    2, 0x08 /* Private */,
      21,    1,  131,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,    2,

       0        // eod
};

void mainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Connect(); break;
        case 1: _t->Disconnect(); break;
        case 2: _t->selectTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->selectKaf(); break;
        case 4: _t->selectPrep(); break;
        case 5: _t->selectSphere(); break;
        case 6: _t->selectUnit(); break;
        case 7: _t->selectIndex(); break;
        case 8: _t->selectWork(); break;
        case 9: _t->on_buttonReset_clicked(); break;
        case 10: _t->setFilterKafedra((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setFilterPrep((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->setFilterIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->search((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->on_buttonClear_clicked(); break;
        case 15: _t->on_buttonAdd_clicked(); break;
        case 16: _t->on_buttonDel_clicked(); break;
        case 17: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_mainWindow.data,
    qt_meta_data_mainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int mainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
