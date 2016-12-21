#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTcpSocket>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //server = new QTcpServer;
    //server->listen(QHostAddress::Any,0);
    s = new myserver ;
    s->serverstart();
    connect(s,SIGNAL((opennewconnection()));newConnection()),this,SLOT
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::opennewconnection()
{
   ui->listWidget->addItem(QString::number(s->socketDescriptor));
   QTcpSocket *socket = new QTcpSocket;
   socket->setSocketDescriptor(s->socketDescriptor);
}
