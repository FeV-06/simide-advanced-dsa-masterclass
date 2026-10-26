#include <iostream>

struct Node {
    int val;
    Node* prev;
    Node* next;

    Node(int v) : val(v), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void deleteNode(Node* target) {
        if (!target) return;
        if (target->prev) target->prev->next = target->next;
        else head = target->next;

        if (target->next) target->next->prev = target->prev;
        else tail = target->prev;

        delete target;
    }
};

int main() {
    DoublyLinkedList list;

    // 1. Build chain 10 <-> 20 <-> 30
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);

    // 2. Traversal with curr pointer
    Node* curr = list.head;
    while (curr) {
        std::cout << curr->val << " <-> ";
        curr = curr->next;
    }
    std::cout << "nullptr" << std::endl;

    // 3. Delete middle node (20)
    Node* second = list.head->next;
    list.deleteNode(second);

    std::cout << "After deletion: " << list.head->val << " <-> " << list.head->next->val << std::endl;
    return 0;
}
