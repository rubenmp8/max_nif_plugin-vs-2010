/********************************************************************************
** Form generated from reading UI file 'qtformHp1032.ui'
**
** Created: Fri 2. Nov 17:56:12 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore\qvariant.h>
#include <QtGui\qaction.h>
#include <QtGui\qapplication.h>
#include <QtGui\qbuttongroup.h>
#include <QtGui\qheaderview.h>
#include <QtGui\qpushbutton.h>
#include <QtGui\qwidget.h>
#include <niflib.h>
#include <obj\NiObject.h>
#include <obj\NiNode.h>
#include <max.h>
#include <maxapi.h>


class Ui_Form
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(400, 300);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 250, 211, 23));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Form", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui
