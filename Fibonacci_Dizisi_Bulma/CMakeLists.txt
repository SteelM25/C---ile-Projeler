cmake_minimum_required(VERSION 3.16)

project(Fibonacci_Dizisi_Bulma LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Fibonacci_Dizisi_Bulma main.cpp)

include(GNUInstallDirs)
install(TARGETS Fibonacci_Dizisi_Bulma
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
