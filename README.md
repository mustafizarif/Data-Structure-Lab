# Data Structures & Algorithms (DSA)

A structured collection of core **Data Structures, Algorithms, and laboratory assignments** implemented from scratch in **C**.

This repository is created for learning, practicing, and understanding how fundamental data structures and algorithms work internally.

---

## 📚 Contents

The repository currently includes:

* Searching Algorithms
* Linear Data Structures
* Graph & Matrix
* Heap
* Recursion

---

## 💻 Language Used

* **C**

---

## 📁 Repository Structure

```text
Data-Structure-Lab/
│
├── 📁 Binary Tree/
│   ├── README.md
│   ├── binary_search.c
│   ├── linear_search.c
│   └── square_root_binarysearch.c
│
├── 📁 Data Structures/
│   ├── README.md
│   ├── circular_queue_.c
│   ├── dynamic_array.c
│   ├── linked_list.c
│   ├── queue_.c
│   └── stack_.c
│
├── 📁 Graph/
│   ├── README.md
│   ├── adjacency_matrix.c
│   └── matrix.c
│
├── 📁 Heap/
│   ├── README.md
│   ├── max_heap.c
│   └── min_heap.c
│
├── 📁 Recursion/
│   ├── README.md
│   ├── fibonacci.c
│   └── sum_Recursion.c
│
└── 📄 README.md
```

---

# 🔎 Searching Algorithms

The `Binary Tree` folder currently contains basic searching-related programs.

### Files

* `binary_search.c` - Searches for an element in a sorted array using Binary Search.
* `linear_search.c` - Searches for an element sequentially using Linear Search.
* `square_root_binarysearch.c` - Calculates the square root of a number using Binary Search.

### Key Notes

* **Linear Search:** Checks elements one by one.
* **Binary Search:** Repeatedly divides a sorted search space into two halves.
* Binary Search requires a **sorted array**.
* Linear Search works on both sorted and unsorted arrays.

### Time Complexity

| Algorithm     | Time Complexity |
| ------------- | --------------- |
| Linear Search | `O(n)`          |
| Binary Search | `O(log n)`      |

---

# 🧱 Linear Data Structures

The `Data Structures` folder contains implementations of fundamental linear data structures.

### Files

* `dynamic_array.c` - Demonstrates dynamic array implementation.
* `linked_list.c` - Implements a singly linked list.
* `stack_.c` - Implements a Stack.
* `queue_.c` - Implements a Queue.
* `circular_queue_.c` - Implements a Circular Queue.

### Key Notes

#### Dynamic Array

* Uses dynamically allocated memory.
* Can grow during program execution.
* Commonly implemented using `malloc()` and `realloc()`.

#### Linked List

* Consists of nodes connected using pointers.
* Each node contains data and a pointer to the next node.
* Does not require contiguous memory.

#### Stack

A Stack follows the:

**LIFO — Last In, First Out**

Main operations:

* Push
* Pop
* Peek

#### Queue

A Queue follows the:

**FIFO — First In, First Out**

Main operations:

* Enqueue
* Dequeue
* Front

#### Circular Queue

* The last position is connected back to the first position.
* Efficiently utilizes available space in an array.
* Uses circular movement of `front` and `rear`.

---

# 🌐 Graph & Matrix

The `Graph` folder contains basic graph representation and matrix-related programs.

### Files

* `adjacency_matrix.c` - Represents a graph using an Adjacency Matrix.
* `matrix.c` - Demonstrates matrix operations using a 2D array.

### Key Notes

#### Adjacency Matrix

An adjacency matrix represents connections between vertices using a 2D array.

For an unweighted graph:

* `1` → Edge exists
* `0` → No edge exists

For an undirected graph, the adjacency matrix is generally **symmetric**.


# ⛰️ Heap

The `Heap` folder contains implementations of **Max Heap** and **Min Heap** using arrays.

### Files

* `max_heap.c` - Implements a Max Heap with insertion, deletion, and display operations.
* `min_heap.c` - Implements a Min Heap with insertion, deletion, and display operations.

### Key Notes

#### Max Heap

In a Max Heap:

> Parent ≥ Children

The largest element is always at the root.

#### Min Heap

In a Min Heap:

> Parent ≤ Children

The smallest element is always at the root.


# 🔁 Recursion

The `Recursion` folder contains basic recursive programs.

### Files

* `fibonacci.c` - Generates Fibonacci numbers using recursion.
* `sum_Recursion.c` - Calculates the sum of numbers using recursion.

### Key Notes

**Recursion** is a technique where a function calls itself to solve a smaller version of the same problem.

Every recursive solution generally contains:

1. **Base Case** — Stops the recursion.
2. **Recursive Case** — Calls the function again with a smaller or simpler input.

### Fibonacci Sequence

```text
0, 1, 1, 2, 3, 5, 8, 13, ...
```

The next number is calculated from the previous two numbers.

### Example of Recursive Sum

```text
1 + 2 + 3 + 4 + 5 = 15
```

The problem can be broken down into smaller recursive calls until the base case is reached.

---

# 📝 Key Learning Notes

Through this repository, the following fundamental DSA concepts are practiced:

* Arrays
* Dynamic Memory Allocation
* Pointers
* Structures
* Linked Lists
* Stacks
* Queues
* Circular Queues
* Searching
* Binary Search
* Graph Representation
* Adjacency Matrix
* Matrices
* Heaps
* Max Heap
* Min Heap
* Recursion
* Time Complexity
* Algorithmic Thinking

---

# 🎯 Purpose

The main purposes of this repository are:

* Improving **problem-solving and logical thinking**.
* Understanding how data structures work internally.
* Practicing algorithms using C.
* Strengthening C programming fundamentals.


---

# 📌 Notes

* All programs are written in **C**.
* The programs are created primarily for **educational and laboratory practice**.
* Code may be improved or optimized as my understanding of DSA develops.
* More data structures and algorithms will be added to the repository in the future.

---

# 👨‍💻 Author

**MD. MUSTAFIJUR RAHMAN ARIF**

* **Department:** Computer Science and Engineering
* **Student ID:** 2024331554

---

⭐ **This repository is continuously being updated as I learn more about Data Structures & Algorithms.**

