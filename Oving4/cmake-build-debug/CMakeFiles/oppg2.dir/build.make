# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/stian/CLionProjects/Oving4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stian/CLionProjects/Oving4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/oppg2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/oppg2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oppg2.dir/flags.make

CMakeFiles/oppg2.dir/oppg2.cpp.o: CMakeFiles/oppg2.dir/flags.make
CMakeFiles/oppg2.dir/oppg2.cpp.o: ../oppg2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stian/CLionProjects/Oving4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/oppg2.dir/oppg2.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/oppg2.dir/oppg2.cpp.o -c /Users/stian/CLionProjects/Oving4/oppg2.cpp

CMakeFiles/oppg2.dir/oppg2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/oppg2.dir/oppg2.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stian/CLionProjects/Oving4/oppg2.cpp > CMakeFiles/oppg2.dir/oppg2.cpp.i

CMakeFiles/oppg2.dir/oppg2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/oppg2.dir/oppg2.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stian/CLionProjects/Oving4/oppg2.cpp -o CMakeFiles/oppg2.dir/oppg2.cpp.s

# Object files for target oppg2
oppg2_OBJECTS = \
"CMakeFiles/oppg2.dir/oppg2.cpp.o"

# External object files for target oppg2
oppg2_EXTERNAL_OBJECTS =

oppg2: CMakeFiles/oppg2.dir/oppg2.cpp.o
oppg2: CMakeFiles/oppg2.dir/build.make
oppg2: CMakeFiles/oppg2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stian/CLionProjects/Oving4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable oppg2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oppg2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oppg2.dir/build: oppg2

.PHONY : CMakeFiles/oppg2.dir/build

CMakeFiles/oppg2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oppg2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oppg2.dir/clean

CMakeFiles/oppg2.dir/depend:
	cd /Users/stian/CLionProjects/Oving4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stian/CLionProjects/Oving4 /Users/stian/CLionProjects/Oving4 /Users/stian/CLionProjects/Oving4/cmake-build-debug /Users/stian/CLionProjects/Oving4/cmake-build-debug /Users/stian/CLionProjects/Oving4/cmake-build-debug/CMakeFiles/oppg2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oppg2.dir/depend

