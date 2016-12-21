#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>

class mythread : public QThread
{
    Q_OBJECT
public:
    explicit mythread(int ID,QObject *parent = 0);
    void run();

signals:

public slots:
    void disconnect();
private:
    int socketID;
    QTcpSocket *socket;



};

#endif // MYTHREAD_H
