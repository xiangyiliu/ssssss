#-------------------------------------------------
#
# Project created by QtCreator 2016-12-20T22:56:12
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTC_Server
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    myserver.cpp \
    mythread.cpp

HEADERS  += mainwindow.h \
    myserver.h \
    mythread.h

FORMS    += mainwindow.ui
