#include "mythread.h"

mythread::mythread(int ID,QObject *parent) :
    QThread(parent)
{
    this->socketID = ID;
}
void mythread::run()
{
    socket = new QTcpSocket;
    if(!socket->setSocketDescriptor(this->socketID))
    {
        return;
    }
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnect()));
    exec();

}
void mythread::disconnect()
{
    socket->deleteLater();
    exit(0);
}
