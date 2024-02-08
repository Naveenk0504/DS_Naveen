/*
    The function "findLengthRecursive" accepts a pointer to the head of the linked list as its parameter.
    In the base case, if the head pointer is nullptr, indicating the list's end, the function returns 0.
    In the recursive scenario, the function increments the length by 1 and recursively calls itself with the next pointer of the current node.
    This recursive process continues until reaching the base case, after which the function begins to return and unwind the call stack, incrementing the length by 1 for each encountered node.
    Ultimately, the function returns the total length of the linked list.
*/

#include <iostream>

// Define a struct representing a node in a linked list
struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    Node(int new_data) : data(new_data), next(nullptr) {}
};

// Recursive function to determine the length of a linked list
int findLengthRecursive(Node* head) {
    // Base case: If head is nullptr, the length of the list is 0
    if (head == nullptr) {
        return 0;
    }
    // Recursive case: Increment the length by 1 and call the function with the next node
    return 1 + findLengthRecursive(head->next);
}

int main() {
    // Create a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Determine the length of the linked list using recursion
    int length = findLengthRecursive(head);
    std::cout << "Length of the linked list: " << length << std::endl;

    return 0;
}
