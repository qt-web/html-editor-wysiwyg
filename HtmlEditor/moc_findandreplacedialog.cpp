/****************************************************************************
** Meta object code from reading C++ file 'findandreplacedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "findandreplacedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findandreplacedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FindAndReplaceDialog_t {
    QByteArrayData data[5];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FindAndReplaceDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FindAndReplaceDialog_t qt_meta_stringdata_FindAndReplaceDialog = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 22),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 21),
QT_MOC_LITERAL(4, 67, 31)
    },
    "FindAndReplaceDialog\0on_closeButton_clicked\0"
    "\0on_findButton_clicked\0"
    "on_findAndReplaceButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindAndReplaceDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08,
       3,    0,   30,    2, 0x08,
       4,    0,   31,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FindAndReplaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FindAndReplaceDialog *_t = static_cast<FindAndReplaceDialog *>(_o);
        switch (_id) {
        case 0: _t->on_closeButton_clicked(); break;
        case 1: _t->on_findButton_clicked(); break;
        case 2: _t->on_findAndReplaceButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FindAndReplaceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FindAndReplaceDialog.data,
      qt_meta_data_FindAndReplaceDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *FindAndReplaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindAndReplaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FindAndReplaceDialog.stringdata))
        return static_cast<void*>(const_cast< FindAndReplaceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int FindAndReplaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
