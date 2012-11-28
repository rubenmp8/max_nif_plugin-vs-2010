#include <ui_qtform.h>


int beginproc( int arg1,char* arg2[])
{
	QApplication app(arg1,arg2);
	QWidget* swidget = new QWidget;
	Ui::Form test;
	test.setupUi(swidget);
	swidget->show();
	return app.exec();
}