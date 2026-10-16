# Custom-String-Class-in-C-
A custom C++ String class implementing string manipulation functions, dynamic memory management, and operator overloading without using the built-in std::string class.
# Custom String Class in C++

## Overview

This project implements a custom `String` class in C++ using dynamic memory allocation and operator overloading. It recreates several standard C string operations without relying on the built-in `std::string` class.

The project demonstrates object-oriented programming concepts, dynamic memory management, copy construction, and operator overloading.

## Features

### 1. Constructors and Destructor
- Default constructor
- Parameterized constructor
- Copy constructor
- Destructor for releasing dynamically allocated memory

### 2. Operator Overloading
- Assignment operator (`=`)
- Concatenation operator (`+`)
- Subscript operator (`[]`)
- Comparison operators (`==`, `!=`, `>`, `>=`, `<`, `<=`)
- Stream insertion operator (`<<`)
- Stream extraction operator (`>>`)

### 3. String Manipulation Functions

| Function | Description |
|---|---|
| `strcpy()` | Copies one string into another |
| `strncpy()` | Copies up to a specified number of characters |
| `strcmp()` | Checks whether two strings are equal |
| `strncmp()` | Compares the first `n` characters |
| `strcat()` | Appends one string to another |
| `strncat()` | Appends up to `n` characters |
| `strlen()` | Returns the string length |
| `strrev()` | Reverses a string |
| `strupr()` | Converts lowercase letters to uppercase |
| `strlwr()` | Converts uppercase letters to lowercase |
| `strchr()` | Finds the first occurrence of a character |
| `strrchr()` | Finds the last occurrence of a character |
| `strstr()` | Finds the first occurrence of a substring |

## Technologies Used

- **Language:** C++
- **Concepts:** Classes, constructors, destructors, dynamic memory allocation, pointers, friend functions, and operator overloading
- **Memory management:** `new[]` and `delete[]`

## Project Structure

```text
Custom-String-Class/
├── header.h       # String class declaration
├── header.cpp     # Member functions and string operations
├── main.cpp       # Main function and test cases
└── README.md      # Project documentation
```

*Note: Rename or adjust the source filenames in this structure to match the actual files in your repository.*

## How to Compile and Run

Compile the source files using a C++ compiler such as GCC:

```bash
g++ main.cpp header.cpp -o string_demo
```

Run the executable on Linux:

```bash
./string_demo
```

If your implementation is stored in a single `.cpp` file, compile that file instead.

## Concepts Demonstrated

- Implementing a custom string class
- Managing dynamically allocated character arrays
- Performing deep copies of string objects
- Overloading operators for intuitive string operations
- Implementing common string manipulation algorithms
- Using pointers and null-terminated character arrays

## Learning Objective

The goal of this project is to understand how string operations work internally and how C++ features can be used to build a custom string-handling class.

## Future Improvements

- Add bounds checking to the subscript operator.
- Improve input handling and memory safety.
- Implement standard lexicographical comparison behavior.
- Add support for self-assignment and aliasing in all string functions.
- Add automated test cases for edge cases and empty strings.

## Author

**Jeyaprakash**

