# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\15010\CLionProjects\CF1481C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\15010\CLionProjects\CF1481C\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\CF1481C.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\CF1481C.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\CF1481C.dir\flags.make

CMakeFiles\CF1481C.dir\main.cpp.obj: CMakeFiles\CF1481C.dir\flags.make
CMakeFiles\CF1481C.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\15010\CLionProjects\CF1481C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF1481C.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CF1481C.dir\main.cpp.obj /FdCMakeFiles\CF1481C.dir\ /FS -c C:\Users\15010\CLionProjects\CF1481C\main.cpp
<<

CMakeFiles\CF1481C.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF1481C.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\CF1481C.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\15010\CLionProjects\CF1481C\main.cpp
<<

CMakeFiles\CF1481C.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF1481C.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CF1481C.dir\main.cpp.s /c C:\Users\15010\CLionProjects\CF1481C\main.cpp
<<

# Object files for target CF1481C
CF1481C_OBJECTS = \
"CMakeFiles\CF1481C.dir\main.cpp.obj"

# External object files for target CF1481C
CF1481C_EXTERNAL_OBJECTS =

CF1481C.exe: CMakeFiles\CF1481C.dir\main.cpp.obj
CF1481C.exe: CMakeFiles\CF1481C.dir\build.make
CF1481C.exe: CMakeFiles\CF1481C.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\15010\CLionProjects\CF1481C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF1481C.exe"
	"D:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\CF1481C.dir --rc=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1.0\VC\bin\link.exe /nologo @CMakeFiles\CF1481C.dir\objects1.rsp @<<
 /out:CF1481C.exe /implib:CF1481C.lib /pdb:C:\Users\15010\CLionProjects\CF1481C\cmake-build-debug\CF1481C.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\CF1481C.dir\build: CF1481C.exe

.PHONY : CMakeFiles\CF1481C.dir\build

CMakeFiles\CF1481C.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CF1481C.dir\cmake_clean.cmake
.PHONY : CMakeFiles\CF1481C.dir\clean

CMakeFiles\CF1481C.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\15010\CLionProjects\CF1481C C:\Users\15010\CLionProjects\CF1481C C:\Users\15010\CLionProjects\CF1481C\cmake-build-debug C:\Users\15010\CLionProjects\CF1481C\cmake-build-debug C:\Users\15010\CLionProjects\CF1481C\cmake-build-debug\CMakeFiles\CF1481C.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\CF1481C.dir\depend
