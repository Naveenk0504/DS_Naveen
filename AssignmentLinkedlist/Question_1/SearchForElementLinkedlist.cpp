/*Iterative Method:

    The iterative method employs a loop to traverse the linked list step by step.
    It compares the value of each node with the target element until a match is found or the end of the list is reached.
    If a match is found, it returns the node containing the target element; otherwise, it returns nullptr to signify that the element is absent from the list.
    The iterative approach avoids additional function call overhead, enhancing memory efficiency for large lists.
    However, it may involve more code and is generally less elegant compared to the recursive approach.
*/

/*
Recursive Method:

    In the recursive method, we decompose the problem into smaller sub-problems, calling the search function recursively on each subsequent node.
    The base case is when we reach the end of the list (i.e., the current node is nullptr), at which point we return nullptr.
    Comparisons are made between the value of the current node and the target element, with the node returned if a match is found.
    The recursive method often yields more concise and elegant code, particularly for problems well-suited to recursion.
    Nonetheless, it may entail additional overhead due to function calls, potentially leading to stack overflow errors for lengthy lists or deeply nested function calls.
*/

/*
Comparison:

    Both methods aim to accomplish the same objective: locating an element within a linked list.
    The iterative method typically entails less memory overhead and might be more efficient for sizable lists.
    The recursive method often results in code that is more succinct and readable but may pose a risk of stack overflow for very large or deeply nested lists.

Overall, the selection between iterative and recursive methods depends on factors such as code clarity, efficiency, and the specific demands of the problem at hand.
*/

#include <iostream>

// Define a struct representing a node in a linked list
struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    Node(int new_data) : data(new_data), next(nullptr) {}
};

// Function to search for an element in a linked list iteratively
Node* searchIterative(Node* head, int target) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == target) {
            return current; // Element found, return the node
        }
        current = current->next; // Move to the next node
    }
    return nullptr; // Element not found
}

// Function to search for an element in a linked list recursively
Node* searchRecursive(Node* head, int target) {
    // Base case: reached end of list
    if (head == nullptr) {
        return nullptr;
    }
    // Check if current node contains the target element
    if (head->data == target) {
        return head; // Element found, return the node
    }
    // Recursive call on the next node
    return searchRecursive(head->next, target);
}

int main() {
    // Create a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Search for elements using iterative approach
    int target1 = 3;
    Node* resultIterative = searchIterative(head, target1);
    if (resultIterative != nullptr) {
        std::cout << "Element " << target1 << " found using iterative approach." << std::endl;
    } else {
        std::cout << "Element " << target1 << " not found using iterative approach." << std::endl;
    }

    // Search for elements using recursive approach
    int target2 = 5;
    Node* resultRecursive = searchRecursive(head, target2);
    if (resultRecursive != nullptr) {
        std::cout << "Element " << target2 << " found using recursive approach." << std::endl;
    } else {
        std::cout << "Element " << target2 << " not found using recursive approach." << std::endl;
    }

    return 0;
}
