string(ASCII 27 Esc)
set(ColorReset "${Esc}[m")
set(Yellow      "${Esc}[33m")

cmake_minimum_required (VERSION 2.8)
project (crap)

# Now set CMAKE variables for my use
set(CMAKE_MACOSX_RPATH TRUE)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "./lib")
set(DICT_NAME "Kazu_crapDict")
if(EXISTS ${DICT_NAME}.cxx)
  MESSAGE("Removing a dictionary file: ${Yellow}${DICT_NAME}.cxx${ColorReset}")
  file(REMOVE ${DICT_NAME}.cxx)
endif()
if(EXISTS ${DICT_NAME}.h)
  MESSAGE("Removing a dictionary file: ${Yellow}${DICT_NAME}.h${ColorReset}")
  file(REMOVE ${DICT_NAME}.h)
endif()

# Get list of course
file( GLOB MYSOURCES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" *.cxx )
file( GLOB MYHEADERS RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" *.h  )
list( REMOVE_ITEM MYHEADERS "LinkDef.h")

# Pre process to generate dictionary source code + getting compiler/linker flags
execute_process(COMMAND rootcint -f ${DICT_NAME}.cxx -c -I. ${MYHEADERS} LinkDef.h)
execute_process(COMMAND root-config --libs OUTPUT_VARIABLE ROOTLIB OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND root-config --cflags OUTPUT_VARIABLE ROOTINC OUTPUT_STRIP_TRAILING_WHITESPACE)

# Set include dirs
set(CMAKE_SHARED_LINKER_FLAGS ${ROOTLIB})
set(CMAKE_CXX_FLAGS ${ROOTINC})

# Compile libraries
foreach( SRCFILE ${MYSOURCES} )
string( REPLACE "." ";" SRCHOLDER ${SRCFILE} )
list( GET SRCHOLDER 0 LIBFILE )
list( APPEND MYLIBS ${LIBFILE} )
MESSAGE("Source file: " ${SRCFILE} )
MESSAGE("Lib file   : " ${LIBFILE} )
add_library( ${LIBFILE} STATIC ${SRCFILE} )
link_libraries( ${LIBFILE} )
endforeach()

MESSAGE("My libraries: " ${MYLIBS})
MESSAGE("My sources  : " ${MYSOURCES})
add_library(${DICT_NAME} STATIC ${DICT_NAME}.cxx)
link_libraries(${DICT_NAME})
add_library(crap SHARED ${MYLIBS} ${DICT_NAME})

# Final: executables
#add_executable(crap mymain.cc)
