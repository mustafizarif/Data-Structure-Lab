# Sorting Algorithms

A collection of fundamental **sorting algorithms implemented in C** for Data Structures & Algorithms laboratory practice.

---

## 📌 Contents

This folder contains implementations of:

- Bubble Sort — `bubble_sort.c`
- Insertion Sort — `insertion_sort.c`
- Selection Sort — `selection_sort.c`
- Merge Sort — `merge_sort.c`
- Heap Sort — `hap_sort.c`

> **Note:** The current Heap Sort file is named `hap_sort.c`. For consistency, it can be renamed to `heap_sort.c`.

---

## 🎯 Key Learning Points

### 1. Bubble Sort

- Compares adjacent elements.
- Swaps elements when they are in the wrong order.
- The largest element moves to the end after each pass.
- Simple and easy to understand.
- Best Case: **O(n)** with an optimized implementation.
- Average Case: **O(n²)**.
- Worst Case: **O(n²)**.
- Space Complexity: **O(1)**.
- Stable sorting algorithm.

---

### 2. Insertion Sort

- Builds the sorted array one element at a time.
- Takes an element and inserts it into its correct position.
- Works well for small or nearly sorted arrays.
- Best Case: **O(n)**.
- Average Case: **O(n²)**.
- Worst Case: **O(n²)**.
- Space Complexity: **O(1)**.
- Stable sorting algorithm.

---

### 3. Selection Sort

- Finds the smallest element from the unsorted portion.
- Places it at the beginning of the unsorted portion.
- Repeats until the entire array is sorted.
- Best Case: **O(n²)**.
- Average Case: **O(n²)**.
- Worst Case: **O(n²)**.
- Space Complexity: **O(1)**.
- Performs relatively few swaps.
- Generally not stable.

---

### 4. Merge Sort

- Uses the **Divide and Conquer** technique.
- Divides the array into smaller subarrays.
- Recursively sorts the subarrays.
- Merges the sorted subarrays.
- Best Case: **O(n log n)**.
- Average Case: **O(n log n)**.
- Worst Case: **O(n log n)**.
- Extra Space: **O(n)**.
- Stable sorting algorithm.

---

### 5. Heap Sort

- Uses a **Binary Heap** data structure.
- Builds a Max Heap for ascending-order sorting.
- Repeatedly removes the maximum element and places it at the end.
- Best Case: **O(n log n)**.
- Average Case: **O(n log n)**.
- Worst Case: **O(n log n)**.
- Space Complexity: **O(1)** for the standard in-place implementation.
- Not stable.

---

## 📊 Complexity Comparison

| Algorithm | Best Case | Average Case | Worst Case | Extra Space | Stable |
|---|---:|---:|---:|---:|:---:|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | No |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | Yes |
| Heap Sort | O(n log n) | O(n log n) | O(n log n) | O(1) | No |

> **Note:** Bubble Sort achieves O(n) best-case performance when an early-exit/swapped flag is used.

---



## 🔍 Algorithm Selection Guide

| Situation | Recommended Algorithm |
|---|---|
| Learning basic sorting | Bubble Sort |
| Small or nearly sorted data | Insertion Sort |
| Simple sorting with fewer swaps | Selection Sort |
| Large datasets | Merge Sort |
| O(n log n) sorting with O(1) extra space | Heap Sort |

---

## ▶️ How to Compile and Run

Open the terminal inside the `Sorting_Algorithms` directory.

### Compile

```bash
gcc bubble_sort.c -o bubble_sort
gcc insertion_sort.c -o insertion_sort
gcc selection_sort.c -o selection_sort
gcc merge_sort.c -o merge_sort
gcc hap_sort.c -o hap_sort
