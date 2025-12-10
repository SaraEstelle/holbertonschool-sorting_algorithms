<p align="center">
  <img width="400px" height="400px" src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/695px-C_Programming_Language.svg.png" alt="Project logo">
</p>

<h3 align="center">Holbertonschool Sorting Algorithms & Big O</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]() [![GitHub Issues](https://img.shields.io/github/issues/SaraEstelle/holbertonschool-sorting_algorithms.svg)](https://github.com/SaraEstelle/holbertonschool-sorting_algorithms/issues) [![GitHub Pull Requests](https://img.shields.io/github/issues-pr/SaraEstelle/holbertonschool-sorting_algorithms.svg)](https://github.com/SaraEstelle/holbertonschool-sorting_algorithms/pulls) [![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="left">
Implementation of various sorting algorithms in C and analysis of their time complexity (Big O notation).
</p>

## 📝 Table of Contents

- [About](#about)
- [Project Description](#project_description)
- [Data Structures](#data_structures)
- [File Structure](#file_structure)
- [Getting Started](#getting_started)
- [Compilation](#compilation)
- [Running the tests](#tests)
- [Complexity Summary](#complexity)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

## 🧐 About <a name = "about"></a>

This project focuses on the implementation and efficiency analysis of common sorting algorithms. The main objective is to understand how data can be organized and how performance is measured using **Big O notation**. This project demonstrates a solid grasp of:

- Array manipulation
- Doubly linked list manipulation
- Complexity analysis (Best, Average, and Worst cases)
- Recursive vs Iterative implementations

## 📖 Project Description <a name = "project_description"></a>

The `sorting_algorithms` project requires creating multiple C functions that sort data sets (arrays and lists) using different logic, such as Bubble, Insertion, Selection, and Quick sort.

### Project Objectives:

- Implement sorting functions for integers.
- Analyze time complexity for each algorithm.
- Print the data set after each swap for visualization.
- Follow Holbertonschool coding standards (**Betty style**).

## 🌳 Data Structures <a name = "data_structures"></a>

For the list-based sorting tasks, we use the following doubly linked list structure:

```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

📁 File Structure <a name = "file_structure"></a>Plaintextholbertonschool-sorting_algorithms/
├── tests/              # Folder containing main.c test files
│   ├── 0-main.c
│   ├── 1-main.c
│   └── ...
├── sort.h              # Header file containing prototypes and structures
├── print_array.c       # Helper function provided to print arrays
├── print_list.c        # Helper function provided to print lists
├── 0-bubble_sort.c     # Task 0: Bubble sort implementation
├── 0-O                 # Task 0: Time complexities
├── 1-insertion_sort_list.c
├── 1-O
├── 2-selection_sort.c
├── 2-O
├── 3-quick_sort.c
├── 3-O
└── README.md

🏁 Getting Started <a name = "getting_started"></a>Prerequisitesgcc (GNU Compiler Collection)
git - Version control system
InstallingBashgit clone [https://github.com/SaraEstelle/holbertonschool-sorting_algorithms.git](https://github.com/SaraEstelle/holbertonschool-sorting_algorithms.git)
cd holbertonschool-sorting_algorithms

🔨 Compilation <a name = "compilation"></a>Compile the source files with the provided flags to ensure strict Betty compliance:Bashgcc -Wall -Wextra -Werror -pedantic -std=gnu89 print_array.c tests/<MAIN_FILE>.c <TASK_FILE>.c -o sort_test

🔧 Running the tests <a name = "tests"></a>To test an implementation (e.g., Quick sort):Compile:Bashgcc -Wall -Wextra -Werror -pedantic -std=gnu89 print_array.c tests/3-main.c 3-quick_sort.c -o quick
Execute:Bash./quick

🎯 Complexity Summary <a name = "complexity"></a>AlgorithmBest CaseAverage CaseWorst CaseBubble Sort$O(n)$$O(n^2)$$O(n^2)$Insertion Sort$O(n)$$O(n^2)$$O(n^2)$Selection Sort$O(n^2)$$O(n^2)$$O(n^2)$Quick Sort$O(n \log n)$$O(n \log n)$$O(n^2)$⛏️ Built Using <a name = "built_using"></a>C - Logic and core implementationGCC - CompilationGit - Version controlUbuntu 20.04 - OS environment

✍️ Authors <a name = "authors"></a>Sara Rebati - @SaraEstelle
Maxim Dutruel - @maxim880000

🎉 Acknowledgements <a name = "acknowledgement"></a>Holberton School mentors for guidance on algorithmic efficiency.Inspiration from the standard C library sorting functions.Last Updated: December 2025Status: Active

