#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

// Dynamic Array Class
class DynamicArray {
private:
    vector<int> data;

public:
    // Function to insert data into the dynamic array
    void insertData(int value) {
        data.push_back(value); // Add value to the end of the vector
    }

    // Function to display the elements of the dynamic array
    void displayData() {
        cout << "Dynamic Array Elements: ";
        for (int num : data) { // Iterate over each element in the vector
            cout << num << " "; // Print the element
        }
        cout << endl;
    }

    // Function to adjust the size of the dynamic array
    void adjustSize() {
        int newSize;
        cout << "Enter the new size of the array: ";
        cin >> newSize;
        data.resize(newSize); // Resize the vector to the new size
        cout << "Array resized successfully!" << endl;
    }
};

// Linked List Class
class LinkedList {
private:
    struct Node {
        int data;
        Node* next;

        Node(int val) : data(val), next(nullptr) {}
    };

    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to insert data into the linked list
    void insertData(int value) {
        Node* newNode = new Node(value); // Create a new node with the given value
        if (!head) {
            head = newNode; // If the list is empty, set the new node as the head
        } else {
            Node* current = head;
            while (current->next) { // Traverse to the end of the list
                current = current->next;
            }
            current->next = newNode; // Insert the new node at the end of the list
        }
    }

    // Function to display the elements of the linked list
    void displayData() {
        cout << "Linked List Elements: ";
        Node* current = head;
        while (current) { // Traverse the list and print each element
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// Stack Class
class CustomStack {
private:
    stack<int> customStack;

public:
    // Function to push data onto the stack
    void pushData(int value) {
        customStack.push(value); // Push the value onto the stack
    }

    // Function to pop data from the stack
    void popData() {
        if (!customStack.empty()) { // Check if the stack is not empty
            customStack.pop(); // Pop the top element from the stack
        }
    }

    // Function to display the elements of the stack
    void displayData() {
        cout << "Stack Elements: ";
        stack<int> tempStack = customStack;
        while (!tempStack.empty()) { // Iterate over the stack and print each element
            cout << tempStack.top() << " ";
            tempStack.pop();
        }
        cout << endl;
    }
};

// Queue Class
class CustomQueue {
private:
    queue<int> customQueue;

public:
    // Function to enqueue data into the queue
    void enqueueData(int value) {
        customQueue.push(value); // Enqueue the value into the queue
    }

    // Function to dequeue data from the queue
    void dequeueData() {
        if (!customQueue.empty()) { // Check if the queue is not empty
            customQueue.pop(); // Dequeue the front element from the queue
        }
    }

    // Function to display the elements of the queue
    void displayData() {
        cout << "Queue Elements: ";
        queue<int> tempQueue = customQueue;
        while (!tempQueue.empty()) { // Iterate over the queue and print each element
            cout << tempQueue.front() << " ";
            tempQueue.pop();
        }
        cout << endl;
    }
};

// Binary Tree Class
class BinaryTree {
private:
    struct TreeNode {
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
    };

    TreeNode* root;

    // Function to insert a node into the binary tree
    TreeNode* insertNode(TreeNode* node, int value) {
        if (!node) {
            return new TreeNode(value); // If the node is null, create a new node with the given value
        }
        if (value < node->data) {
            node->left = insertNode(node->left, value); // Recursively insert into the left subtree
        } else if (value > node->data) {
            node->right = insertNode(node->right, value); // Recursively insert into the right subtree
        }
        return node;
    }

    // Function to perform inorder traversal of the binary tree
    void inorderTraversal(TreeNode* node) {
        if (node) {
            inorderTraversal(node->left); // Traverse left subtree
            cout << node->data << " "; // Print current node
            inorderTraversal(node->right); // Traverse right subtree
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    // Function to insert data into the binary tree
    void insertData(int value) {
        root = insertNode(root, value); // Call private insertNode function to insert data
    }

    // Function to display the elements of the binary tree using inorder traversal
    void displayData() {
        cout << "Binary Tree Elements (Inorder traversal): ";
        inorderTraversal(root); // Start inorder traversal from the root
        cout << endl;
    }
};

// Main function
int main() {
    cout << "Welcome to the Dynamic Data Structure Program!" << endl;

    // Initialize instances of data structures
    DynamicArray dynamicArray;
    LinkedList linkedList;
    CustomStack customStack;
    CustomQueue customQueue;
    BinaryTree binaryTree;

    // Main menu loop
    while (true) {
        cout << "\nChoose a data structure to work with:" << endl;
        cout << "1. Dynamic Array" << endl;
        cout << "2. Linked List" << endl;
        cout << "3. Stack" << endl;
        cout << "4. Queue" << endl;
        cout << "5. Binary Tree" << endl;
        cout << "6. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to insert into the dynamic array: ";
                cin >> value;
                dynamicArray.insertData(value); // Insert data into the dynamic array
                cout << "Value inserted into the dynamic array!" << endl;
                break;
            }
            case 2: {
                int value;
                cout << "Enter value to insert into the linked list: ";
                cin >> value;
                linkedList.insertData(value); // Insert data into the linked list
                cout << "Value inserted into the linked list!" << endl;
                break;
            }
            case 3: {
                int value;
                cout << "Enter value to push onto the stack: ";
                cin >> value;               
		customStack.pushData(value);
                cout << "Value pushed onto the stack!" << endl;
                break;
            }
            case 4: {
                int value;
                cout << "Enter value to enqueue into the queue: ";
                cin >> value;
                customQueue.enqueueData(value);
                cout << "Value enqueued into the queue!" << endl;
                break;
            }
            case 5: {
                int value;
                cout << "Enter value to insert into the binary tree: ";
                cin >> value;
                binaryTree.insertData(value);
                cout << "Value inserted into the binary tree!" << endl;
                break;
            }
            case 6: {
                cout << "Exiting the program." << endl;
                return 0;
            }
            default:
                cout << "Invalid choice! Please choose again." << endl;
        }
    }

    return 0;
}
