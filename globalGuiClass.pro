#-------------------------------------------------
#
# Project created by QtCreator 2014-10-19T20:34:52
#
#-------------------------------------------------

QT       += core gui
QT += widgets

TARGET = globalGuiClass
TEMPLATE = app

MOC_DIR=tmp
RCC_DIR=tmp
UI_DIR=tmp
OBJECTS_DIR=tmp
DESTDIR=bin

SOURCES += main.cpp\
        frmmain.cpp \
    iconhelper.cpp \
    frmmessagebox.cpp

HEADERS  += frmmain.h \
    iconhelper.h \
    myhelper.h \
    frmmessagebox.h

FORMS    += frmmain.ui \
    frmmessagebox.ui
