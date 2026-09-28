# Netflix Recommendation System

A C++ group project inspired by Netflix movie recommendations.

## Current development stage

The three members' modules are integrated. The program accepts a genre,
shows a sample recommendation, and returns to the menu until the user exits.
Member 1's input validation rejects invalid lines and handles closed input safely.

Menu options: 1 = Action, 2 = Comedy, 3 = Horror, 4 = Exit.
The program uses fixed sample movies, not a live Netflix catalogue or AI model.

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
6. Press **Ctrl+Shift+B** to build. To build and run interactively, open
   **Terminal > Run Task > Run Netflix program**. Enter your choices in the terminal.
   The separate **Run Netflix project** launch configuration uses GDB for debugging.

Official setup guide: https://code.visualstudio.com/docs/cpp/config-mingw

The shared `.vscode` settings expect the compiler and debugger in
`C:\msys64\ucrt64\bin`. If you installed elsewhere, adjust the paths in
those settings for your computer. The terminal PATH setting applies to new
VS Code terminals in this project.

The build task compiles `main.cpp`, `program.cpp`, and `recommendations.cpp` into
`netflix.exe`. Keep only one `main()` function across those files.
Generated executables are excluded from Git.

## Responsibilities

- Member 1: `main.cpp` - menu, input validation, and program entry point.
- Member 2: `recommendations.cpp` - movie data and recommendation logic.
- Member 3: `program.cpp` - interactive loop and integration.

The main entry point calls runProgram(), which uses readGenre() and
showRecommendation(int). Only main.cpp defines main().

## Validation

The integrated program was compiled with GCC 16.2.0 using C++11, `-Wall`,
`-Wextra`, and debug symbols. All 16 integration cases passed on
28 September 2026. See TEST_RESULTS.md for the recorded checks.

For a quick demonstration, enter 1, abc, 2, 3, then 4. Expect one
validation error, all three genre recommendations, and a final count of 3.
