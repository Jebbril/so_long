# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /private/var/folders/zz/zyxvpxvq6csfxvn_n000cg_h0033tm/T/AppTranslocation/DE482A46-8DBA-4310-BAAC-5A2CED738354/d/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /private/var/folders/zz/zyxvpxvq6csfxvn_n000cg_h0033tm/T/AppTranslocation/DE482A46-8DBA-4310-BAAC-5A2CED738354/d/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/orakib/Desktop/so_long/mlx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/orakib/Desktop/so_long

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/private/var/folders/zz/zyxvpxvq6csfxvn_n000cg_h0033tm/T/AppTranslocation/DE482A46-8DBA-4310-BAAC-5A2CED738354/d/CMake.app/Contents/bin/cmake-gui -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/private/var/folders/zz/zyxvpxvq6csfxvn_n000cg_h0033tm/T/AppTranslocation/DE482A46-8DBA-4310-BAAC-5A2CED738354/d/CMake.app/Contents/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components
.PHONY : list_install_components/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/private/var/folders/zz/zyxvpxvq6csfxvn_n000cg_h0033tm/T/AppTranslocation/DE482A46-8DBA-4310-BAAC-5A2CED738354/d/CMake.app/Contents/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/private/var/folders/zz/zyxvpxvq6csfxvn_n000cg_h0033tm/T/AppTranslocation/DE482A46-8DBA-4310-BAAC-5A2CED738354/d/CMake.app/Contents/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/private/var/folders/zz/zyxvpxvq6csfxvn_n000cg_h0033tm/T/AppTranslocation/DE482A46-8DBA-4310-BAAC-5A2CED738354/d/CMake.app/Contents/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/private/var/folders/zz/zyxvpxvq6csfxvn_n000cg_h0033tm/T/AppTranslocation/DE482A46-8DBA-4310-BAAC-5A2CED738354/d/CMake.app/Contents/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/private/var/folders/zz/zyxvpxvq6csfxvn_n000cg_h0033tm/T/AppTranslocation/DE482A46-8DBA-4310-BAAC-5A2CED738354/d/CMake.app/Contents/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/private/var/folders/zz/zyxvpxvq6csfxvn_n000cg_h0033tm/T/AppTranslocation/DE482A46-8DBA-4310-BAAC-5A2CED738354/d/CMake.app/Contents/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/orakib/Desktop/so_long/CMakeFiles /Users/orakib/Desktop/so_long//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/orakib/Desktop/so_long/CMakeFiles 0
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
# Target rules for targets named mlx42

# Build rule for target.
mlx42: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 mlx42
.PHONY : mlx42

# fast build rule for target.
mlx42/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/build
.PHONY : mlx42/fast

#=============================================================================
# Target rules for targets named uninstall

# Build rule for target.
uninstall: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 uninstall
.PHONY : uninstall

# fast build rule for target.
uninstall/fast:
	$(MAKE) $(MAKESILENT) -f _deps/glfw-build/CMakeFiles/uninstall.dir/build.make _deps/glfw-build/CMakeFiles/uninstall.dir/build
.PHONY : uninstall/fast

#=============================================================================
# Target rules for targets named glfw

# Build rule for target.
glfw: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 glfw
.PHONY : glfw

# fast build rule for target.
glfw/fast:
	$(MAKE) $(MAKESILENT) -f _deps/glfw-build/src/CMakeFiles/glfw.dir/build.make _deps/glfw-build/src/CMakeFiles/glfw.dir/build
.PHONY : glfw/fast

lib/glad/glad.o: lib/glad/glad.c.o
.PHONY : lib/glad/glad.o

# target to build an object file
lib/glad/glad.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/lib/glad/glad.c.o
.PHONY : lib/glad/glad.c.o

lib/glad/glad.i: lib/glad/glad.c.i
.PHONY : lib/glad/glad.i

# target to preprocess a source file
lib/glad/glad.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/lib/glad/glad.c.i
.PHONY : lib/glad/glad.c.i

lib/glad/glad.s: lib/glad/glad.c.s
.PHONY : lib/glad/glad.s

# target to generate assembly for a file
lib/glad/glad.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/lib/glad/glad.c.s
.PHONY : lib/glad/glad.c.s

lib/png/lodepng.o: lib/png/lodepng.c.o
.PHONY : lib/png/lodepng.o

