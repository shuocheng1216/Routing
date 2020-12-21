# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /home/chengshuo1216/application/cmake-3.18.0-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/chengshuo1216/application/cmake-3.18.0-Linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build"

# Include any dependencies generated for this target.
include strategy/CMakeFiles/AStar.dir/depend.make

# Include the progress variables for this target.
include strategy/CMakeFiles/AStar.dir/progress.make

# Include the compile flags for this target's objects.
include strategy/CMakeFiles/AStar.dir/flags.make

strategy/CMakeFiles/AStar.dir/a_star_strategy.cc.o: strategy/CMakeFiles/AStar.dir/flags.make
strategy/CMakeFiles/AStar.dir/a_star_strategy.cc.o: ../strategy/a_star_strategy.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object strategy/CMakeFiles/AStar.dir/a_star_strategy.cc.o"
	cd "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build/strategy" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AStar.dir/a_star_strategy.cc.o -c "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/strategy/a_star_strategy.cc"

strategy/CMakeFiles/AStar.dir/a_star_strategy.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AStar.dir/a_star_strategy.cc.i"
	cd "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build/strategy" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/strategy/a_star_strategy.cc" > CMakeFiles/AStar.dir/a_star_strategy.cc.i

strategy/CMakeFiles/AStar.dir/a_star_strategy.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AStar.dir/a_star_strategy.cc.s"
	cd "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build/strategy" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/strategy/a_star_strategy.cc" -o CMakeFiles/AStar.dir/a_star_strategy.cc.s

# Object files for target AStar
AStar_OBJECTS = \
"CMakeFiles/AStar.dir/a_star_strategy.cc.o"

# External object files for target AStar
AStar_EXTERNAL_OBJECTS =

strategy/libAStar.a: strategy/CMakeFiles/AStar.dir/a_star_strategy.cc.o
strategy/libAStar.a: strategy/CMakeFiles/AStar.dir/build.make
strategy/libAStar.a: strategy/CMakeFiles/AStar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libAStar.a"
	cd "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build/strategy" && $(CMAKE_COMMAND) -P CMakeFiles/AStar.dir/cmake_clean_target.cmake
	cd "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build/strategy" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AStar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
strategy/CMakeFiles/AStar.dir/build: strategy/libAStar.a

.PHONY : strategy/CMakeFiles/AStar.dir/build

strategy/CMakeFiles/AStar.dir/clean:
	cd "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build/strategy" && $(CMAKE_COMMAND) -P CMakeFiles/AStar.dir/cmake_clean.cmake
.PHONY : strategy/CMakeFiles/AStar.dir/clean

strategy/CMakeFiles/AStar.dir/depend:
	cd "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2" "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/strategy" "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build" "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build/strategy" "/home/chengshuo1216/code/protocBuf/apollo_routing _camke_2/build/strategy/CMakeFiles/AStar.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : strategy/CMakeFiles/AStar.dir/depend

