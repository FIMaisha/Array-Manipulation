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


## Sample Test Cases

Here is how the program handles the expected inputs.
Case#1Input:
7
42 15 33 8 27 19 50
3 24
33
42
Case#1Output:
Updated Array: 42 15 24 8 27 19 50
Bubble Sort: 8 15 19 24 27 42 50
Insertion Sort: 8 15 19 24 27 42 50
Selection Sort: 8 15 19 24 27 42 50
Linear Search: Found at Index 0 (Comparisons: 1)
Binary Search: Found at Index 5 (Comparisons: 2)

Case#2Input:
6
30 25 20 15 10 5
2 12
25
18
Case#2Output:
Updated Array: 30 12 20 15 10 5
Bubble Sort: 5 10 12 15 20 30
Insertion Sort: 5 10 12 15 20 30
Selection Sort: 5 10 12 15 20 30
Linear Search: Not Found (Comparisons: 6)
Binary Search: Not Found (Comparisons: 3)


## File Structure 📂

* `solution.py` - The main source code answering the lab problem.
* `README.md` - Documentation and instructions.

#Course: CSE 206 (Data Structure Lab)
#Institution: Green University of Bangladesh
