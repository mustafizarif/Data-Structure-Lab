# Graph

This folder contains basic Graph and Matrix implementations in C.

## Files

### 1. adjacency_matrix.c

This program represents a graph using an **Adjacency Matrix**.

An adjacency matrix uses a 2D array where:

- `1` means there is an edge between two vertices.
- `0` means there is no edge.

Example:

```text
    0 1 2 3
  -----------
0 | 0 1 1 0
1 | 1 0 0 1
2 | 1 0 0 1
3 | 0 1 1 0
