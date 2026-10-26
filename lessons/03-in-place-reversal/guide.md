# Lesson 3: In-Place Three-Pointer Reversal

This classic LeetCode problem (LeetCode 206) uses three pointers to reverse a linked list without allocating new nodes.

### The Three Pointers
1. **`prev`:** Points to the already-reversed segment (initialized to `nullptr`).
2. **`curr`:** Points to the active node being rewired.
3. **`forward`:** Temporarily saves `curr->next` before the link is reversed.

### Checkpoints:
- **Loop Step 1:** `forward` saves node `2`. `curr->next` rewires to point backwards to `nullptr`. `prev` advances to `1`.
- **Loop Step 2:** `forward` saves node `3`. Node `2` rewires to point to `1`.
- **Loop Step 3:** Node `3` rewires to point to `2`.
- **Loop Step 4:** Node `4` rewires to point to `3`.
- **Completion:** `prev` points to node `4`, which is returned as the new head.
