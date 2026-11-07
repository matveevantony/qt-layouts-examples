cmake_minimum_required(VERSION 3.19)
project(qt-layouts-examples LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(qt-layouts-examples
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    vboxwindow.h vboxwindow.cpp
    hboxwindow.h hboxwindow.cpp
    gridwindow.h gridwindow.cpp
    formwindow.h formwindow.cpp
)

target_link_libraries(qt-layouts-examples
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS qt-layouts-examples
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET qt-layouts-examples
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
