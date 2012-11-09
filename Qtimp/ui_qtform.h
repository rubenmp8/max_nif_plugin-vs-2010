#ifndef UI_QTFORM_H
#define UI_QTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtCore/QCoreApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>
#include <QtGui/Qfiledialog>
#include "QtGui/QtGui"
#include <QMetaObject>


__declspec( dllexport )class Ui_Form : public QWidget
{
	Q_OBJECT

	public:

		Ui_Form();
		
	private:

		QListView   *shader;

		QPushButton *saveButton;
	
        QPushButton *quitButton;

		QFileDialog *filedlg;


};
#endif 