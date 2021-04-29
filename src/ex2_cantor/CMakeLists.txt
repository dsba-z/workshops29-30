# subproject Cantor Sets

add_executable(ex2_cantor
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    renderarea.cpp
    renderarea.h
)
target_link_libraries(ex2_cantor Qt5::Widgets)
