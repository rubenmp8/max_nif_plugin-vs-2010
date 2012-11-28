
#include <iostream>
#include <string>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

namespace Ui
{
class Form : public QWidget
{
	Q_OBJECT
public:
	QListWidget *listWidget;
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
	QPushButton *pushButton_2;
	QPushButton *pushButton_3;
	QLineEdit *lineEdit;

	public slots:
		

		void setupUi(QWidget *Form)
		{
			if (Form->objectName().isEmpty())
				Form->setObjectName(QString::fromUtf8("Form"));
			Form->resize(524, 586);
			Form->setAutoFillBackground(false);
			listWidget = new QListWidget(Form);
			new QListWidgetItem(listWidget);
			new QListWidgetItem(listWidget);
			new QListWidgetItem(listWidget);
			listWidget->setObjectName(QString::fromUtf8("listWidget"));
			listWidget->setGeometry(QRect(10, 40, 181, 421));
			listWidget->setModelColumn(0);
			pushButton = new QPushButton(Form);
			pushButton->setObjectName(QString::fromUtf8("pushButton"));
			pushButton->setGeometry(QRect(10, 10, 181, 23));
			horizontalSlider = new QSlider(Form);
			horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
			horizontalSlider->setGeometry(QRect(210, 40, 261, 19));
			horizontalSlider->setOrientation(Qt::Horizontal);
			horizontalSlider_2 = new QSlider(Form);
			horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
			horizontalSlider_2->setGeometry(QRect(210, 90, 261, 19));
			horizontalSlider_2->setOrientation(Qt::Horizontal);
			horizontalSlider_3 = new QSlider(Form);
			horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
			horizontalSlider_3->setGeometry(QRect(210, 140, 261, 19));
			horizontalSlider_3->setOrientation(Qt::Horizontal);
			horizontalSlider_4 = new QSlider(Form);
			horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
			horizontalSlider_4->setGeometry(QRect(210, 190, 261, 19));
			horizontalSlider_4->setOrientation(Qt::Horizontal);
			horizontalSlider_5 = new QSlider(Form);
			horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
			horizontalSlider_5->setGeometry(QRect(210, 240, 261, 19));
			horizontalSlider_5->setOrientation(Qt::Horizontal);
			horizontalSlider_6 = new QSlider(Form);
			horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
			horizontalSlider_6->setGeometry(QRect(210, 290, 261, 19));
			horizontalSlider_6->setOrientation(Qt::Horizontal);
			label = new QLabel(Form);
			label->setObjectName(QString::fromUtf8("label"));
			label->setGeometry(QRect(480, 40, 46, 13));
			label_2 = new QLabel(Form);
			label_2->setObjectName(QString::fromUtf8("label_2"));
			label_2->setGeometry(QRect(480, 90, 46, 13));
			label_3 = new QLabel(Form);
			label_3->setObjectName(QString::fromUtf8("label_3"));
			label_3->setGeometry(QRect(480, 140, 46, 13));
			label_4 = new QLabel(Form);
			label_4->setObjectName(QString::fromUtf8("label_4"));
			label_4->setGeometry(QRect(480, 190, 46, 13));
			label_5 = new QLabel(Form);
			label_5->setObjectName(QString::fromUtf8("label_5"));
			label_5->setGeometry(QRect(480, 240, 46, 13));
			label_6 = new QLabel(Form);
			label_6->setObjectName(QString::fromUtf8("label_6"));
			label_6->setGeometry(QRect(480, 290, 46, 13));
			label_7 = new QLabel(Form);
			label_7->setObjectName(QString::fromUtf8("label_7"));
			label_7->setGeometry(QRect(210, 270, 91, 16));
			label_8 = new QLabel(Form);
			label_8->setObjectName(QString::fromUtf8("label_8"));
			label_8->setGeometry(QRect(210, 220, 131, 16));
			label_9 = new QLabel(Form);
			label_9->setObjectName(QString::fromUtf8("label_9"));
			label_9->setGeometry(QRect(210, 170, 101, 16));
			label_10 = new QLabel(Form);
			label_10->setObjectName(QString::fromUtf8("label_10"));
			label_10->setGeometry(QRect(210, 120, 111, 16));
			label_11 = new QLabel(Form);
			label_11->setObjectName(QString::fromUtf8("label_11"));
			label_11->setGeometry(QRect(210, 70, 91, 16));
			label_12 = new QLabel(Form);
			label_12->setObjectName(QString::fromUtf8("label_12"));
			label_12->setGeometry(QRect(210, 20, 71, 16));
			pushButton_2 = new QPushButton(Form);
			pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
			pushButton_2->setGeometry(QRect(200, 550, 311, 23));
			pushButton_3 = new QPushButton(Form);
			pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
			pushButton_3->setGeometry(QRect(10, 500, 181, 23));
			lineEdit = new QLineEdit(Form);
			lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
			lineEdit->setGeometry(QRect(10, 470, 181, 20));
			lineEdit->setReadOnly(true);

			retranslateUi(Form);
			QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), label_2, SLOT(setNum(int)));
			QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), label_3, SLOT(setNum(int)));
			QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), label_4, SLOT(setNum(int)));
			QObject::connect(horizontalSlider_5, SIGNAL(valueChanged(int)), label_5, SLOT(setNum(int)));
			QObject::connect(horizontalSlider_6, SIGNAL(valueChanged(int)), label_6, SLOT(setNum(int)));
			QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
			QObject::connect(listWidget, SIGNAL(itemSelectionChanged()), pushButton_3, SLOT(click()));
			QObject::connect(listWidget, SIGNAL(currentTextChanged(QString)), lineEdit, SLOT(setText(QString)));

			listWidget->setCurrentRow(-1);


			QMetaObject::connectSlotsByName(Form);
		} // setupUi

		void retranslateUi(QWidget *Form)
		{
			Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));

			const bool __sortingEnabled = listWidget->isSortingEnabled();
			listWidget->setSortingEnabled(false);
			QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
			___qlistwidgetitem->setText(QApplication::translate("Form", "default", 0, QApplication::UnicodeUTF8));
			QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
			___qlistwidgetitem1->setText(QApplication::translate("Form", "skintint", 0, QApplication::UnicodeUTF8));
			QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
			___qlistwidgetitem2->setText(QApplication::translate("Form", "hairshader", 0, QApplication::UnicodeUTF8));
			listWidget->setSortingEnabled(__sortingEnabled);

			pushButton->setText(QApplication::translate("Form", "set shader", 0, QApplication::UnicodeUTF8));
			label->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
			label_2->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
			label_3->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
			label_4->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
			label_5->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
			label_6->setText(QApplication::translate("Form", "0", 0, QApplication::UnicodeUTF8));
			label_7->setText(QApplication::translate("Form", "Specular Strength", 0, QApplication::UnicodeUTF8));
			label_8->setText(QApplication::translate("Form", "Specular Color", 0, QApplication::UnicodeUTF8));
			label_9->setText(QApplication::translate("Form", "Glossiness", 0, QApplication::UnicodeUTF8));
			label_10->setText(QApplication::translate("Form", "Alpha", 0, QApplication::UnicodeUTF8));
			label_11->setText(QApplication::translate("Form", "Emissive Multiple", 0, QApplication::UnicodeUTF8));
			label_12->setText(QApplication::translate("Form", "Emissive Color", 0, QApplication::UnicodeUTF8));
			pushButton_2->setText(QApplication::translate("Form", "Apply changes", 0, QApplication::UnicodeUTF8));
			pushButton_3->setText(QApplication::translate("Form", "Update scene", 0, QApplication::UnicodeUTF8));
		} // retranslateUi

};
}