QT = core

CONFIG += c++17 cmdline

SOURCES += \
        exampleclass.cpp \
        main.cpp

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    exampleclass.h
