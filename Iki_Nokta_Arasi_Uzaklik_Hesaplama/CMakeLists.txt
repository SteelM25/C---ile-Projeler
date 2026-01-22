cmake_minimum_required(VERSION 3.16)

project(Iki_Nokta_Arasi_Uzaklik_Hesaplama LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Iki_Nokta_Arasi_Uzaklik_Hesaplama main.cpp
    nokta.h nokta.cpp)

include(GNUInstallDirs)
install(TARGETS Iki_Nokta_Arasi_Uzaklik_Hesaplama
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
