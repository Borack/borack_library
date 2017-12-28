set(APP_DIR ${root}/app)

set(sources
 ${APP_DIR}/main.cpp)
 
include_directories(BEFORE SYSTEM ${LIB_API_INCLUDE})
add_executable(${PROJECT_NAME} ${sources})
target_link_libraries(${PROJECT_NAME} ${LIBS})

message(STATUS "Libs: ${LIBS}")
