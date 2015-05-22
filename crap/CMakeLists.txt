string(ASCII 27 Esc)
set(ColorReset "${Esc}[m")
set(Yellow      "${Esc}[33m")

cmake_minimum_required (VERSION 2.8)
project (crap)

# Now set CMAKE variables for my use
set(CMAKE_MACOSX_RPATH TRUE)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "./lib")
set(DICT_NAME "Kazu_crapDict")
if(EXISTS ${CMAKE_CURRENT_BINARY_DIR}/${DICT_NAME}.cxx)
  MESSAGE("Removing a dictionary file: ${Yellow}${DICT_NAME}.cxx${ColorReset}")
  file(REMOVE ${CMAKE_CURRENT_BINARY_DIR}/${DICT_NAME}.cxx)
endif()
if(EXISTS ${CMAKE_CURRENT_BINARY_DIR}/${DICT_NAME}.h)
  MESSAGE("Removing a dictionary file: ${Yellow}${DICT_NAME}.h${ColorReset}")
  file(REMOVE ${CMAKE_CURRENT_BINARY_DIR}/${DICT_NAME}.h)
endif()

# Get list of course
file( GLOB MYHEADERS *.h  )
file( GLOB LINKDEF LinkDef.h)
list(GET LINKDEF 0 LINKDEF)
list( REMOVE_ITEM MYHEADERS ${LINKDEF})

# Pre process to generate dictionary source code + getting compiler/linker flags
execute_process(COMMAND rootcint -f ${CMAKE_CURRENT_BINARY_DIR}/${DICT_NAME}.cxx -c -I. ${MYHEADERS} ${LINKDEF})
execute_process(COMMAND root-config --libs OUTPUT_VARIABLE ROOTLIB OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND root-config --cflags OUTPUT_VARIABLE ROOTINC OUTPUT_STRIP_TRAILING_WHITESPACE)

# Set include dirs
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_SHARED_LINKER_FLAGS ${ROOTLIB})
set(CMAKE_CXX_FLAGS ${ROOTINC})

# Compile libraries
add_library(sample STATIC sample.cxx)
add_library(yuntse STATIC yuntse.cxx)
add_library(${DICT_NAME} STATIC ${CMAKE_CURRENT_BINARY_DIR}/${DICT_NAME}.cxx)
link_libraries(sample)
link_libraries(yuntse)
link_libraries(${DICT_NAME})
add_library(crap SHARED yuntse sample ${DICT_NAME})

# Final: executables
#add_executable(crap mymain.cc)
