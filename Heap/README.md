# Heap

## Overview

Basic Heap implementations in C using an array-based representation.

## Files

* `max_heap.c` - Implements a Max Heap with insertion, deletion, and display operations
* `min_heap.c` - Implements a Min Heap with insertion, deletion, and display operations

## Key Concepts

* **Heap:** A complete binary tree that follows the heap property
* **Max Heap:** The parent node is greater than or equal to its children
* **Min Heap:** The parent node is less than or equal to its children
* **Insertion:** Adds a new element while maintaining the heap property
* **Deletion:** Removes the root element and restores the heap property
* **Array Representation:** Stores the complete binary tree using an array

## Max Heap

In a Max Heap, the largest element is always at the root.

```text
             50
           /    \
         30      40
        /  \
      10    20
```

## Min Heap

In a Min Heap, the smallest element is always at the root.

```text
             10
           /    \
         20      15
        /  \
      30    40
```

## Important Formulas

For a node at index `i`:

* **Parent:** `(i - 1) / 2`
* **Left Child:** `2 * i + 1`
* **Right Child:** `2 * i + 2`

## Language

* C

