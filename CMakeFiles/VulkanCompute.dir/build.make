# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.25.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.25.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/daphnebogosian/Documents/VulkanCompute

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/daphnebogosian/Documents/VulkanCompute

# Include any dependencies generated for this target.
include CMakeFiles/VulkanCompute.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/VulkanCompute.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/VulkanCompute.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VulkanCompute.dir/flags.make

CMakeFiles/VulkanCompute.dir/main.cpp.o: CMakeFiles/VulkanCompute.dir/flags.make
CMakeFiles/VulkanCompute.dir/main.cpp.o: main.cpp
CMakeFiles/VulkanCompute.dir/main.cpp.o: CMakeFiles/VulkanCompute.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/daphnebogosian/Documents/VulkanCompute/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VulkanCompute.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VulkanCompute.dir/main.cpp.o -MF CMakeFiles/VulkanCompute.dir/main.cpp.o.d -o CMakeFiles/VulkanCompute.dir/main.cpp.o -c /Users/daphnebogosian/Documents/VulkanCompute/main.cpp

CMakeFiles/VulkanCompute.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VulkanCompute.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/daphnebogosian/Documents/VulkanCompute/main.cpp > CMakeFiles/VulkanCompute.dir/main.cpp.i

CMakeFiles/VulkanCompute.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VulkanCompute.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/daphnebogosian/Documents/VulkanCompute/main.cpp -o CMakeFiles/VulkanCompute.dir/main.cpp.s

# Object files for target VulkanCompute
VulkanCompute_OBJECTS = \
"CMakeFiles/VulkanCompute.dir/main.cpp.o"

# External object files for target VulkanCompute
VulkanCompute_EXTERNAL_OBJECTS =

VulkanCompute: CMakeFiles/VulkanCompute.dir/main.cpp.o
VulkanCompute: CMakeFiles/VulkanCompute.dir/build.make
VulkanCompute: CMakeFiles/VulkanCompute.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/daphnebogosian/Documents/VulkanCompute/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable VulkanCompute"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VulkanCompute.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VulkanCompute.dir/build: VulkanCompute
.PHONY : CMakeFiles/VulkanCompute.dir/build

CMakeFiles/VulkanCompute.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VulkanCompute.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VulkanCompute.dir/clean

CMakeFiles/VulkanCompute.dir/depend:
	cd /Users/daphnebogosian/Documents/VulkanCompute && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/daphnebogosian/Documents/VulkanCompute /Users/daphnebogosian/Documents/VulkanCompute /Users/daphnebogosian/Documents/VulkanCompute /Users/daphnebogosian/Documents/VulkanCompute /Users/daphnebogosian/Documents/VulkanCompute/CMakeFiles/VulkanCompute.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/VulkanCompute.dir/depend
