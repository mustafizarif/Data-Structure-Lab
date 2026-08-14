# Data Structures

## Overview

This folder contains basic data structure implementations in C. It covers Dynamic Arrays, Linked Lists, Stacks, Queues, and Circular Queues.

## Files

* `dynamic_array.c` - Implements a dynamic array using dynamic memory allocation.
* `linked_list.c` - Implements a singly linked list using nodes and pointers.
* `stack_.c` - Implements a stack using the Last In, First Out (LIFO) principle.
* `queue_.c` - Implements a queue using the First In, First Out (FIFO) principle.
* `circular_queue_.c` - Implements a circular queue using an array.

## Key Concepts

* **Dynamic Array:** An array that can grow or shrink during program execution.
* **Linked List:** A collection of nodes where each node contains data and a pointer to the next node.
* **Stack:** A linear data structure that follows the LIFO principle.
* **Queue:** A linear data structure that follows the FIFO principle.
* **Circular Queue:** A queue where the last position is connected back to the first position.

## Stack

A Stack follows the **LIFO (Last In, First Out)** principle.

```text
        ┌─────┐
        │  30 │ ← Top
        ├─────┤
        │  20 │
        ├─────┤
        │  10 │
        └─────┘
```

## Queue

A Queue follows the **FIFO (First In, First Out)** principle.

```text
Front → 10 → 20 → 30 ← Rear
```

## Linked List

A linked list consists of nodes connected using pointers.

```text
10 → 20 → 30 → NULL
```

## Language

* C

