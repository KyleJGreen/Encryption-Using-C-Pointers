# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/jupiter/clion-2016.3.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/jupiter/clion-2016.3.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jupiter/ComputerSystemsProjects/Encryption

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jupiter/ComputerSystemsProjects/Encryption/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Encryption.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Encryption.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Encryption.dir/flags.make

CMakeFiles/Encryption.dir/main.c.o: CMakeFiles/Encryption.dir/flags.make
CMakeFiles/Encryption.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jupiter/ComputerSystemsProjects/Encryption/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Encryption.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Encryption.dir/main.c.o   -c /home/jupiter/ComputerSystemsProjects/Encryption/main.c

CMakeFiles/Encryption.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Encryption.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jupiter/ComputerSystemsProjects/Encryption/main.c > CMakeFiles/Encryption.dir/main.c.i

CMakeFiles/Encryption.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Encryption.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jupiter/ComputerSystemsProjects/Encryption/main.c -o CMakeFiles/Encryption.dir/main.c.s

CMakeFiles/Encryption.dir/main.c.o.requires:

.PHONY : CMakeFiles/Encryption.dir/main.c.o.requires

CMakeFiles/Encryption.dir/main.c.o.provides: CMakeFiles/Encryption.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Encryption.dir/build.make CMakeFiles/Encryption.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Encryption.dir/main.c.o.provides

CMakeFiles/Encryption.dir/main.c.o.provides.build: CMakeFiles/Encryption.dir/main.c.o


# Object files for target Encryption
Encryption_OBJECTS = \
"CMakeFiles/Encryption.dir/main.c.o"

# External object files for target Encryption
Encryption_EXTERNAL_OBJECTS =

Encryption: CMakeFiles/Encryption.dir/main.c.o
Encryption: CMakeFiles/Encryption.dir/build.make
Encryption: CMakeFiles/Encryption.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jupiter/ComputerSystemsProjects/Encryption/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Encryption"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Encryption.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Encryption.dir/build: Encryption

.PHONY : CMakeFiles/Encryption.dir/build

CMakeFiles/Encryption.dir/requires: CMakeFiles/Encryption.dir/main.c.o.requires

.PHONY : CMakeFiles/Encryption.dir/requires

CMakeFiles/Encryption.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Encryption.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Encryption.dir/clean

CMakeFiles/Encryption.dir/depend:
	cd /home/jupiter/ComputerSystemsProjects/Encryption/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jupiter/ComputerSystemsProjects/Encryption /home/jupiter/ComputerSystemsProjects/Encryption /home/jupiter/ComputerSystemsProjects/Encryption/cmake-build-debug /home/jupiter/ComputerSystemsProjects/Encryption/cmake-build-debug /home/jupiter/ComputerSystemsProjects/Encryption/cmake-build-debug/CMakeFiles/Encryption.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Encryption.dir/depend

