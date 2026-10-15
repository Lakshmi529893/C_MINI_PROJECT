# Student Database Management System in C

## 1. About the Project

The **Student Database Management System** is a menu-driven application developed using the C programming language to manage student information efficiently. It provides a simple and organized way to store, retrieve, update, delete, and sort student records.

The project is implemented using a modular programming approach, where different operations are developed in separate source files. A singly linked list is used to maintain student records dynamically, while file handling is used to store information for future access.

This project demonstrates the practical implementation of fundamental C programming concepts, including structures, pointers, dynamic memory allocation, linked lists, functions, and file operations.

## 2. Objectives

The main objectives of this project are:

- To develop an efficient student record management application.
- To perform CRUD operations (Create, Read, Update, and Delete) on student records.
- To understand and implement singly linked lists.
- To use dynamic memory allocation for managing records.
- To organize a C program into multiple source files.
- To implement sorting based on student names and percentages.
- To save student information in a file for future use.
- To improve problem-solving and modular programming skills.

## 3. Features

### Add Student
Allows the user to add a new student record by entering the student's roll number, name, and percentage. Student records are maintained using dynamically allocated linked-list nodes.

### Delete Student
Allows the user to delete an existing student record by providing the roll number. The corresponding node is removed from the linked list and its allocated memory is released.

### Display Students
Displays the available student records, including roll number, name, and percentage, in a readable format.

### Modify Student
Allows the user to update the details of an existing student record.

### Sort Students
Provides options to sort student records based on:
- Student name in alphabetical order.
- Student percentage in ascending or descending order, depending on the implemented logic.

### Save Student Records
Stores student information in a file using file-handling operations, helping preserve records beyond the current program execution.

### Dynamic Memory Management
Uses dynamic memory allocation to create student records at runtime and free memory when records are deleted.

## 4. Technologies Used

- **Programming Language:** C
- **Compiler:** GCC (GNU Compiler Collection)
- **Operating System:** Linux
- **Data Structure:** Singly Linked List
- **Memory Management:** Dynamic Memory Allocation
- **File Handling:** Standard C file operations
- **Development Environment:** Linux Terminal

## 5. Project Structure

```text
miniproject/
├── header.h
├── mainfile.c
├── student_add.c
├── student_del.c
├── student_print.c
├── student_modify.c
├── student_sort.c
├── student_save1.c
└── README.md
```

### Description of Files

- `header.h` – Contains the structure definitions, function declarations, and shared declarations required by the modules.
- `mainfile.c` – Contains the main function and menu-driven program flow.
- `student_add.c` – Implements the functionality for adding student records.
- `student_del.c` – Implements the functionality for deleting student records.
- `student_print.c` – Displays student information.
- `student_modify.c` – Updates existing student details.
- `student_sort.c` – Sorts student records based on the selected criteria.
- `student_save1.c` – Implements saving student records using file operations.
- `README.md` – Provides project documentation, features, and instructions.

*Note: The file descriptions should be adjusted if any module contains additional functionality.*

## 6. Working Principle

The application follows a menu-driven approach that allows users to select the required operation.

1. The program starts and displays the available menu options.
2. The user selects an operation.
3. The program executes the corresponding function.
4. Student records are managed using a singly linked list.
5. The user can add, delete, display, modify, or sort records.
6. Records can be saved to a file for future use.
7. The program continues until the user chooses to exit.

## 7. Data Structure Used

### Singly Linked List

A singly linked list is used to store student records dynamically. Each node contains student information and a pointer to the next node.

A typical student node contains:

- **Roll Number:** Unique identifier for a student.
- **Name:** Student's name.
- **Percentage:** Student's academic percentage.
- **Next Pointer:** Address of the next node.

The linked list makes it possible to add and remove records dynamically without requiring a fixed-size array.

## 8. Compilation

Open the Linux terminal and navigate to the project directory.

```bash
cd /home/v25he11g8/miniproject
```

Compile the source files using GCC:

```bash
gcc mainfile.c student_add.c student_del.c student_print.c student_modify.c student_sort.c student_save1.c -o student
```

If compilation completes successfully, an executable file named `student` will be created.

**Note:** Do not pass `header.h` as a separate compilation input when it is included by the source files.

## 9. Execution

Run the application using:

```bash
./student
```

The menu will appear in the terminal, allowing the user to select the required operation.

## 10. Sample Menu

The menu may look similar to the following, depending on the implementation:

```text
===== STUDENT DATABASE MANAGEMENT SYSTEM =====

A. Add Student
D. Delete Student
S. Show Students
M. Modify Student
V. Save Records
T. Sort Students
E. Exit

Enter your choice:
```

## 11. Concepts Implemented

This project demonstrates the following C programming concepts:

- Structures and user-defined data types.
- Pointers and pointer manipulation.
- Singly linked lists.
- Dynamic memory allocation using `malloc()`.
- Memory deallocation using `free()`.
- Functions and modular programming.
- File operations using functions such as `fopen()`, `fwrite()`, `fread()`, and `fclose()`, where applicable.
- Searching and updating records.
- Sorting linked-list data.
- Compilation and execution using GCC in Linux.

## 12. Advantages

- Provides a simple interface for managing student information.
- Supports multiple student records without a fixed-size array.
- Separates operations into modules for better code organization.
- Demonstrates practical use of data structures and pointers.
- Supports saving student information for future use.
- Makes student record operations easier to maintain and understand.

## 13. Limitations

- The application is designed as a command-line program.
- It does not provide a graphical user interface.
- It does not include a database server for centralized storage.
- Data persistence depends on the implemented file-saving and file-loading functionality.
- Advanced features such as user authentication and report generation may require further development.

## 14. Future Enhancements

The project can be extended with the following features:

- Search for students by roll number or name.
- Automatically load saved records when the application starts.
- Improve input validation and error handling.
- Prevent duplicate roll numbers.
- Add a graphical user interface.
- Integrate a database such as SQLite or MySQL.
- Generate student performance reports.
- Add password-based access control.
- Improve file management and data recovery.

## 15. Learning Outcomes

Through this project, practical knowledge is gained in:

- Designing menu-driven applications in C.
- Implementing linked lists and manipulating nodes.
- Managing memory dynamically.
- Developing modular programs using multiple source files.
- Performing file operations to store and retrieve records.
- Debugging and compiling programs using GCC.
- Working with Linux commands and the terminal.
- Understanding how data structures can be applied to real-world record management problems.

## 16. Conclusion

The Student Database Management System is a practical C programming project that demonstrates how fundamental programming concepts and data structures can be combined to build a useful application. By implementing student record operations using a singly linked list, dynamic memory allocation, modular programming, and file handling, the project provides a strong foundation for understanding data management in C.

The project also offers opportunities for future improvements, including better validation, automatic data loading, database integration, and enhanced user interaction.

## 17. Author

**Lakshmi Gonugunta**

C Programming Mini Project
