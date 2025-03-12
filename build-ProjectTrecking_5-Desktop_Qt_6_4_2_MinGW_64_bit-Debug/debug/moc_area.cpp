/****************************************************************************
** Meta object code from reading C++ file 'area.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ProjectTrecking_5/area.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'area.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_area_t {
    uint offsetsAndSizes[20];
    char stringdata0[5];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[26];
    char stringdata5[21];
    char stringdata6[12];
    char stringdata7[6];
    char stringdata8[39];
    char stringdata9[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_area_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_area_t qt_meta_stringdata_area = {
    {
        QT_MOC_LITERAL(0, 4),  // "area"
        QT_MOC_LITERAL(5, 11),  // "firstWindow"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 26),  // "on_artCode_editingFinished"
        QT_MOC_LITERAL(45, 25),  // "on_pushButton_Del_clicked"
        QT_MOC_LITERAL(71, 20),  // "on_tableView_clicked"
        QT_MOC_LITERAL(92, 11),  // "QModelIndex"
        QT_MOC_LITERAL(104, 5),  // "index"
        QT_MOC_LITERAL(110, 38),  // "on_comboBox_Sector_currentInd..."
        QT_MOC_LITERAL(149, 30)   // "on_pushButton_mWindows_clicked"
    },
    "area",
    "firstWindow",
    "",
    "on_artCode_editingFinished",
    "on_pushButton_Del_clicked",
    "on_tableView_clicked",
    "QModelIndex",
    "index",
    "on_comboBox_Sector_currentIndexChanged",
    "on_pushButton_mWindows_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_area[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    1,   53,    2, 0x08,    4 /* Private */,
       8,    1,   56,    2, 0x08,    6 /* Private */,
       9,    0,   59,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject area::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_area.offsetsAndSizes,
    qt_meta_data_area,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_area_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<area, std::true_type>,
        // method 'firstWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_artCode_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Del_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_comboBox_Sector_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_mWindows_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void area::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<area *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->firstWindow(); break;
        case 1: _t->on_artCode_editingFinished(); break;
        case 2: _t->on_pushButton_Del_clicked(); break;
        case 3: _t->on_tableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->on_comboBox_Sector_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_pushButton_mWindows_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (area::*)();
            if (_t _q_method = &area::firstWindow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *area::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *area::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_area.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int area::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void area::firstWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
