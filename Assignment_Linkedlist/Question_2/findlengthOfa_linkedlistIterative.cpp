/*Explanation:

    We initialize a variable 'count' to 0 to keep track of the number of nodes encountered.
    Traversal of the linked list starts from the head node, with a pointer 'current' initialized to the head.
    While the current node is not nullptr (indicating the end of the list), we increment the count and move 'current' to the next node.
    After traversing the entire list, the final value of 'count' represents the length of the linked list, which is returned.
*/

#include <iostream>

// Define a struct representing a node in a linked list
struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    Node(int new_data) : data(new_data), next(nullptr) {}
};

// Function to find the length of a linked list iteratively
int findLengthIterative(Node* head) {
    int count = 0;       // Initialize count to 0
    Node* current = head; // Start traversal from the head of the list

    // Traverse the list while counting nodes
    while (current != nullptr) {
        count++;          // Increment count for each encountered node
        current = current->next; // Move to the next node
    }
    return count; // Return the count, representing the length of the list
}

int main() {
    // Create a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Find the length of the linked list
    int length = findLengthIterative(head);
    std::cout << "Length of the linked list: " << length << std::endl;

    return 0;
}
