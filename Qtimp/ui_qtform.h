#pragma once
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
#include <QtGui/Qfiledialog>


class Ui_Form : public QWidget
{
	Q_OBJECT

	public:

		Ui_Form();
		~Ui_Form();

	
	private slots:
		void save(); 
		void quit();
		void setshader();


	private:
		QListView   *shader;
		QPushButton *saveButton;
        QPushButton *quitButton;
		QFileDialog *filedlg;


};