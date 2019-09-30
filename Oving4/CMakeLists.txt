cmake_minimum_required(VERSION 3.14)
project(Oving4)

set(CMAKE_CXX_STANDARD 14)
set(ENV{PKG_CONFIG_PATH} "$ENV{PKG_CONFIG_PATH}:/usr/local/lib/pkgconfig:/opt/X11/lib/pkgconfig:/usr/local/Cellar/libffi/3.2.1/lib/pkgconfig")
find_package(PkgConfig)

pkg_check_modules(GTKMM gtkmm-3.0 REQUIRED)
include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})

add_executable(oppg1 oppg1.cpp)

add_executable(oppg2 oppg2.cpp)

target_link_libraries(oppg2 ${GTKMM_LIBRARIES})