# target to build an object file
lib/png/lodepng.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/lib/png/lodepng.c.o
.PHONY : lib/png/lodepng.c.o

lib/png/lodepng.i: lib/png/lodepng.c.i
.PHONY : lib/png/lodepng.i

# target to preprocess a source file
lib/png/lodepng.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/lib/png/lodepng.c.i
.PHONY : lib/png/lodepng.c.i

lib/png/lodepng.s: lib/png/lodepng.c.s
.PHONY : lib/png/lodepng.s

# target to generate assembly for a file
lib/png/lodepng.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/lib/png/lodepng.c.s
.PHONY : lib/png/lodepng.c.s

mlx_frag_shader.o: mlx_frag_shader.c.o
.PHONY : mlx_frag_shader.o

# target to build an object file
mlx_frag_shader.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/mlx_frag_shader.c.o
.PHONY : mlx_frag_shader.c.o

mlx_frag_shader.i: mlx_frag_shader.c.i
.PHONY : mlx_frag_shader.i

# target to preprocess a source file
mlx_frag_shader.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/mlx_frag_shader.c.i
.PHONY : mlx_frag_shader.c.i

mlx_frag_shader.s: mlx_frag_shader.c.s
.PHONY : mlx_frag_shader.s

# target to generate assembly for a file
mlx_frag_shader.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/mlx_frag_shader.c.s
.PHONY : mlx_frag_shader.c.s

mlx_vert_shader.o: mlx_vert_shader.c.o
.PHONY : mlx_vert_shader.o

# target to build an object file
mlx_vert_shader.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/mlx_vert_shader.c.o
.PHONY : mlx_vert_shader.c.o

mlx_vert_shader.i: mlx_vert_shader.c.i
.PHONY : mlx_vert_shader.i

# target to preprocess a source file
mlx_vert_shader.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/mlx_vert_shader.c.i
.PHONY : mlx_vert_shader.c.i

mlx_vert_shader.s: mlx_vert_shader.c.s
.PHONY : mlx_vert_shader.s

# target to generate assembly for a file
mlx_vert_shader.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/mlx_vert_shader.c.s
.PHONY : mlx_vert_shader.c.s

src/mlx_cursor.o: src/mlx_cursor.c.o
.PHONY : src/mlx_cursor.o

# target to build an object file
src/mlx_cursor.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_cursor.c.o
.PHONY : src/mlx_cursor.c.o

src/mlx_cursor.i: src/mlx_cursor.c.i
.PHONY : src/mlx_cursor.i

# target to preprocess a source file
src/mlx_cursor.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_cursor.c.i
.PHONY : src/mlx_cursor.c.i

src/mlx_cursor.s: src/mlx_cursor.c.s
.PHONY : src/mlx_cursor.s

# target to generate assembly for a file
src/mlx_cursor.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_cursor.c.s
.PHONY : src/mlx_cursor.c.s

src/mlx_exit.o: src/mlx_exit.c.o
.PHONY : src/mlx_exit.o

# target to build an object file
src/mlx_exit.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_exit.c.o
.PHONY : src/mlx_exit.c.o

src/mlx_exit.i: src/mlx_exit.c.i
.PHONY : src/mlx_exit.i

# target to preprocess a source file
src/mlx_exit.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_exit.c.i
.PHONY : src/mlx_exit.c.i

src/mlx_exit.s: src/mlx_exit.c.s
.PHONY : src/mlx_exit.s

# target to generate assembly for a file
src/mlx_exit.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_exit.c.s
.PHONY : src/mlx_exit.c.s

src/mlx_images.o: src/mlx_images.c.o
.PHONY : src/mlx_images.o

# target to build an object file
src/mlx_images.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_images.c.o
.PHONY : src/mlx_images.c.o

src/mlx_images.i: src/mlx_images.c.i
.PHONY : src/mlx_images.i

# target to preprocess a source file
src/mlx_images.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_images.c.i
.PHONY : src/mlx_images.c.i

src/mlx_images.s: src/mlx_images.c.s
.PHONY : src/mlx_images.s

# target to generate assembly for a file
src/mlx_images.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_images.c.s
.PHONY : src/mlx_images.c.s

src/mlx_init.o: src/mlx_init.c.o
.PHONY : src/mlx_init.o

# target to build an object file
src/mlx_init.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_init.c.o
.PHONY : src/mlx_init.c.o

