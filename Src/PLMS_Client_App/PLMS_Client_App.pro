QT += core widgets network
TEMPLATE = app
TARGET = "Aplikacja biblioteki publicznej"
VERSION_PE_HEADER = 1.0

HEADERS += \
    app.hpp \
    appwindow.hpp \
    appwindowstatenum.hpp \
    windowmacros.hpp \
    menu.hpp \
    mainmacros.hpp \
    toolbar.hpp \
    promptelement.hpp \
    promptlist.hpp \
    promptpanel.hpp \
    promptpanelmaximizebutton.hpp \
    promptpanelminimizebutton.hpp \
    promptpanelstatusenum.hpp \
    prompttypeenum.hpp \
    promptelementexpandbutton.hpp \
    dialogresultenum.hpp \
    dialogtypeenum.hpp \
    dialog.hpp \
    tabbar.hpp \
    usertab.hpp \
    server.hpp \
    ../PLMS_Server_App/bookparameters.hpp \
    ../PLMS_Server_App/commandtype.hpp \
    ../PLMS_Server_App/filetypeenum.hpp \
    ../PLMS_Server_App/messagetype.hpp \
    ../PLMS_Server_App/readfilerules.hpp \
    ../PLMS_Server_App/returnerrortype.hpp \
    ../PLMS_Server_App/user.hpp \
    ../PLMS_Server_App/userparametersenum.hpp \
    ../PLMS_Server_App/book.hpp \
    ../PLMS_Server_App/bookcomment.hpp \
    appwindowcentralpanel.hpp \
    appwindowloginpanel.hpp \
    emptyenum.hpp \
    formatabledata.hpp \
    formatabledatafield.hpp \
    serverreplystatusenum.hpp \
    appwindowregisterpanel.hpp \
    datapanel.hpp \
    userdatapanel.hpp \
    appwindowloggedinpanel.hpp \
    loggedincontrolpanel.hpp \
    appwindowloggedinstatus.hpp \
    loggedincontrolpanelreaderfunc.hpp \
    loggedincontrolpanellibrarianfunc.hpp \
    loggedinpaneladminfunc.hpp \
    loggedinoperationpanel.hpp \
    operationpanelyouraccount.hpp \
    bookdatapanel.hpp \
    operationpaneluserdata.hpp \
    operationpanelbookdata.hpp \
    operationpaneladdbook.hpp \
    operationpaneladduser.hpp \
    operationpanelfilteredlist.hpp \
    datapanelmode.hpp \
    ../PLMS_Server_App/bookstatus.hpp \
    ../PLMS_Server_App/commandtype.hpp \
    promptelementstandardwarning.hpp \
    promptelementstandarderror.hpp \
    filteredlist.hpp \
    filterpanel.hpp \
    filterpanelelement.hpp \
    operationlist.hpp \
    controlbar.hpp \
    operationlistelement.hpp \
    operationlistelementmybooks.hpp \
    operationlistelementlibrary.hpp \
    operationlistelementbooks.hpp \
    operationlistelementreaders.hpp \
    operationlistelementusers.hpp \
    commentlist.hpp \
    commentlistelement.hpp \
    ../PLMS_Server_App/userpermissions.hpp \
    ../PLMS_Server_App/booklog.hpp \
    ../PLMS_Server_App/booklogparameters.hpp \
    operationlistelementbooklog.hpp \
    changepasswordpanel.hpp \
    bookpanel.hpp \
    addcommentpanel.hpp \
    checkpasswordpanel.hpp \
    operationlistelementbookpanelusersbooks.hpp

SOURCES += \
    app.cpp \
    main.cpp \
    appwindow.cpp \
    menu.cpp \
    toolbar.cpp \
    promptelement.cpp \
    promptlist.cpp \
    promptpanel.cpp \
    promptpanelmaximizebutton.cpp \
    promptpanelminimizebutton.cpp \
    promptelementexpandbutton.cpp \
    dialog.cpp \
    tabbar.cpp \
    usertab.cpp \
    server.cpp \
    ../PLMS_Server_App/user.cpp \
    ../PLMS_Server_App/book.cpp \
    appwindowcentralpanel.cpp \
    formatabledata.cpp \
    formatabledatafield.cpp \
    appwindowloginpanel.cpp \
    appwindowregisterpanel.cpp \
    datapanel.cpp \
    userdatapanel.cpp \
    loggedincontrolpanel.cpp \
    loggedinoperationpanel.cpp \
    appwindowloggedinpanel.cpp \
    operationpanelyouraccount.cpp \
    bookdatapanel.cpp \
    operationpaneluserdata.cpp \
    operationpanelbookdata.cpp \
    operationpaneladdbook.cpp \
    operationpaneladduser.cpp \
    operationpanelfilteredlist.cpp \
    promptelementstandardwarning.cpp \
    promptelementstandarderror.cpp \
    filteredlist.cpp \
    filterpanel.cpp \
    filterpanelelement.cpp \
    operationlist.cpp \
    controlbar.cpp \
    operationlistelement.cpp \
    operationlistelementmybooks.cpp \
    operationlistelementlibrary.cpp \
    operationlistelementbooks.cpp \
    operationlistelementreaders.cpp \
    operationlistelementusers.cpp \
    commentlist.cpp \
    commentlistelement.cpp \
    ../PLMS_Server_App/booklog.cpp \
    operationlistelementbooklog.cpp \
    changepasswordpanel.cpp \
    bookpanel.cpp \
    addcommentpanel.cpp \
    checkpasswordpanel.cpp \
    operationlistelementbookpanelusersbooks.cpp


RESOURCES += \
    icons.qrc
