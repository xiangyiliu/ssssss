#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>

class myserver : public QTcpServer
{
    Q_OBJECT
public:
    explicit myserver(QObject *parent = 0);
    void serverstart();
    int socketDescriptor;
signals:

public slots:
protected:
    void incomingConnection(int socketDescriptor);
private:



};

#endif // MYSERVER_H
