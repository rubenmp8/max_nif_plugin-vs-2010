class NifProps;
#include <iostream>
#include <string>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>
#include <niflib.h>
#include "Max.h"

namespace Ui 
{
class Form : public QWidget
{
Q_OBJECT
public:
	QListView *listView;
	QPushButton *pushButton;
	QSlider *horizontalSlider;
	QSlider *horizontalSlider_2;
	QSlider *horizontalSlider_3;
	QSlider *horizontalSlider_4;
	QSlider *horizontalSlider_5;
	QSlider *horizontalSlider_6;
	QLabel *label;
	QLabel *label_2;
	QLabel *label_3;
	QLabel *label_4;
	QLabel *label_5;
	QLabel *label_6;
	QLabel *label_7;
	QLabel *label_8;
	QLabel *label_9;
	QLabel *label_10;
	QLabel *label_11;
	QLabel *label_12;
	public slots:
		void setcolor_form(Color);
		void valueChanged(int);
		void setNum(int);

	void setupUi(QWidget *Form)
	{
		if (Form->objectName().isEmpty())
			Form->setObjectName(QString::fromUtf8("Form"));
		Form->resize(524, 468);
		listView = new QListView(Form);
		listView->setObjectName(QString::fromUtf8("listView"));
		listView->setGeometry(QRect(10, 10, 181, 451));
		pushButton = new QPushButton(Form);
		pushButton->setObjectName(QString::fromUtf8("pushButton"));
		pushButton->setGeometry(QRect(200, 10, 311, 23));
		horizontalSlider = new QSlider(Form);
		horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
		horizontalSlider->setGeometry(QRect(200, 90, 261, 19));
		horizontalSlider->setOrientation(Qt::Horizontal);
		horizontalSlider_2 = new QSlider(Form);
		horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
		horizontalSlider_2->setGeometry(QRect(200, 140, 261, 19));
		horizontalSlider_2->setOrientation(Qt::Horizontal);
		horizontalSlider_3 = new QSlider(Form);
		horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
		horizontalSlider_3->setGeometry(QRect(200, 190, 261, 19));
		horizontalSlider_3->setOrientation(Qt::Horizontal);
		horizontalSlider_4 = new QSlider(Form);
		horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
		horizontalSlider_4->setGeometry(QRect(200, 240, 261, 19));
		horizontalSlider_4->setOrientation(Qt::Horizontal);
		horizontalSlider_5 = new QSlider(Form);
		horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
		horizontalSlider_5->setGeometry(QRect(200, 290, 261, 19));
		horizontalSlider_5->setOrientation(Qt::Horizontal);
		horizontalSlider_6 = new QSlider(Form);
		horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
		horizontalSlider_6->setGeometry(QRect(200, 340, 261, 19));
		horizontalSlider_6->setOrientation(Qt::Horizontal);
		label = new QLabel(Form);
		label->setObjectName(QString::fromUtf8("label"));
		label->setGeometry(QRect(470, 90, 46, 13));
		label_2 = new QLabel(Form);
		label_2->setObjectName(QString::fromUtf8("label_2"));
		label_2->setGeometry(QRect(470, 140, 46, 13));
		label_3 = new QLabel(Form);
		label_3->setObjectName(QString::fromUtf8("label_3"));
		label_3->setGeometry(QRect(470, 190, 46, 13));
		label_4 = new QLabel(Form);
		label_4->setObjectName(QString::fromUtf8("label_4"));
		label_4->setGeometry(QRect(470, 240, 46, 13));
		label_5 = new QLabel(Form);
		label_5->setObjectName(QString::fromUtf8("label_5"));
		label_5->setGeometry(QRect(470, 290, 46, 13));
		label_6 = new QLabel(Form);
		label_6->setObjectName(QString::fromUtf8("label_6"));
		label_6->setGeometry(QRect(470, 340, 46, 13));
		label_7 = new QLabel(Form);
		label_7->setObjectName(QString::fromUtf8("label_7"));
		label_7->setGeometry(QRect(200, 320, 46, 13));
		label_8 = new QLabel(Form);
		label_8->setObjectName(QString::fromUtf8("label_8"));
		label_8->setGeometry(QRect(200, 270, 46, 13));
		label_9 = new QLabel(Form);
		label_9->setObjectName(QString::fromUtf8("label_9"));
		label_9->setGeometry(QRect(200, 220, 46, 13));
		label_10 = new QLabel(Form);
		label_10->setObjectName(QString::fromUtf8("label_10"));
		label_10->setGeometry(QRect(200, 170, 46, 13));
		label_11 = new QLabel(Form);
		label_11->setObjectName(QString::fromUtf8("label_11"));
		label_11->setGeometry(QRect(200, 120, 46, 13));
		label_12 = new QLabel(Form);
		label_12->setObjectName(QString::fromUtf8("label_12"));
		label_12->setGeometry(QRect(200, 70, 46, 13));

		retranslateUi(Form);
		QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
		QMetaObject::connectSlotsByName(Form);
	} // setupUi

	void retranslateUi(QWidget *Form)
	{
		Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
		pushButton->setText(QApplication::translate("Form", "set shader", 0, QApplication::UnicodeUTF8));
		label->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
		label_2->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
		label_3->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
		label_4->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
		label_5->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
		label_6->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
		label_7->setText(QApplication::translate("Form", "TextLabel", 0, QApplication::UnicodeUTF8));
		label_8->setText(QApplication::translate("Form", "TextLabel", 0, QApplication::UnicodeUTF8));
		label_9->setText(QApplication::translate("Form", "TextLabel", 0, QApplication::UnicodeUTF8));
		label_10->setText(QApplication::translate("Form", "TextLabel", 0, QApplication::UnicodeUTF8));
		label_11->setText(QApplication::translate("Form", "TextLabel", 0, QApplication::UnicodeUTF8));
		label_12->setText(QApplication::translate("Form", "TextLabel", 0, QApplication::UnicodeUTF8));
	} // retranslateUi

};

} // namespace Ui