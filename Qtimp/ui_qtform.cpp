#include <iostream>
#include <string>
#include <ui_qtform.h>
void Ui::Form::setcolor_form(Color)
{

}
void Ui::Form::valueChanged(int)
{

}
void Ui::Form::setNum(int)
{

}
int main(int arg1, char *arg2[])
{
	QApplication app(arg1,arg2);
	QWidget* swidget = new QWidget;
	Ui::Form test;
	test.setupUi(swidget);
	swidget->show();
	Niflib::NiNode* qparent;
	Interface* maxapi;

	return app.exec();
}