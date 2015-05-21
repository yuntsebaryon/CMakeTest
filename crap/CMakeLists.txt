cmake_minimum_required (VERSION 2.8)
project (crap)

file(GLOB lib_src *.cxx)
file(GLOB lib_head *.h)
list(REMOVE_ITEM lib_head "$ENV{crap}/LinkDef.h")
MESSAGE( STATUS "lib_head" ${lib_head})

execute_process(COMMAND rootcint -f Kazu_crapCint.cxx -c -I. ${lib_head} LinkDef.h)
set(CMAKE_MACOSX_RPATH TRUE)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "./lib")

include_directories(".")
include_directories("$ENV{ROOTSYS}/include")
#execute_process(COMMAND root-config --cflags OUTPUT_VARIABLE root_cflags)
#set( CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} ${root_cflags} " )
message( status "my flags " ${CMAKE_CXX_FLAGS})

add_library(mylib SHARED sample.cxx yuntse.cxx Kazu_crapCint.cxx)
#add_library(sample OBJECT sample.cxx)
#add_library(yuntse OBJECT yuntse.cxx)

# add_executable(crap mymain.cc)
#target_link_libraries(yuntse sample)
