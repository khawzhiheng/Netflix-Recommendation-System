# Member 1 integration test results

Verified on 28 September 2026 with GCC 16.2.0 on Windows.
The VS Code build task compiled main.cpp, program.cpp, and recommendations.cpp
with C++11, -Wall, -Wextra, and debug symbols. Compilation produced no errors or warnings.

Each case checked normal process exit, the exact recommended titles, the number
of validation errors, the recommendation count, and the closing message.

| Test | Result |
| --- | --- |
| Action | Pass |
| Comedy | Pass |
| Horror | Pass |
| All genres and exit | Pass |
| Immediate exit | Pass |
| Out of range numbers | Pass |
| Letters then recovery | Pass |
| Blank and whitespace input | Pass |
| Decimals | Pass |
| Trailing characters and extra tokens | Pass |
| Integer overflow | Pass |
| Surrounding whitespace | Pass |
| Repeated recommendation | Pass |
| EOF at start | Pass |
| EOF after selection without newline | Pass |
| Invalid input then EOF | Pass |

All 16 cases passed. EOF cases use closed standard input.

## Manual demonstration

Run the project and enter 1, abc, 2, 3, then 4. Expect three recommendations,
one invalid-input message, and a final recommendation count of 3.
