/****************************************************************************
** Meta object code from reading C++ file 'selectiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../selectiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_selectionDialog_t {
    QByteArrayData data[9];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_selectionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_selectionDialog_t qt_meta_stringdata_selectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "selectionDialog"
QT_MOC_LITERAL(1, 16, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "on_comboBox_highlighted"
QT_MOC_LITERAL(4, 63, 5), // "index"
QT_MOC_LITERAL(5, 69, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(6, 89, 7), // "checked"
QT_MOC_LITERAL(7, 97, 27), // "on_limitSlider_valueChanged"
QT_MOC_LITERAL(8, 125, 5) // "value"

    },
    "selectionDialog\0on_buttonBox_accepted\0"
    "\0on_comboBox_highlighted\0index\0"
    "on_checkBox_toggled\0checked\0"
    "on_limitSlider_valueChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_selectionDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       7,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void selectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<selectionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonBox_accepted(); break;
        case 1: _t->on_comboBox_highlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_limitSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject selectionDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_selectionDialog.data,
    qt_meta_data_selectionDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *selectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *selectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_selectionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int selectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
