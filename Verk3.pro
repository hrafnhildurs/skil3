#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T09:29:33
#
#-------------------------------------------------

QT  += core gui
QT  += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Verk3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        computer.cpp\
        database.cpp\
        manager.cpp\
        person.cpp\
        relations.cpp

HEADERS += mainwindow.h\
        computer.h\
        database.h\
        manager.h\
        person.h\
        relations.h

FORMS    += mainwindow.ui
