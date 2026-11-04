# Array-Manipulation
This Problem explores basic array operations sorting and searching algorithms using C. The program handles dynamic updates like inserting and deleting elements, and sorting the array using Bubble Sort, Insertion Sort, and Selection Sort. At the end it searched a value using both Linear and Binary Search.


## Problem Description
The Problem focuses on 3 core distinct aspects. Data is collected through user input and stored in an array.
Arrays store inputs sequentially in memory slots of a device. The array could be both sorted and unsorted,
but that is unknown initially. To sort a one-dimensional array, it is instructed to use three different types
of sorting algorithms, such as Bubble Sort, Insertion Sort, and Selection Sort. Then, need to find out a
number in the array using both linear and binary search and compare.

## Approach & Logic
To solve this problem, we write a program in the C language using different functions and then later call them inside our main function. We make separate functions for swap two elements, reading input, display array elements, insertion, deletion, bubble sort, selection sort, insertion sort,  linear search , and binary searching. In that way, the code stays clean, easy to read and we can call the functions repeatedly as per need without needing to write the whole algorithm.

First, the program takes array size then elements from the user and stores them. Then it updates the array by doing insertion and deletion based on what the user types, this is our ‘Updated Array’.

For sorting, we use three different sorting methods: Bubble Sort, Insertion Sort, and Selection Sort. We copy the updated array into three separate arrays so each sorting method can work on its own copy. This separate array has been implemented just using a simple for loop and assigning all the array elements into the other arrays. After sorting, we print them separately, and all three show the same sorted result in ascending order.

Finally, we search for a number using both Linear Search and Binary Search. For Linear Search, we use the very first updated array. For Binary Search, we use one of the sorted arrays. Both searches also count how many steps or comparisons they take to find the value and then we print everything on the terminal.


## File Structure 📂

* `Labrep-01.c` - The main source code answering the lab problem.
* `README.md` - Documentation and instructions.
* `casetest.txt` - Test Cases for the following Problem

#Course: CSE 206 (Data Structure Lab)
#Institution: Green University of Bangladesh
