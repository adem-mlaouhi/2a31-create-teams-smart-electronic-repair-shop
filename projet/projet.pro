QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# Add your sources
SOURCES += \
    main.cpp \
    gestionservice.cpp \
    connection.cpp

HEADERS += \
    gestionservice.h \
    connection.h

FORMS += \
    gestionservice.ui

# Deployment rules
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
