# Student Marks Management System

A simple C program to manage student records — add students, store their marks in 3 subjects, and view all records with calculated totals and averages.

## Features

- Add student (roll number, name, marks in 3 subjects)
- View all students with total and average marks
- Menu-driven interface (loops until user exits)

## Concepts Used

- Structures (`struct`) with `typedef`
- Arrays of structures
- Functions and modular file organization (split across multiple `.c`/`.h` files)
- Formatted output using `printf` field-width specifiers

## Project Structure

- student.h -- Struct definition and function declarations
- student.c -- Function implementations (add, view)
- main.c -- Main menu loop

## How to Compile and Run

gcc main.c student.c -o student_management
./student_management

## Sample Output

1        YUVABALAJII     80.00   90.00   85.00   Total: 255.00 | Average: 85.00
2        PRIYA           70.00   60.00   90.00   Total: 220.00 | Average: 73.33

## About

Built as part of my Embedded Systems training at Emertxe Institute, Bangalore -- practicing structures, arrays, and modular C programming.