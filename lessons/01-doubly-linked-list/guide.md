# Lesson 1: Doubly Linked List (Bidirectional Wiring)

A **Doubly Linked List** gives each node two pointer links: `next` pointing forward and `prev` pointing backward.

### Core Architecture
- **Forward Link (`next`):** Connects node $A \rightarrow B$.
- **Backward Link (`prev`):** Connects node $B \rightarrow A$.
- **Two Anchors:** `head` points to the start, and `tail` points to the end.

### Step-by-Step Checkpoints:
- **Checkpoint 1 (Initialization):** Notice `head` and `tail` start at `nullptr`.
- **Checkpoint 2 (First Node):** `10` is allocated on the heap; both `head` and `tail` point to it.
- **Checkpoint 3 (Mutual Wiring):** When `20` is added, `tail->next` points to `20`, and `20->prev` points back to `10`. Watch the green reverse arrow appear!
- **Checkpoint 4 (Traversal):** Watch the `curr` pointer badge advance node by node across the chain.
- **Checkpoint 5 (Node Deletion):** When deleting `20`, both `next` and `prev` links rewire around it, bypassing node `20` completely before `delete` frees the heap block.
