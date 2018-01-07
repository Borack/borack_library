cmake_minimum_required (VERSION 2.6)
project (Borack_Library)

set(root ${CMAKE_CURRENT_SOURCE_DIR})

add_compile_options(-std=c++11)

#add_subdirectory(${root}/library/library.cmake)
include(${root}/library/library.cmake)
include(${root}/app/app.cmake)

message(STATUS "Include dirs: ${LIBRARY_API_INCLUDE}")
