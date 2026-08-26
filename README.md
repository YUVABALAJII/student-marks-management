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
RollNo Name M1 M2 M3 Total Average

1 YUVABALAJII 89.00 89.00 90.00 268.00 89.33
2 KARTHIK 75.00 82.00 78.00 235.00 78.33
3 SNEHA 90.00 88.00 95.00 273.00 91.00
4 RAHUL 65.00 70.00 72.00 207.00 69.00

## About

Built as part of my Embedded Systems training at Emertxe Institute, Bangalore -- practicing structures, arrays, and modular C programming.