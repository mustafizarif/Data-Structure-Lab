# Tree Data Structures

A collection of fundamental **tree data structure algorithms implemented in C** for Data Structures & Algorithms laboratory practice.

---

## 📌 Contents

This folder contains implementations of:

- BST Maximum & Minimum — `BST_max_min.c`
- Expression Tree Evaluation — `Expression_tree_evaluation.c`
- Huffman Coding — `Huffman_coading.c`
- Tree Traversal — `Tree_traversal.c`

---

## 🎯 Key Learning Points

### 1. Binary Search Tree — Maximum & Minimum

- Implements a **Binary Search Tree (BST)**.
- Each node has at most two children.
- Left subtree contains smaller values.
- Right subtree contains larger values.
- Minimum value is found at the **leftmost node**.
- Maximum value is found at the **rightmost node**.
- Demonstrates tree insertion and traversal.
- Uses pointers and dynamic memory allocation.
- Average search/insert complexity: **O(log n)**.
- Worst case: **O(n)** for an unbalanced BST.

---

### 2. Expression Tree Evaluation

- Represents arithmetic expressions using a **Binary Tree**.
- Operators are stored in internal nodes.
- Operands are stored in leaf nodes.
- Uses recursion to evaluate the expression.
- Commonly uses **Postorder Traversal**.
- Demonstrates tree construction and expression evaluation.
- Supports arithmetic operators such as `+`, `-`, `*`, and `/`.
- Helps understand the relationship between expressions and trees.

---

### 3. Huffman Coding

- Implements **Huffman Coding**, a lossless data compression technique.
- Uses a **Binary Tree** to generate Huffman codes.
- Uses a **Min Heap / Priority Queue** to select the lowest-frequency nodes.
- Follows the **Greedy Algorithm** approach.
- Characters with higher frequency receive shorter codes.
- Characters with lower frequency receive longer codes.
- Left edge represents `0`.
- Right edge represents `1`.
- No Huffman code is a prefix of another code.
- Time Complexity: **O(n log n)**.
- Space Complexity: **O(n)**.

---

### 4. Tree Traversal

- Demonstrates the fundamental methods of traversing a tree.
- Visits every node exactly once.
- Implements **Inorder Traversal**.
- Implements **Preorder Traversal**.
- Implements **Postorder Traversal**.
- Uses recursion to traverse the tree.

#### Inorder

```text
Left → Root → Right
