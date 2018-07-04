cmake_minimum_required(VERSION 3.2)
#project name

PROJECT(test_Dummy)

#head file path

INCLUDE_DIRECTORIES(

${PROJECT_BINARY_DIR}/../net
${PROJECT_BINARY_DIR}/../base
${PROJECT_BINARY_DIR}/../HTTP

)

#source directory

AUX_SOURCE_DIRECTORY(${PROJECT_BINARY_DIR}/../net DIR_SRCS)
AUX_SOURCE_DIRECTORY(${PROJECT_BINARY_DIR}/../base DIR_SRCS)
AUX_SOURCE_DIRECTORY(${PROJECT_BINARY_DIR}/../HTTP DIR_SRCS)
AUX_SOURCE_DIRECTORY(${PROJECT_BINARY_DIR}/../test DIR_SRCS)

#set environment variable

SET(TEST_DUMMY

${DIR_SRCS}

)

#set DEBUG

SET(CMAKE_BUILD_TYPE Debug)

#set extern libraries

SET(LIBRARIES pthread)

# 设置可执行文件生成路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/../bin)

#add executable file
ADD_EXECUTABLE(test_Dummy ${TEST_DUMMY})

#add link library
TARGET_LINK_LIBRARIES(test_Dummy ${LIBRARIES})



