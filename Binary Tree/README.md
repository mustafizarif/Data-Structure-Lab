# Binary Tree

## Overview

Basic searching implementations in C, including linear search, binary search, and square root calculation using binary search.

## Files

- `binary_search.c` - Searches for an element in a sorted array using binary search
- `linear_search.c` - Searches for an element by checking each element sequentially
- `square_root_binarysearch.c` - Calculates the square root of a number using binary search

## Key Concepts

- **Linear Search:** Checks each element one by one until the target is found
- **Binary Search:** Divides a sorted array into smaller parts to efficiently find an element
- **Sorted Array:** An array arranged in ascending or descending order
- **Search Space:** The range of elements where the target may exist
- **Time Complexity:** Binary search has `O(log n)` time complexity, while linear search has `O(n)`

## Binary Search

Binary search repeatedly divides the search range into two halves.

```text
Array:   10  20  30  40  50  60  70
                     ↑
                   Middle
