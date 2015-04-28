TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    palabra.cpp \
    subsecuencia.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    palabra.h \
    subsecuencia.h

