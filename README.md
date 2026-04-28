# Binary Trees

A C library implementing basic binary tree operations.

## Data Structure

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
```

## Operations

| File | Function | Description |
|------|----------|-------------|
| `0-binary_tree_node.c` | `binary_tree_node` | Create a new node |
| `1-binary_tree_insert_left.c` | `binary_tree_insert_left` | Insert node as left child |
| `2-binary_tree_insert_right.c` | `binary_tree_insert_right` | Insert node as right child |
| `3-binary_tree_delete.c` | `binary_tree_delete` | Delete an entire tree |
| `4-binary_tree_is_leaf.c` | `binary_tree_is_leaf` | Check if node is a leaf |
| `5-binary_tree_is_root.c` | `binary_tree_is_root` | Check if node is a root |
| `6-binary_tree_preorder.c` | `binary_tree_preorder` | Pre-order traversal |
| `7-binary_tree_inorder.c` | `binary_tree_inorder` | In-order traversal |
| `8-binary_tree_postorder.c` | `binary_tree_postorder` | Post-order traversal |
| `9-binary_tree_height.c` | `binary_tree_height` | Measure tree height |
| `10-binary_tree_depth.c` | `binary_tree_depth` | Measure node depth |
| `11-binary_tree_size.c` | `binary_tree_size` | Count total nodes |
| `12-binary_tree_leaves.c` | `binary_tree_leaves` | Count leaf nodes |
| `13-binary_tree_nodes.c` | `binary_tree_nodes` | Count nodes with at least one child |
| `14-binary_tree_balance.c` | `binary_tree_balance` | Measure balance factor |
| `15-binary_tree_is_full.c` | `binary_tree_is_full` | Check if tree is full |
| `16-binary_tree_is_perfect.c` | `binary_tree_is_perfect` | Check if tree is perfect |
| `17-binary_tree_sibling.c` | `binary_tree_sibling` | Find sibling of a node |
| `18-binary_tree_uncle.c` | `binary_tree_uncle` | Find uncle of a node |

## Usage

Include the header in your C files:

```c
#include "binary_trees.h"
```

Compile with the required source files:

```bash
gcc -Wall -Wextra -Werror -pedantic main.c 0-binary_tree_node.c ... -o binary_tree
```

## Files

- `binary_trees.h` — Header file with structure definition and function prototypes
- `0-binary_tree_node.c` to `18-binary_tree_uncle.c` — Implementation files

## Authors 
- Osama Alhamdan
- Noura Alosaimi
