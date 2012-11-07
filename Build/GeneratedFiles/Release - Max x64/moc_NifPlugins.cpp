/****************************************************************************
** Meta object code from reading C++ file 'ui_qtform.h'
**
** Created: Wed 7. Nov 11:06:30 2012
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
static const uint qt_meta_data_Ui_Form[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      16,    8,    8,    8, 0x08,
      23,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Ui_Form[] = {
    "Ui_Form\0\0save()\0quit()\0setshader()\0"
};

void Ui_Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Ui_Form *_t = static_cast<Ui_Form *>(_o);
        switch (_id) {
        case 0: _t->save(); break;
        case 1: _t->quit(); break;
        case 2: _t->setshader(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Ui_Form::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Ui_Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Ui_Form,
      qt_meta_data_Ui_Form, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ui_Form::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ui_Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ui_Form::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ui_Form))
        return static_cast<void*>(const_cast< Ui_Form*>(this));
    return QWidget::qt_metacast(_clname);
}

int Ui_Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
