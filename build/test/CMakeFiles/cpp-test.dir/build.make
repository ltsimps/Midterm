# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/viki/workspace/Midterm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/viki/workspace/Midterm/build

# Include any dependencies generated for this target.
include test/CMakeFiles/cpp-test.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/cpp-test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/cpp-test.dir/flags.make

test/CMakeFiles/cpp-test.dir/main.cpp.o: test/CMakeFiles/cpp-test.dir/flags.make
test/CMakeFiles/cpp-test.dir/main.cpp.o: ../test/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/viki/workspace/Midterm/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/cpp-test.dir/main.cpp.o"
	cd /home/viki/workspace/Midterm/build/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cpp-test.dir/main.cpp.o -c /home/viki/workspace/Midterm/test/main.cpp

test/CMakeFiles/cpp-test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-test.dir/main.cpp.i"
	cd /home/viki/workspace/Midterm/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/viki/workspace/Midterm/test/main.cpp > CMakeFiles/cpp-test.dir/main.cpp.i

test/CMakeFiles/cpp-test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-test.dir/main.cpp.s"
	cd /home/viki/workspace/Midterm/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/viki/workspace/Midterm/test/main.cpp -o CMakeFiles/cpp-test.dir/main.cpp.s

test/CMakeFiles/cpp-test.dir/main.cpp.o.requires:
.PHONY : test/CMakeFiles/cpp-test.dir/main.cpp.o.requires

test/CMakeFiles/cpp-test.dir/main.cpp.o.provides: test/CMakeFiles/cpp-test.dir/main.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/cpp-test.dir/build.make test/CMakeFiles/cpp-test.dir/main.cpp.o.provides.build
.PHONY : test/CMakeFiles/cpp-test.dir/main.cpp.o.provides

test/CMakeFiles/cpp-test.dir/main.cpp.o.provides.build: test/CMakeFiles/cpp-test.dir/main.cpp.o

test/CMakeFiles/cpp-test.dir/test.cpp.o: test/CMakeFiles/cpp-test.dir/flags.make
test/CMakeFiles/cpp-test.dir/test.cpp.o: ../test/test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/viki/workspace/Midterm/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/cpp-test.dir/test.cpp.o"
	cd /home/viki/workspace/Midterm/build/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cpp-test.dir/test.cpp.o -c /home/viki/workspace/Midterm/test/test.cpp

test/CMakeFiles/cpp-test.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-test.dir/test.cpp.i"
	cd /home/viki/workspace/Midterm/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/viki/workspace/Midterm/test/test.cpp > CMakeFiles/cpp-test.dir/test.cpp.i

test/CMakeFiles/cpp-test.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-test.dir/test.cpp.s"
	cd /home/viki/workspace/Midterm/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/viki/workspace/Midterm/test/test.cpp -o CMakeFiles/cpp-test.dir/test.cpp.s

test/CMakeFiles/cpp-test.dir/test.cpp.o.requires:
.PHONY : test/CMakeFiles/cpp-test.dir/test.cpp.o.requires

test/CMakeFiles/cpp-test.dir/test.cpp.o.provides: test/CMakeFiles/cpp-test.dir/test.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/cpp-test.dir/build.make test/CMakeFiles/cpp-test.dir/test.cpp.o.provides.build
.PHONY : test/CMakeFiles/cpp-test.dir/test.cpp.o.provides

test/CMakeFiles/cpp-test.dir/test.cpp.o.provides.build: test/CMakeFiles/cpp-test.dir/test.cpp.o

test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o: test/CMakeFiles/cpp-test.dir/flags.make
test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o: ../app/Parser.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/viki/workspace/Midterm/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o"
	cd /home/viki/workspace/Midterm/build/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o -c /home/viki/workspace/Midterm/app/Parser.cpp

test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp-test.dir/__/app/Parser.cpp.i"
	cd /home/viki/workspace/Midterm/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/viki/workspace/Midterm/app/Parser.cpp > CMakeFiles/cpp-test.dir/__/app/Parser.cpp.i

test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp-test.dir/__/app/Parser.cpp.s"
	cd /home/viki/workspace/Midterm/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/viki/workspace/Midterm/app/Parser.cpp -o CMakeFiles/cpp-test.dir/__/app/Parser.cpp.s

test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o.requires:
.PHONY : test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o.requires

test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o.provides: test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/cpp-test.dir/build.make test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o.provides.build
.PHONY : test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o.provides

test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o.provides.build: test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o

# Object files for target cpp-test
cpp__test_OBJECTS = \
"CMakeFiles/cpp-test.dir/main.cpp.o" \
"CMakeFiles/cpp-test.dir/test.cpp.o" \
"CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o"

# External object files for target cpp-test
cpp__test_EXTERNAL_OBJECTS =

test/cpp-test: test/CMakeFiles/cpp-test.dir/main.cpp.o
test/cpp-test: test/CMakeFiles/cpp-test.dir/test.cpp.o
test/cpp-test: test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o
test/cpp-test: test/CMakeFiles/cpp-test.dir/build.make
test/cpp-test: vendor/googletest/googletest/libgtest.a
test/cpp-test: test/CMakeFiles/cpp-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable cpp-test"
	cd /home/viki/workspace/Midterm/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/cpp-test.dir/build: test/cpp-test
.PHONY : test/CMakeFiles/cpp-test.dir/build

test/CMakeFiles/cpp-test.dir/requires: test/CMakeFiles/cpp-test.dir/main.cpp.o.requires
test/CMakeFiles/cpp-test.dir/requires: test/CMakeFiles/cpp-test.dir/test.cpp.o.requires
test/CMakeFiles/cpp-test.dir/requires: test/CMakeFiles/cpp-test.dir/__/app/Parser.cpp.o.requires
.PHONY : test/CMakeFiles/cpp-test.dir/requires

test/CMakeFiles/cpp-test.dir/clean:
	cd /home/viki/workspace/Midterm/build/test && $(CMAKE_COMMAND) -P CMakeFiles/cpp-test.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/cpp-test.dir/clean

test/CMakeFiles/cpp-test.dir/depend:
	cd /home/viki/workspace/Midterm/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/viki/workspace/Midterm /home/viki/workspace/Midterm/test /home/viki/workspace/Midterm/build /home/viki/workspace/Midterm/build/test /home/viki/workspace/Midterm/build/test/CMakeFiles/cpp-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/cpp-test.dir/depend

