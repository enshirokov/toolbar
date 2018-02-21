#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    _toolBar = new QToolBar;
   QAction *actionAdd = new QAction(QIcon(":/images/add.png"), "", this);
   _toolBar->addAction(actionAdd);

    addToolBar(Qt::ToolBarArea::TopToolBarArea, _toolBar);
}

MainWindow::~MainWindow()
{

}
