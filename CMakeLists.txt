cmake_minimum_required(VERSION 3.16)

project(GamifiedTodo VERSION 0.1 LANGUAGES CXX)

add_subdirectory(src/)

target_sources(appGamifiedTodo
  PRIVATE
    src/model/CMakeLists.txt
    src/test/CMakeLists.txt
    src/ui/CMakeLists.txt
)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(GNUInstallDirs)
install(TARGETS appGamifiedTodo
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
add_subdirectory(.)
