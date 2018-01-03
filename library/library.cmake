set(LIB_DIR ${root}/library)

set(LIBRARY_API_INCLUDE
        ${LIB_DIR}/include)
include_directories(BEFORE SYSTEM ${LIBRARY_API_INCLUDE})

set(CALCULATOR CALCULATOR)
set(lib_sources
  ${LIB_DIR}/src/calculator.cpp
  )
add_library(${CALCULATOR} SHARED ${lib_sources})

set(INSERTION_SORT INSERTION_SORT)
set(insertion_sort
  ${LIB_DIR}/src/insertion_sort_impl.cpp
  )
add_library(${INSERTION_SORT} SHARED ${insertion_sort})

set(QUICK_SORT QUICK_SORT)
set(quick_sort
  ${LIB_DIR}/src/quick_sort.cpp
  )
add_library(${QUICK_SORT} SHARED ${quick_sort})


list(APPEND LIBS ${CALCULATOR} ${INSERTION_SORT} ${QUICK_SORT})

message(STATUS "Libs: ${LIBS}")
