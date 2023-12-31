# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/daniel/Code/C_C++/pong_clone

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/daniel/Code/C_C++/pong_clone

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/opt/local/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/opt/local/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/daniel/Code/C_C++/pong_clone/CMakeFiles /Users/daniel/Code/C_C++/pong_clone//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/daniel/Code/C_C++/pong_clone/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named pong_test

# Build rule for target.
pong_test: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 pong_test
.PHONY : pong_test

# fast build rule for target.
pong_test/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/build
.PHONY : pong_test/fast

src/Ball.o: src/Ball.cpp.o
.PHONY : src/Ball.o

# target to build an object file
src/Ball.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Ball.cpp.o
.PHONY : src/Ball.cpp.o

src/Ball.i: src/Ball.cpp.i
.PHONY : src/Ball.i

# target to preprocess a source file
src/Ball.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Ball.cpp.i
.PHONY : src/Ball.cpp.i

src/Ball.s: src/Ball.cpp.s
.PHONY : src/Ball.s

# target to generate assembly for a file
src/Ball.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Ball.cpp.s
.PHONY : src/Ball.cpp.s

src/Game.o: src/Game.cpp.o
.PHONY : src/Game.o

# target to build an object file
src/Game.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Game.cpp.o
.PHONY : src/Game.cpp.o

src/Game.i: src/Game.cpp.i
.PHONY : src/Game.i

# target to preprocess a source file
src/Game.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Game.cpp.i
.PHONY : src/Game.cpp.i

src/Game.s: src/Game.cpp.s
.PHONY : src/Game.s

# target to generate assembly for a file
src/Game.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Game.cpp.s
.PHONY : src/Game.cpp.s

src/Moving_Object.o: src/Moving_Object.cpp.o
.PHONY : src/Moving_Object.o

# target to build an object file
src/Moving_Object.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Moving_Object.cpp.o
.PHONY : src/Moving_Object.cpp.o

src/Moving_Object.i: src/Moving_Object.cpp.i
.PHONY : src/Moving_Object.i

# target to preprocess a source file
src/Moving_Object.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Moving_Object.cpp.i
.PHONY : src/Moving_Object.cpp.i

src/Moving_Object.s: src/Moving_Object.cpp.s
.PHONY : src/Moving_Object.s

# target to generate assembly for a file
src/Moving_Object.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Moving_Object.cpp.s
.PHONY : src/Moving_Object.cpp.s

src/Paddle.o: src/Paddle.cpp.o
.PHONY : src/Paddle.o

# target to build an object file
src/Paddle.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Paddle.cpp.o
.PHONY : src/Paddle.cpp.o

src/Paddle.i: src/Paddle.cpp.i
.PHONY : src/Paddle.i

# target to preprocess a source file
src/Paddle.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Paddle.cpp.i
.PHONY : src/Paddle.cpp.i

src/Paddle.s: src/Paddle.cpp.s
.PHONY : src/Paddle.s

# target to generate assembly for a file
src/Paddle.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/Paddle.cpp.s
.PHONY : src/Paddle.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/pong_test.dir/build.make CMakeFiles/pong_test.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... pong_test"
	@echo "... src/Ball.o"
	@echo "... src/Ball.i"
	@echo "... src/Ball.s"
	@echo "... src/Game.o"
	@echo "... src/Game.i"
	@echo "... src/Game.s"
	@echo "... src/Moving_Object.o"
	@echo "... src/Moving_Object.i"
	@echo "... src/Moving_Object.s"
	@echo "... src/Paddle.o"
	@echo "... src/Paddle.i"
	@echo "... src/Paddle.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

