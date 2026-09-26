# Netflix Recommendation System

A C++ group project inspired by Netflix movie recommendations.

## Current development stage

Member 1 has implemented the program title and genre menu in `main.cpp`.
The current program displays the menu and exits. User input, validation,
recommendations, and the interactive loop will be added in later stages.

## Windows / VS Code setup

Each team member must install their own tools; cloning this repository does
not install a compiler.

1. Install the Microsoft C/C++ extension in VS Code.
2. Install MSYS2 in its default location, `C:\msys64`.
3. In the MSYS2 terminal, update packages with `pacman -Syu`.
   Reopen the terminal if instructed, then run the update again.
4. Install the compiler and debugger:

   ```sh
   pacman -S --needed mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-gdb
   ```

5. Open this repository folder in VS Code. If necessary, run
   `Developer: Reload Window` from the Command Palette.
6. Press **Ctrl+Shift+B** to build, or **F5** to build and debug using
   **Run Netflix project**.

Official setup guide: https://code.visualstudio.com/docs/cpp/config-mingw

The shared `.vscode` settings expect the compiler and debugger in
`C:\msys64\ucrt64\bin`. If you installed elsewhere, adjust the paths in
those settings for your computer. The terminal PATH setting applies to new
VS Code terminals in this project.

The build task compiles all `.cpp` files in the project folder into
`netflix.exe`. Keep only one `main()` function across those files.
Generated executables are excluded from Git.

## Responsibilities

- Member 1: `main.cpp` - menu, input validation, and program entry point.
- Member 2: `recommendations.cpp` - movie data and recommendation logic.
- Member 3: `program.cpp` - interactive loop and integration.

Members 2 and 3 can create their respective files when they begin work.
Coordinate function signatures before integrating the complete program.

## Validation

The Stage 1 menu was compiled with GCC 16.2.0 using C++11, `-Wall`, and
`-Wextra`, and successfully run on Windows. It displayed all four menu
options and exited normally.
