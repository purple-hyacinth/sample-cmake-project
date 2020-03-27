#cmake_minimum_required(VERSION 3.6)
cmake_minimum_required(VERSION 2.8)

#project(RL6200 VERSION 1.0 DESCRIPTION "redline 6200" LANGUAGES CXX)
project(RL6200)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_THREADS_LIBS_INIT "-lpthread")
set(CMAKE_HAVE_THREADS_LIBRARY 1)
set(CMAKE_USE_PTHREADS_INIT 1)
set(THREADS_PREFER_PTHREAD_FLAG ON)

# before cmake 3.1
if(CMAKE_COMPILER_IS_GNUCXX)
    add_definitions(-std=gnu++0x)
endif()

# add sub-projects
#add_subdirectory(data_model)
add_subdirectory(oam)
add_subdirectory(netconf_cli)
#add_subdirectory(restconf_cli)
