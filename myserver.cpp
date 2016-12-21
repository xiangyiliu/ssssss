#include "myserver.h"
#include "mythread.h"

myserver::myserver(QObject *parent) :
    QTcpServer(parent)
{
}
void myserver::serverstart()
{
    if(!this->listen(QHostAddress::Any,0))
    {

    }
}
void myserver::incomingConnection(int socketDescriptor)
{
  mythread *thread = new mythread(socketDescriptor,this);
  thread->start();
}
