# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /opt/Clion/clion-2021.1.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/Clion/clion-2021.1.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alvaro/CLionProjects/smart

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alvaro/CLionProjects/smart/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Matriz_Practica1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Matriz_Practica1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Matriz_Practica1.dir/flags.make

CMakeFiles/Matriz_Practica1.dir/main.cpp.o: CMakeFiles/Matriz_Practica1.dir/flags.make
CMakeFiles/Matriz_Practica1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alvaro/CLionProjects/smart/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Matriz_Practica1.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Matriz_Practica1.dir/main.cpp.o -c /home/alvaro/CLionProjects/smart/main.cpp

CMakeFiles/Matriz_Practica1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Matriz_Practica1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alvaro/CLionProjects/smart/main.cpp > CMakeFiles/Matriz_Practica1.dir/main.cpp.i

CMakeFiles/Matriz_Practica1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Matriz_Practica1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alvaro/CLionProjects/smart/main.cpp -o CMakeFiles/Matriz_Practica1.dir/main.cpp.s

CMakeFiles/Matriz_Practica1.dir/smart.cpp.o: CMakeFiles/Matriz_Practica1.dir/flags.make
CMakeFiles/Matriz_Practica1.dir/smart.cpp.o: ../smart.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alvaro/CLionProjects/smart/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Matriz_Practica1.dir/smart.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Matriz_Practica1.dir/smart.cpp.o -c /home/alvaro/CLionProjects/smart/smart.cpp

CMakeFiles/Matriz_Practica1.dir/smart.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Matriz_Practica1.dir/smart.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alvaro/CLionProjects/smart/smart.cpp > CMakeFiles/Matriz_Practica1.dir/smart.cpp.i

CMakeFiles/Matriz_Practica1.dir/smart.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Matriz_Practica1.dir/smart.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alvaro/CLionProjects/smart/smart.cpp -o CMakeFiles/Matriz_Practica1.dir/smart.cpp.s

CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.o: CMakeFiles/Matriz_Practica1.dir/flags.make
CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.o: ../smart_ut.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alvaro/CLionProjects/smart/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.o -c /home/alvaro/CLionProjects/smart/smart_ut.cpp

CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alvaro/CLionProjects/smart/smart_ut.cpp > CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.i

CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alvaro/CLionProjects/smart/smart_ut.cpp -o CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.s

# Object files for target Matriz_Practica1
Matriz_Practica1_OBJECTS = \
"CMakeFiles/Matriz_Practica1.dir/main.cpp.o" \
"CMakeFiles/Matriz_Practica1.dir/smart.cpp.o" \
"CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.o"

# External object files for target Matriz_Practica1
Matriz_Practica1_EXTERNAL_OBJECTS =

Matriz_Practica1: CMakeFiles/Matriz_Practica1.dir/main.cpp.o
Matriz_Practica1: CMakeFiles/Matriz_Practica1.dir/smart.cpp.o
Matriz_Practica1: CMakeFiles/Matriz_Practica1.dir/smart_ut.cpp.o
Matriz_Practica1: CMakeFiles/Matriz_Practica1.dir/build.make
Matriz_Practica1: CMakeFiles/Matriz_Practica1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alvaro/CLionProjects/smart/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Matriz_Practica1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Matriz_Practica1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Matriz_Practica1.dir/build: Matriz_Practica1
.PHONY : CMakeFiles/Matriz_Practica1.dir/build

CMakeFiles/Matriz_Practica1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Matriz_Practica1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Matriz_Practica1.dir/clean

CMakeFiles/Matriz_Practica1.dir/depend:
	cd /home/alvaro/CLionProjects/smart/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alvaro/CLionProjects/smart /home/alvaro/CLionProjects/smart /home/alvaro/CLionProjects/smart/cmake-build-debug /home/alvaro/CLionProjects/smart/cmake-build-debug /home/alvaro/CLionProjects/smart/cmake-build-debug/CMakeFiles/Matriz_Practica1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Matriz_Practica1.dir/depend