src/mlx_init.i: src/mlx_init.c.i
.PHONY : src/mlx_init.i

# target to preprocess a source file
src/mlx_init.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_init.c.i
.PHONY : src/mlx_init.c.i

src/mlx_init.s: src/mlx_init.c.s
.PHONY : src/mlx_init.s

# target to generate assembly for a file
src/mlx_init.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_init.c.s
.PHONY : src/mlx_init.c.s

src/mlx_keys.o: src/mlx_keys.c.o
.PHONY : src/mlx_keys.o

# target to build an object file
src/mlx_keys.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_keys.c.o
.PHONY : src/mlx_keys.c.o

src/mlx_keys.i: src/mlx_keys.c.i
.PHONY : src/mlx_keys.i

# target to preprocess a source file
src/mlx_keys.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_keys.c.i
.PHONY : src/mlx_keys.c.i

src/mlx_keys.s: src/mlx_keys.c.s
.PHONY : src/mlx_keys.s

# target to generate assembly for a file
src/mlx_keys.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_keys.c.s
.PHONY : src/mlx_keys.c.s

src/mlx_loop.o: src/mlx_loop.c.o
.PHONY : src/mlx_loop.o

# target to build an object file
src/mlx_loop.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_loop.c.o
.PHONY : src/mlx_loop.c.o

src/mlx_loop.i: src/mlx_loop.c.i
.PHONY : src/mlx_loop.i

# target to preprocess a source file
src/mlx_loop.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_loop.c.i
.PHONY : src/mlx_loop.c.i

src/mlx_loop.s: src/mlx_loop.c.s
.PHONY : src/mlx_loop.s

# target to generate assembly for a file
src/mlx_loop.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_loop.c.s
.PHONY : src/mlx_loop.c.s

src/mlx_monitor.o: src/mlx_monitor.c.o
.PHONY : src/mlx_monitor.o

# target to build an object file
src/mlx_monitor.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_monitor.c.o
.PHONY : src/mlx_monitor.c.o

src/mlx_monitor.i: src/mlx_monitor.c.i
.PHONY : src/mlx_monitor.i

# target to preprocess a source file
src/mlx_monitor.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_monitor.c.i
.PHONY : src/mlx_monitor.c.i

src/mlx_monitor.s: src/mlx_monitor.c.s
.PHONY : src/mlx_monitor.s

# target to generate assembly for a file
src/mlx_monitor.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_monitor.c.s
.PHONY : src/mlx_monitor.c.s

src/mlx_mouse.o: src/mlx_mouse.c.o
.PHONY : src/mlx_mouse.o

# target to build an object file
src/mlx_mouse.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_mouse.c.o
.PHONY : src/mlx_mouse.c.o

src/mlx_mouse.i: src/mlx_mouse.c.i
.PHONY : src/mlx_mouse.i

# target to preprocess a source file
src/mlx_mouse.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_mouse.c.i
.PHONY : src/mlx_mouse.c.i

src/mlx_mouse.s: src/mlx_mouse.c.s
.PHONY : src/mlx_mouse.s

# target to generate assembly for a file
src/mlx_mouse.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_mouse.c.s
.PHONY : src/mlx_mouse.c.s

src/mlx_put_pixel.o: src/mlx_put_pixel.c.o
.PHONY : src/mlx_put_pixel.o

# target to build an object file
src/mlx_put_pixel.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.o
.PHONY : src/mlx_put_pixel.c.o

src/mlx_put_pixel.i: src/mlx_put_pixel.c.i
.PHONY : src/mlx_put_pixel.i

# target to preprocess a source file
src/mlx_put_pixel.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.i
.PHONY : src/mlx_put_pixel.c.i

src/mlx_put_pixel.s: src/mlx_put_pixel.c.s
.PHONY : src/mlx_put_pixel.s

# target to generate assembly for a file
src/mlx_put_pixel.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.s
.PHONY : src/mlx_put_pixel.c.s

src/mlx_window.o: src/mlx_window.c.o
.PHONY : src/mlx_window.o

# target to build an object file
src/mlx_window.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_window.c.o
.PHONY : src/mlx_window.c.o

src/mlx_window.i: src/mlx_window.c.i
.PHONY : src/mlx_window.i

# target to preprocess a source file
src/mlx_window.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_window.c.i
.PHONY : src/mlx_window.c.i

