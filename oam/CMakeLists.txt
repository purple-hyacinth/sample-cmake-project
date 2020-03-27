#cmake_minimum_required(VERSION 3.6)
cmake_minimum_required(VERSION 2.8)
project(SystemOam)

include_directories(
	${PROJECT_SOURCE_DIR}/include
)

add_executable(
	${PROJECT_NAME}
	${PROJECT_SOURCE_DIR}/src/main.cpp
)

target_link_libraries(
	${PROJECT_NAME}
#	${CMAKE_THREAD_LIBS_INIT}
	pthread
)
