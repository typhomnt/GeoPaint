#-------------------------------------------------
#
# Project created by QtCreator 2016-03-21T08:59:02
#
#-------------------------------------------------

QT       += core

QT       += gui

TARGET = parseVec
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    pugixml-1.7/src/pugixml.cpp \
    vertex.cpp \
    edge.cpp \
    face.cpp \
    halfedge.cpp \
    vec.cpp

HEADERS += \
    pugixml-1.7/src/pugixml.hpp \
    pugixml-1.7/src/pugiconfig.hpp \
    vertex.h \
    edge.h \
    face.h \
    halfedge.h \
    vec.h
