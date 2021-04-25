# subproject Hello World

add_executable(ex1_helloworld
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)
target_link_libraries(ex1_helloworld Qt5::Widgets)