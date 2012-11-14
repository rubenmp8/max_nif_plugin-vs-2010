/****************************************************************************
** Meta object code from reading C++ file 'ui_qtform.h'
**
** Created: Wed 14. Nov 01:06:24 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qtimp/ui_qtform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_qtform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ui__Form[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      31,    9,    9,    9, 0x0a,
      49,    9,    9,    9, 0x0a,
      66,   61,    9,    9, 0x0a,
      84,   61,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Ui__Form[] = {
    "Ui::Form\0\0setcolor_form(Color)\0"
    "valueChanged(int)\0setNum(int)\0Form\0"
    "setupUi(QWidget*)\0retranslateUi(QWidget*)\0"
};

void Ui::Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Form *_t = static_cast<Form *>(_o);
        switch (_id) {
        case 0: _t->setcolor_form((*reinterpret_cast< Color(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setupUi((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 4: _t->retranslateUi((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Ui::Form::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Ui::Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Ui__Form,
      qt_meta_data_Ui__Form, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ui::Form::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ui::Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ui::Form::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ui__Form))
        return static_cast<void*>(const_cast< Form*>(this));
    return QWidget::qt_metacast(_clname);
}

int Ui::Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
