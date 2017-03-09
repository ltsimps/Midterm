cmake_minimum_required(VERSION 3.2.1)
project (scratch)



option(COVERALLS "Turn on coveralls support" OFF)
option(COVERALLS_UPLOAD "Upload the generated coveralls json" ON)

if (COVERALLS)
	include(Coveralls)
	coveralls_turn_on_coverage()
endif()


# Setup the coveralls target and tell it to gather
# coverage data for all the lib sources.
if (COVERALLS)
	coveralls_setup(
        "${LIB_SRC}" 
        ${COVERALLS_UPLOAD}                 
        "${CMAKE_SOURCE_DIR}/coveralls-cmake/cmake")
endif()




include(CMakeToolsHelpers OPTIONAL)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic")
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(app)
add_subdirectory(test)
add_subdirectory(vendor/googletest/googletest)
