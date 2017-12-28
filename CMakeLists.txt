cmake_minimum_required (VERSION 2.6)
project (Borack_Library)

set(root ${CMAKE_CURRENT_SOURCE_DIR})

#add_subdirectory(${root}/library/library.cmake)
include(${root}/library/library.cmake)
include(${root}/app/app.cmake)

message(STATUS "${LIBRARY_API_INCLUDE}")