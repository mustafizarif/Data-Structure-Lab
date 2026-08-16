# Graph


## 📌 Contents

This folder contains implementations of:

- Dijkstra's Algorithm — `Dijkstra's.c`
- Kruskal's Algorithm — `Kruskal's.c`
- Prim's Algorithm — `Prim's.c`
- Adjacency Matrix — `adjacency_matrix.c`
- Matrix Operations — `matrix.c`

---

## 🎯 Key Learning Points

### 1. Dijkstra's Algorithm

**File:** `Dijkstra's.c`

- Finds the **shortest path** from a source vertex to all other vertices.
- Works with graphs containing **non-negative edge weights**.
- Uses a **Greedy Algorithm** approach.
- Maintains the shortest known distance for each vertex.
- Selects the unvisited vertex with the minimum distance.
- Updates the distances of its neighboring vertices.
- Useful for shortest-path problems.

**Time Complexity:**  
- Basic implementation: **O(V²)**.

Where:

- `V` = Number of vertices.

---

### 2. Kruskal's Algorithm

**File:** `Kruskal's.c`

- Finds the **Minimum Spanning Tree (MST)** of a weighted undirected graph.
- Uses a **Greedy Algorithm**.
- Sorts all edges according to their weights.
- Selects the smallest edge that does not create a cycle.
- Uses the **Disjoint Set / Union-Find** concept for cycle detection.
- Continues until the MST contains `V - 1` edges.

**Time Complexity:**  
- Mainly depends on edge sorting: **O(E log E)**.

Where:

- `V` = Number of vertices.
- `E` = Number of edges.

---

### 3. Prim's Algorithm

**File:** `Prim's.c`

- Finds the **Minimum Spanning Tree (MST)** of a weighted connected graph.
- Uses a **Greedy Algorithm**.
- Starts from any vertex.
- Repeatedly selects the minimum-weight edge connecting the tree to a new vertex.
- Continues until all vertices are included in the MST.

**Time Complexity:**  
- Basic adjacency matrix implementation: **O(V²)**.

---

### 4. Adjacency Matrix

**File:** `adjacency_matrix.c`

- Represents a graph using a **2D matrix**.
- Rows and columns represent graph vertices.
- A matrix element represents the connection between two vertices.
- For a weighted graph, the matrix can store edge weights.
- Provides simple and fast edge lookup.

Example:

```text
     A  B  C
A    0  1  0
B    1  0  1
C    0  1  0

## Language

* C
