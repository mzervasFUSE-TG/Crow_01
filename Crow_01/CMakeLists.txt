cmake_minimum_required(VERSION 3.10)

project(Crow_01)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME} src/Crow_01.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/libssl.lib
    ${CMAKE_SOURCE_DIR}/lib/libcrypto.lib
)
	