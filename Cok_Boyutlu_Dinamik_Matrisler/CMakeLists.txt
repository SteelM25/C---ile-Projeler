cmake_minimum_required(VERSION 3.16)

project(Cok_Boyutlu_Dinamik_Matrisler LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Cok_Boyutlu_Dinamik_Matrisler main.cpp)

include(GNUInstallDirs)
install(TARGETS Cok_Boyutlu_Dinamik_Matrisler
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
