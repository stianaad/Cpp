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
CMAKE_SOURCE_DIR = /Users/stian/CLionProjects/Oving7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stian/CLionProjects/Oving7/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fraction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fraction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fraction.dir/flags.make

CMakeFiles/fraction.dir/main.cpp.o: CMakeFiles/fraction.dir/flags.make
CMakeFiles/fraction.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stian/CLionProjects/Oving7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fraction.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fraction.dir/main.cpp.o -c /Users/stian/CLionProjects/Oving7/main.cpp

CMakeFiles/fraction.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fraction.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stian/CLionProjects/Oving7/main.cpp > CMakeFiles/fraction.dir/main.cpp.i

CMakeFiles/fraction.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fraction.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stian/CLionProjects/Oving7/main.cpp -o CMakeFiles/fraction.dir/main.cpp.s

CMakeFiles/fraction.dir/fraction.cpp.o: CMakeFiles/fraction.dir/flags.make
CMakeFiles/fraction.dir/fraction.cpp.o: ../fraction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stian/CLionProjects/Oving7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/fraction.dir/fraction.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fraction.dir/fraction.cpp.o -c /Users/stian/CLionProjects/Oving7/fraction.cpp

CMakeFiles/fraction.dir/fraction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fraction.dir/fraction.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stian/CLionProjects/Oving7/fraction.cpp > CMakeFiles/fraction.dir/fraction.cpp.i

CMakeFiles/fraction.dir/fraction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fraction.dir/fraction.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stian/CLionProjects/Oving7/fraction.cpp -o CMakeFiles/fraction.dir/fraction.cpp.s

# Object files for target fraction
fraction_OBJECTS = \
"CMakeFiles/fraction.dir/main.cpp.o" \
"CMakeFiles/fraction.dir/fraction.cpp.o"

# External object files for target fraction
fraction_EXTERNAL_OBJECTS =

fraction: CMakeFiles/fraction.dir/main.cpp.o
fraction: CMakeFiles/fraction.dir/fraction.cpp.o
fraction: CMakeFiles/fraction.dir/build.make
fraction: CMakeFiles/fraction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stian/CLionProjects/Oving7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable fraction"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fraction.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fraction.dir/build: fraction

.PHONY : CMakeFiles/fraction.dir/build

CMakeFiles/fraction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fraction.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fraction.dir/clean

CMakeFiles/fraction.dir/depend:
	cd /Users/stian/CLionProjects/Oving7/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stian/CLionProjects/Oving7 /Users/stian/CLionProjects/Oving7 /Users/stian/CLionProjects/Oving7/cmake-build-debug /Users/stian/CLionProjects/Oving7/cmake-build-debug /Users/stian/CLionProjects/Oving7/cmake-build-debug/CMakeFiles/fraction.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fraction.dir/depend

