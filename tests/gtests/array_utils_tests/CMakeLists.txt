project(array_utils_gtests)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../dist/lib/${CMAKE_SYSTEM_NAME}/${CMAKE_SYSTEM_PROCESSOR}/gtest")

include_directories(../../../libs/array_utils/include ${GTEST_INCLUDE_DIR})

file(GLOB_RECURSE UNIT_TEST_SRC LIST_DIRECTORIES true *.cpp *.cxx)

add_executable(${PROJECT_NAME} ${UNIT_TEST_SRC} )

target_link_libraries(${PROJECT_NAME} array_utils ${GTEST_COMMON_LIBS})

set(TEST_SUITE_NAME ArrayUtilsGTests)
add_test(NAME ${TEST_SUITE_NAME} COMMAND ${PROJECT_NAME})
