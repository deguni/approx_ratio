cmake_minimum_required(VERSION 3.7.0 FATAL_ERROR)

project(approx_ratio)

if (POLICY CMP0074)
  cmake_policy(SET CMP0074 NEW)
endif()

set(HEADERS
#
)

set(SOURCES
  approx_ratio.cpp
)

source_group ("Header Files" FILES ${HEADERS})
source_group ("Source Files" FILES ${SOURCES})

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE ${LIBRARIES})

target_compile_definitions(${PROJECT_NAME} PRIVATE -D_UNICODE)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})
