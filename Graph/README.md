# Graph

## Overview

Basic graph and matrix implementations in C using arrays and adjacency matrix representation.

## Files

* `adjacency_matrix.c` - Represents a graph using an adjacency matrix
* `matrix.c` - Demonstrates basic matrix operations using 2D arrays

## Key Concepts

* **Graph:** A collection of vertices and edges
* **Vertex:** A node or point in a graph
* **Edge:** A connection between two vertices
* **Adjacency Matrix:** A 2D array used to represent connections between vertices
* **2D Array:** Used to store matrix and graph data
* **Undirected Graph:** A graph where edges have no direction

## Adjacency Matrix

An adjacency matrix represents a graph using a 2D array.

* `1`: An edge exists between two vertices
* `0`: No edge exists between two vertices

Example:

```text
    0 1 2 3
  ---------
0 | 0 1 1 0
1 | 1 0 0 1
2 | 1 0 0 1
3 | 0 1 1 0
```

## Language

* C
