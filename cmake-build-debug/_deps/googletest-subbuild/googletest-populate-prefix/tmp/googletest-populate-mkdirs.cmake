# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/comrade77/CLionProjects/cp_hello/cmake-build-debug/_deps/googletest-src"
  "/Users/comrade77/CLionProjects/cp_hello/cmake-build-debug/_deps/googletest-build"
  "/Users/comrade77/CLionProjects/cp_hello/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix"
  "/Users/comrade77/CLionProjects/cp_hello/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "/Users/comrade77/CLionProjects/cp_hello/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "/Users/comrade77/CLionProjects/cp_hello/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "/Users/comrade77/CLionProjects/cp_hello/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/comrade77/CLionProjects/cp_hello/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
