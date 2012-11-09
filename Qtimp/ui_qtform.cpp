#include <iostream>
#include <string>
#include <ui_qtform.h>
#include <QtGui/QWidget>

Ui_Form::Ui_Form()
{
	shader = new QListView;
	quitButton = new QPushButton;
	shader , SLOT(setCurrentIndex(int));
    connect(quitButton, SIGNAL(clicked()),shader, SLOT(setCurrentIndex(int)));
}