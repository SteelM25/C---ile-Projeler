cmake_minimum_required(VERSION 3.16)

project(Sayi_Tahmini_Oyunu LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Sayi_Tahmini_Oyunu main.cpp)

include(GNUInstallDirs)
install(TARGETS Sayi_Tahmini_Oyunu
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
