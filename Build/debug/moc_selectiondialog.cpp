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
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_selectionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_selectionDialog_t qt_meta_stringdata_selectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "selectionDialog"
QT_MOC_LITERAL(1, 16, 11), // "sendVectors"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "std::vector<QString>"
QT_MOC_LITERAL(4, 50, 15), // "originalCountry"
QT_MOC_LITERAL(5, 66, 17), // "comparisonCountry"
QT_MOC_LITERAL(6, 84, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(7, 106, 20), // "receiveCountrySignla"
QT_MOC_LITERAL(8, 127, 34) // "std::vector<std::vector<QStri..."

    },
    "selectionDialog\0sendVectors\0\0"
    "std::vector<QString>\0originalCountry\0"
    "comparisonCountry\0on_buttonBox_accepted\0"
    "receiveCountrySignla\0"
    "std::vector<std::vector<QString> >"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_selectionDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   34,    2, 0x08 /* Private */,
       7,    2,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    2,    2,

       0        // eod
};

void selectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<selectionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendVectors((*reinterpret_cast< std::vector<QString>(*)>(_a[1])),(*reinterpret_cast< std::vector<QString>(*)>(_a[2]))); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->receiveCountrySignla((*reinterpret_cast< std::vector<std::vector<QString> >(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (selectionDialog::*)(std::vector<QString> , std::vector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&selectionDialog::sendVectors)) {
                *result = 0;
                return;
            }
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

// SIGNAL 0
void selectionDialog::sendVectors(std::vector<QString> _t1, std::vector<QString> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
