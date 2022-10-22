QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    datetime.cpp \
    imap-ssl.cpp \
    main.cpp \
    mainwindow.cpp \
    smtp-ssl.cpp

HEADERS += \
    datetime.h \
    imap-ssl.h \
    mainwindow.h \
    version.h

FORMS += \
    mainwindow.ui

#RC_ICONS = pictures/icons8-email-100.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

LIBS += -L/usr/local/lib/ -lgcrypt \
                    -lgpg-error \
                    -lcurl

DISTFILES += \
    qss/coffee.qss

RESOURCES += \
    resource.qrc

