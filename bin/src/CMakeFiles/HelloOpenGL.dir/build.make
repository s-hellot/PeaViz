# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Simon\Documents\GitHub\Blue-square

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Simon\Documents\GitHub\Blue-square\bin

# Include any dependencies generated for this target.
include src/CMakeFiles/HelloOpenGL.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/HelloOpenGL.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/HelloOpenGL.dir/flags.make

src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj: src/CMakeFiles/HelloOpenGL.dir/flags.make
src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj: src/CMakeFiles/HelloOpenGL.dir/includes_CXX.rsp
src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj: ../src/hello_opengl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Simon\Documents\GitHub\Blue-square\bin\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj"
	cd /d C:\Users\Simon\Documents\GitHub\Blue-square\bin\src && C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HelloOpenGL.dir\hello_opengl.cpp.obj -c C:\Users\Simon\Documents\GitHub\Blue-square\src\hello_opengl.cpp

src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.i"
	cd /d C:\Users\Simon\Documents\GitHub\Blue-square\bin\src && C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Simon\Documents\GitHub\Blue-square\src\hello_opengl.cpp > CMakeFiles\HelloOpenGL.dir\hello_opengl.cpp.i

src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.s"
	cd /d C:\Users\Simon\Documents\GitHub\Blue-square\bin\src && C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Simon\Documents\GitHub\Blue-square\src\hello_opengl.cpp -o CMakeFiles\HelloOpenGL.dir\hello_opengl.cpp.s

src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj.requires:

.PHONY : src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj.requires

src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj.provides: src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj.requires
	$(MAKE) -f src\CMakeFiles\HelloOpenGL.dir\build.make src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj.provides.build
.PHONY : src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj.provides

src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj.provides.build: src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj


# Object files for target HelloOpenGL
HelloOpenGL_OBJECTS = \
"CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj"

# External object files for target HelloOpenGL
HelloOpenGL_EXTERNAL_OBJECTS =

src/HelloOpenGL.exe: src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj
src/HelloOpenGL.exe: src/CMakeFiles/HelloOpenGL.dir/build.make
src/HelloOpenGL.exe: src/libSmallGL.a
src/HelloOpenGL.exe: src/CMakeFiles/HelloOpenGL.dir/linklibs.rsp
src/HelloOpenGL.exe: src/CMakeFiles/HelloOpenGL.dir/objects1.rsp
src/HelloOpenGL.exe: src/CMakeFiles/HelloOpenGL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Simon\Documents\GitHub\Blue-square\bin\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HelloOpenGL.exe"
	cd /d C:\Users\Simon\Documents\GitHub\Blue-square\bin\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HelloOpenGL.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/HelloOpenGL.dir/build: src/HelloOpenGL.exe

.PHONY : src/CMakeFiles/HelloOpenGL.dir/build

src/CMakeFiles/HelloOpenGL.dir/requires: src/CMakeFiles/HelloOpenGL.dir/hello_opengl.cpp.obj.requires

.PHONY : src/CMakeFiles/HelloOpenGL.dir/requires

src/CMakeFiles/HelloOpenGL.dir/clean:
	cd /d C:\Users\Simon\Documents\GitHub\Blue-square\bin\src && $(CMAKE_COMMAND) -P CMakeFiles\HelloOpenGL.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/HelloOpenGL.dir/clean

src/CMakeFiles/HelloOpenGL.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Simon\Documents\GitHub\Blue-square C:\Users\Simon\Documents\GitHub\Blue-square\src C:\Users\Simon\Documents\GitHub\Blue-square\bin C:\Users\Simon\Documents\GitHub\Blue-square\bin\src C:\Users\Simon\Documents\GitHub\Blue-square\bin\src\CMakeFiles\HelloOpenGL.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/HelloOpenGL.dir/depend