src/mlx_window.s: src/mlx_window.c.s
.PHONY : src/mlx_window.s

# target to generate assembly for a file
src/mlx_window.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/mlx_window.c.s
.PHONY : src/mlx_window.c.s

src/textures/mlx_png.o: src/textures/mlx_png.c.o
.PHONY : src/textures/mlx_png.o

# target to build an object file
src/textures/mlx_png.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/textures/mlx_png.c.o
.PHONY : src/textures/mlx_png.c.o

src/textures/mlx_png.i: src/textures/mlx_png.c.i
.PHONY : src/textures/mlx_png.i

# target to preprocess a source file
src/textures/mlx_png.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/textures/mlx_png.c.i
.PHONY : src/textures/mlx_png.c.i

src/textures/mlx_png.s: src/textures/mlx_png.c.s
.PHONY : src/textures/mlx_png.s

# target to generate assembly for a file
src/textures/mlx_png.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/textures/mlx_png.c.s
.PHONY : src/textures/mlx_png.c.s

src/textures/mlx_texture.o: src/textures/mlx_texture.c.o
.PHONY : src/textures/mlx_texture.o

# target to build an object file
src/textures/mlx_texture.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.o
.PHONY : src/textures/mlx_texture.c.o

src/textures/mlx_texture.i: src/textures/mlx_texture.c.i
.PHONY : src/textures/mlx_texture.i

# target to preprocess a source file
src/textures/mlx_texture.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.i
.PHONY : src/textures/mlx_texture.c.i

src/textures/mlx_texture.s: src/textures/mlx_texture.c.s
.PHONY : src/textures/mlx_texture.s

# target to generate assembly for a file
src/textures/mlx_texture.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.s
.PHONY : src/textures/mlx_texture.c.s

src/textures/mlx_xpm42.o: src/textures/mlx_xpm42.c.o
.PHONY : src/textures/mlx_xpm42.o

# target to build an object file
src/textures/mlx_xpm42.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.o
.PHONY : src/textures/mlx_xpm42.c.o

src/textures/mlx_xpm42.i: src/textures/mlx_xpm42.c.i
.PHONY : src/textures/mlx_xpm42.i

# target to preprocess a source file
src/textures/mlx_xpm42.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.i
.PHONY : src/textures/mlx_xpm42.c.i

src/textures/mlx_xpm42.s: src/textures/mlx_xpm42.c.s
.PHONY : src/textures/mlx_xpm42.s

# target to generate assembly for a file
src/textures/mlx_xpm42.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.s
.PHONY : src/textures/mlx_xpm42.c.s

src/utils/mlx_compare.o: src/utils/mlx_compare.c.o
.PHONY : src/utils/mlx_compare.o

# target to build an object file
src/utils/mlx_compare.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.o
.PHONY : src/utils/mlx_compare.c.o

src/utils/mlx_compare.i: src/utils/mlx_compare.c.i
.PHONY : src/utils/mlx_compare.i

# target to preprocess a source file
src/utils/mlx_compare.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.i
.PHONY : src/utils/mlx_compare.c.i

src/utils/mlx_compare.s: src/utils/mlx_compare.c.s
.PHONY : src/utils/mlx_compare.s

# target to generate assembly for a file
src/utils/mlx_compare.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.s
.PHONY : src/utils/mlx_compare.c.s

src/utils/mlx_error.o: src/utils/mlx_error.c.o
.PHONY : src/utils/mlx_error.o

# target to build an object file
src/utils/mlx_error.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_error.c.o
.PHONY : src/utils/mlx_error.c.o

src/utils/mlx_error.i: src/utils/mlx_error.c.i
.PHONY : src/utils/mlx_error.i

# target to preprocess a source file
src/utils/mlx_error.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_error.c.i
.PHONY : src/utils/mlx_error.c.i

src/utils/mlx_error.s: src/utils/mlx_error.c.s
.PHONY : src/utils/mlx_error.s

# target to generate assembly for a file
src/utils/mlx_error.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_error.c.s
.PHONY : src/utils/mlx_error.c.s

src/utils/mlx_list.o: src/utils/mlx_list.c.o
.PHONY : src/utils/mlx_list.o

# target to build an object file
src/utils/mlx_list.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_list.c.o
.PHONY : src/utils/mlx_list.c.o

