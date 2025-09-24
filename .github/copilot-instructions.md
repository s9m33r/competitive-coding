# Competitive Coding Repository Instructions

## Repository Structure & Organization

This is a competitive programming practice repository with a dual-language approach (C++ and Go). The structure follows a clear pattern:

```
problems/         # LeetCode/competitive problems by category
  dp/medium/      # Dynamic programming problems 
  misc/easy/      # Miscellaneous problems
ds/               # Data structure implementations
algo/             # Algorithm implementations  
```

## Code Organization Patterns

### Problem Structure
Each problem follows this structure:
- `Readme` - Problem analysis with "Brainstroming" section explaining DP approach, sub-problems, and solution strategy
- `cpp/` and/or `go/` - Language-specific implementations
- Problem directories use format: `{number} - {problem name}/` (e.g., `650 - 2 Keys Keyboard/`)

### C++ Conventions
- Use separate header files (`main.h`) with include guards
- Standard includes: `<iostream>`, `<cmath>`
- Always `using namespace std;`
- Function declarations in header, implementations in `main.cpp`
- Cross-directory includes use relative paths: `#include "../../../problems/misc/easy/binary-representation/cpp/main.h"`

### Go Conventions  
- Use Go modules with `replace` directives for local dependencies
- Package naming follows directory structure: `problems.misc.easy/BinaryStringConverter`
- Module replacement pattern: `replace problems.misc.easy/BinaryStringConverter => ../../../problems/misc/easy/binary-representation/go`
- Export functions with PascalCase: `GetBinaryRepresentation()`

## Cross-Language Code Sharing

The repository demonstrates code reuse between C++ and Go:
- Binary representation utility is shared between heap implementations
- C++: `getBinaryRepresentation()` function in `problems/misc/easy/binary-representation/cpp/`
- Go: `GetBinaryRepresentation()` function imported as module `problems.misc.easy/BinaryStringConverter`

## Problem Analysis Pattern

Each problem includes structured analysis in `Readme`:
1. **Problem Link** - Direct LeetCode/platform link
2. **Brainstroming** section with:
   - "How is it DP?" - Justification for approach
   - "Sub-problem" - Breaking down the recursive structure
   - Matrix dimensions and reasoning (e.g., "DP matrix will be n x n")

## Data Structure Patterns

- Use `struct Node` with pointers for tree-like structures
- Heap implementation uses `Node* parent, left, right` structure
- Classes follow RAII pattern with private members and public interface methods

## Development Workflow

- Compile C++: `g++ -o main main.cpp` (produces `a.out` executable)  
- Run Go: `go run main.go` or `go mod tidy` for dependencies
- Both languages implement same algorithms for comparison

## Key Files to Reference

- `ds/heap/cpp/main.cpp` - Example of cross-file includes and class structure
- `problems/dp/medium/650 - 2 Keys Keyboard/Readme` - Problem analysis template
- `ds/heap/go/go.mod` - Go module setup with local replacements
- `problems/misc/easy/binary-representation/` - Shared utility example