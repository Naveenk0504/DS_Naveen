#include <iostream> // Including the input/output stream library for basic I/O operations
using namespace std;

// Definition of a linked list node
class Node {
public:
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with the given data and next pointer
    Node(int new_data) : data(new_data), next(nullptr) {}
};

// Given a reference (pointer to pointer) to the head
// of a list and an integer, appends a new node at the end
void append(Node** head_ref, int new_data) {
    // 1. Allocate memory for the new node
    Node* new_node = new Node(new_data);

    // Used in step 5
    Node* last = *head_ref;

    // 2. Set the data
    new_node->data = new_data;

    // 3. The new node will be
    // the last node, so set its next
    // pointer to NULL
    new_node->next = NULL;

    // 4. If the Linked List is empty,
    // make the new node the head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // 5. Else traverse until the last node
    while (last->next != NULL) {
        last = last->next;
    }

    // 6. Update the next pointer of the last node
    last->next = new_node;
    return;
}

// Function to print elements of the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " "; // Print the data of the current node
        current = current->next;      // Move to the next node
    }
    cout << endl; // Print a newline character after printing the list
}

int main() {
    // Start with an empty list
    Node* head = NULL;

    // Append some elements to the end
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);

    // Print the linked list
    cout << "Linked list after appending: ";
    printList(head);

    return 0;
}