src/utils/mlx_list.i: src/utils/mlx_list.c.i
.PHONY : src/utils/mlx_list.i

# target to preprocess a source file
src/utils/mlx_list.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_list.c.i
.PHONY : src/utils/mlx_list.c.i

src/utils/mlx_list.s: src/utils/mlx_list.c.s
.PHONY : src/utils/mlx_list.s

# target to generate assembly for a file
src/utils/mlx_list.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_list.c.s
.PHONY : src/utils/mlx_list.c.s

src/utils/mlx_utils.o: src/utils/mlx_utils.c.o
.PHONY : src/utils/mlx_utils.o

# target to build an object file
src/utils/mlx_utils.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.o
.PHONY : src/utils/mlx_utils.c.o

src/utils/mlx_utils.i: src/utils/mlx_utils.c.i
.PHONY : src/utils/mlx_utils.i

# target to preprocess a source file
src/utils/mlx_utils.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.i
.PHONY : src/utils/mlx_utils.c.i

src/utils/mlx_utils.s: src/utils/mlx_utils.c.s
.PHONY : src/utils/mlx_utils.s

# target to generate assembly for a file
src/utils/mlx_utils.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/mlx42.dir/build.make CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.s
.PHONY : src/utils/mlx_utils.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... uninstall"
	@echo "... glfw"
	@echo "... mlx42"
	@echo "... lib/glad/glad.o"
	@echo "... lib/glad/glad.i"
	@echo "... lib/glad/glad.s"
	@echo "... lib/png/lodepng.o"
	@echo "... lib/png/lodepng.i"
	@echo "... lib/png/lodepng.s"
	@echo "... mlx_frag_shader.o"
	@echo "... mlx_frag_shader.i"
	@echo "... mlx_frag_shader.s"
	@echo "... mlx_vert_shader.o"
	@echo "... mlx_vert_shader.i"
	@echo "... mlx_vert_shader.s"
	@echo "... src/mlx_cursor.o"
	@echo "... src/mlx_cursor.i"
	@echo "... src/mlx_cursor.s"
	@echo "... src/mlx_exit.o"
	@echo "... src/mlx_exit.i"
	@echo "... src/mlx_exit.s"
	@echo "... src/mlx_images.o"
	@echo "... src/mlx_images.i"
	@echo "... src/mlx_images.s"
	@echo "... src/mlx_init.o"
	@echo "... src/mlx_init.i"
	@echo "... src/mlx_init.s"
	@echo "... src/mlx_keys.o"
	@echo "... src/mlx_keys.i"
	@echo "... src/mlx_keys.s"
	@echo "... src/mlx_loop.o"
	@echo "... src/mlx_loop.i"
	@echo "... src/mlx_loop.s"
	@echo "... src/mlx_monitor.o"
	@echo "... src/mlx_monitor.i"
	@echo "... src/mlx_monitor.s"
	@echo "... src/mlx_mouse.o"
	@echo "... src/mlx_mouse.i"
	@echo "... src/mlx_mouse.s"
	@echo "... src/mlx_put_pixel.o"
	@echo "... src/mlx_put_pixel.i"
	@echo "... src/mlx_put_pixel.s"
	@echo "... src/mlx_window.o"
	@echo "... src/mlx_window.i"
	@echo "... src/mlx_window.s"
	@echo "... src/textures/mlx_png.o"
	@echo "... src/textures/mlx_png.i"
	@echo "... src/textures/mlx_png.s"
	@echo "... src/textures/mlx_texture.o"
	@echo "... src/textures/mlx_texture.i"
	@echo "... src/textures/mlx_texture.s"
	@echo "... src/textures/mlx_xpm42.o"
	@echo "... src/textures/mlx_xpm42.i"
	@echo "... src/textures/mlx_xpm42.s"
	@echo "... src/utils/mlx_compare.o"
	@echo "... src/utils/mlx_compare.i"
	@echo "... src/utils/mlx_compare.s"
	@echo "... src/utils/mlx_error.o"
	@echo "... src/utils/mlx_error.i"
	@echo "... src/utils/mlx_error.s"
	@echo "... src/utils/mlx_list.o"
	@echo "... src/utils/mlx_list.i"
	@echo "... src/utils/mlx_list.s"
	@echo "... src/utils/mlx_utils.o"
	@echo "... src/utils/mlx_utils.i"
	@echo "... src/utils/mlx_utils.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

