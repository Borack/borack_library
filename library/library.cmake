set(LIB_DIR ${root}/library)

set(LIBRARY_API_INCLUDE
        ${LIB_DIR}/include)
	
set(lib_sources
  ${LIB_DIR}/src/calculator.cpp
  )

include_directories(BEFORE SYSTEM ${LIBRARY_API_INCLUDE})  
add_library(LIBS ${lib_sources})
