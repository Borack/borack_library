set(LIB_DIR ${root}/library)

set(LIBRARY_API_INCLUDE
        ${LIB_DIR}/include)
	
set(lib_sources
  ${LIB_DIR}/src/calculator.cpp
  )

include_directories(BEFORE SYSTEM ${LIBRARY_API_INCLUDE})  
set(LIBS BORACK_LIB)
add_library(${LIBS} SHARED ${lib_sources})

message(STATUS "Libs: ${LIBS}")
