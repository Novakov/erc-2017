# How to build

## Prerequisites
 * GCC compiler suite, at least 5.4
 * CMake, at least 3.7

## Building
In this instructions `<ROOT>` refers to the some working folder

 1. Clone repository to `<ROOT>/src` (called _source folder_)
 2. Create directory `<ROOT>/build` (called _build folder_)
 3. Go to `<ROOT>/build`
 4. Execute command: `cmake -G <generator> ..\src` (Replace `<generator>` with CMake generator of your choice, for Windows with MinGW use `MinGW Makefiles`). No errors should be reported.
 5. Run build using command specific for selected generator, for `MinGW Makefiles` use `mingw32-make all`