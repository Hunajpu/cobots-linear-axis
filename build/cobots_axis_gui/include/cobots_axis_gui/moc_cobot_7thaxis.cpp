/****************************************************************************
** Meta object code from reading C++ file 'cobot_7thaxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cobots_7thaxis/cobots_axis_gui/include/cobots_axis_gui/cobot_7thaxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cobot_7thaxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rqt_plugin__Cobot7thAxis_t {
    QByteArrayData data[9];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rqt_plugin__Cobot7thAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rqt_plugin__Cobot7thAxis_t qt_meta_stringdata_rqt_plugin__Cobot7thAxis = {
    {
QT_MOC_LITERAL(0, 0, 24), // "rqt_plugin::Cobot7thAxis"
QT_MOC_LITERAL(1, 25, 14), // "clickRunButton"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "clickStopButton"
QT_MOC_LITERAL(4, 57, 17), // "clickReloadButton"
QT_MOC_LITERAL(5, 75, 15), // "clickHomeButton"
QT_MOC_LITERAL(6, 91, 18), // "clickSendPosButton"
QT_MOC_LITERAL(7, 110, 19), // "positionValueChange"
QT_MOC_LITERAL(8, 130, 3) // "pos"

    },
    "rqt_plugin::Cobot7thAxis\0clickRunButton\0"
    "\0clickStopButton\0clickReloadButton\0"
    "clickHomeButton\0clickSendPosButton\0"
    "positionValueChange\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rqt_plugin__Cobot7thAxis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    0,   46,    2, 0x09 /* Protected */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    1,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void rqt_plugin::Cobot7thAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cobot7thAxis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickRunButton(); break;
        case 1: _t->clickStopButton(); break;
        case 2: _t->clickReloadButton(); break;
        case 3: _t->clickHomeButton(); break;
        case 4: _t->clickSendPosButton(); break;
        case 5: _t->positionValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rqt_plugin::Cobot7thAxis::staticMetaObject = { {
    &rqt_gui_cpp::Plugin::staticMetaObject,
    qt_meta_stringdata_rqt_plugin__Cobot7thAxis.data,
    qt_meta_data_rqt_plugin__Cobot7thAxis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rqt_plugin::Cobot7thAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rqt_plugin::Cobot7thAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rqt_plugin__Cobot7thAxis.stringdata0))
        return static_cast<void*>(this);
    return rqt_gui_cpp::Plugin::qt_metacast(_clname);
}

int rqt_plugin::Cobot7thAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rqt_gui_cpp::Plugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
