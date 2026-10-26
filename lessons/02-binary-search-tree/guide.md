# Lesson 2: Binary Search Tree Insertion

In a **Binary Search Tree (BST)**, each node has up to two children.

### Rule of Placement
- `left` child contains values **smaller** than current node.
- `right` child contains values **greater** than current node.

### Checkpoints:
- **Checkpoint 1:** Root node `50` is allocated on heap.
- **Checkpoint 2:** Node `30` links as `root->left`.
- **Checkpoint 3:** Node `70` links as `root->right`.
- **Checkpoint 4:** Node `20` branches under `30->left`, creating a 2-level deep hierarchy.
- **Checkpoint 5:** Node `40` branches under `30->right`. Observe the tree column placement.
