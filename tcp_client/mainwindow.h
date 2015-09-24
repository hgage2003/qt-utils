#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonConnect_clicked();

private:
    Ui::MainWindow *ui;

    QTcpSocket* m_clientSocket;
};

#endif // MAINWINDOW_H
