cmake_minimum_required(VERSION 3.22)
project(cp_hello)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

include_directories(src)

set(SRC_LIST
        src/fib/fib_dynamic.cpp
        src/binomial/binomial.cpp
        src/strings/string_edit_cost.cpp
        src/leetcode/duplicate_zeros.cpp
        src/leetcode/squares_of_a_sorted_array.cpp
        )

add_executable(${PROJECT_NAME} ${SRC_LIST} main.cpp)

enable_testing()

set(SRC_TESTS
        test/fib/fib_dynamic_test.cpp
        test/binomial/binomial_test.cpp
        test/strings/string_edit_cost_test.cpp
        test/main.cpp
        )

add_executable(
        google_test
        ${SRC_LIST}
        ${SRC_TESTS}
)

target_link_libraries(google_test gtest_main)

include(GoogleTest)
gtest_discover_tests(google_test)
