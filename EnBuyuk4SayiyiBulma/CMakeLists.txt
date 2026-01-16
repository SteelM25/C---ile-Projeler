cmake_minimum_required(VERSION 3.16)

project(EnBuyuk4SayiyiBulma LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(EnBuyuk4SayiyiBulma main.cpp)

include(GNUInstallDirs)
install(TARGETS EnBuyuk4SayiyiBulma
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
