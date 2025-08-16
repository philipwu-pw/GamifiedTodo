
find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appGamifiedTodo
    main.cpp
)

qt_add_qml_module(appGamifiedTodo
    URI GamifiedTodo
    VERSION 1.0
    QML_FILES
        Main.qml
        SOURCES EventCategory.h EventCategory.cpp
        SOURCES ScheduleTime.h ScheduleTime.cpp
        SOURCES Task.h Task.cpp
        SOURCES Habit.h Habit.cpp
        SOURCES PointCalculator.h PointCalculator.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appGamifiedTodo PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appGamifiedTodo
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appGamifiedTodo
    PRIVATE Qt6::Quick
)
