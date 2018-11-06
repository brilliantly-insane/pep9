/****************************************************************************
** Meta object code from reading C++ file 'sourcecodepane.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sourcecodepane.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sourcecodepane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SourceCodePane_t {
    QByteArrayData data[12];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceCodePane_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceCodePane_t qt_meta_stringdata_SourceCodePane = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SourceCodePane"
QT_MOC_LITERAL(1, 15, 13), // "undoAvailable"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "redoAvailable"
QT_MOC_LITERAL(4, 44, 18), // "labelDoubleClicked"
QT_MOC_LITERAL(5, 63, 10), // "Enu::EPane"
QT_MOC_LITERAL(6, 74, 4), // "pane"
QT_MOC_LITERAL(7, 79, 13), // "onFontChanged"
QT_MOC_LITERAL(8, 93, 4), // "font"
QT_MOC_LITERAL(9, 98, 14), // "onColorChanged"
QT_MOC_LITERAL(10, 113, 18), // "setLabelToModified"
QT_MOC_LITERAL(11, 132, 8) // "modified"

    },
    "SourceCodePane\0undoAvailable\0\0"
    "redoAvailable\0labelDoubleClicked\0"
    "Enu::EPane\0pane\0onFontChanged\0font\0"
    "onColorChanged\0setLabelToModified\0"
    "modified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceCodePane[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   53,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void SourceCodePane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SourceCodePane *_t = static_cast<SourceCodePane *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->undoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->redoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->labelDoubleClicked((*reinterpret_cast< Enu::EPane(*)>(_a[1]))); break;
        case 3: _t->onFontChanged((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 4: _t->onColorChanged(); break;
        case 5: _t->setLabelToModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SourceCodePane::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SourceCodePane::undoAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SourceCodePane::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SourceCodePane::redoAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SourceCodePane::*)(Enu::EPane );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SourceCodePane::labelDoubleClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SourceCodePane::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SourceCodePane.data,
      qt_meta_data_SourceCodePane,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SourceCodePane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceCodePane::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SourceCodePane.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SourceCodePane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SourceCodePane::undoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SourceCodePane::redoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SourceCodePane::labelDoubleClicked(Enu::EPane _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
