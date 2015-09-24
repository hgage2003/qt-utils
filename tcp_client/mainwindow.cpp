#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_clientSocket = new QTcpSocket( this );
}

MainWindow::~MainWindow()
{
    m_clientSocket->close();
    delete ui;
}

void MainWindow::on_buttonConnect_clicked()
{

}
