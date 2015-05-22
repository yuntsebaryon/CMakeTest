cmake_minimum_required (VERSION 2.8)
project (crap)

# Get list of course
file(GLOB lib_src *.cxx)
file(GLOB lib_head *.h)
list(REMOVE_ITEM lib_head "$ENV{crap}/LinkDef.h")
MESSAGE( STATUS "lib_head" ${lib_head})

# Now set CMAKE variables for my use
set(CMAKE_MACOSX_RPATH TRUE)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "./lib")
set( ROOTLIB "-L/Users/yuntse/Sources/root/lib -lCore -lCint -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lTree -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -lpthread -Wl,-rpath,/Users/yuntse/Sources/root/lib -stdlib=libc++ -lm -ldl")
set(CMAKE_SHARED_LINKER_FLAGS ${ROOTLIB})

# Set include dirs
include_directories(".")
include_directories("$ENV{ROOTSYS}/include")

# Pre process to generate dictionary source code
execute_process(COMMAND rootcint -f Kazu_crapCint.cxx -c -I. ${lib_head} LinkDef.h)


#execute_process(COMMAND root-config --cflags OUTPUT_VARIABLE root_cflags)
#set( CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} ${root_cflags} " )
# message( status "my flags " ${CMAKE_CXX_FLAGS})

# Compile libraries
add_library(sample STATIC sample.cxx)
add_library(yuntse STATIC yuntse.cxx)
link_libraries(sample)
link_libraries(yuntse)
add_library(crap SHARED yuntse sample)
#target_link_libraries(sample yuntse)

# add_library(Kazu_crapCint SHARED Kazu_crapCint.cxx)
# add_library(mylib SHARED sample yuntse Kazu_crapCint)

#add_library(mylib SHARED sample.cxx yuntse.cxx Kazu_crapCint.cxx)

# Link libraries
#target_link_libraries(yuntse sample)
#link_libraries( mylib SHARED ${ROOTLIB} sample yuntse Kazu_crapCint)
#link_libraries( mylib SHARED ${ROOTLIB} )

# Final: executables
#add_executable(crap mymain.cc)
