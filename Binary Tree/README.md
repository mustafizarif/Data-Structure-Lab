# Binary Tree

## Overview

This folder contains basic searching algorithms implemented in C. It includes Linear Search, Binary Search, and Square Root calculation using Binary Search.

## Files

* `binary_search.c` - Searches for an element in a sorted array using Binary Search.
* `linear_search.c` - Searches for an element by checking each element one by one.
* `square_root_binarysearch.c` - Calculates the square root of a number using Binary Search.

## Key Concepts

* **Linear Search:** Searches for an element sequentially from the beginning to the end of an array.
* **Binary Search:** Searches for an element by repeatedly dividing a sorted array into two halves.
* **Binary Search on Answer:** Uses Binary Search to find the square root of a number.
* **Sorted Array:** Binary Search requires the array to be sorted.

## Time Complexity

| Algorithm                       | Time Complexity |
| ------------------------------- | --------------- |
| Linear Search                   | O(n)            |
| Binary Search                   | O(log n)        |
| Square Root using Binary Search | O(log n)        |

## Binary Search

Binary Search works by comparing the target value with the middle element of a sorted array.

```text
Array:   10  20  30  40  50  60  70
                     ↑
                   Middle
```

If the target is smaller than the middle element, the left half is searched. If the target is larger, the right half is searched.

## Linear Search

Linear Search checks every element one by one until the target is found.

```text
10 → 20 → 30 → 40 → 50
              ↑
            Target
```

## Language

* C
