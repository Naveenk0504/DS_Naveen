#include <iostream>
#include <string>
using namespace std;

// Node structure for the binary tree
struct TreeNode {
    string location; // Location name
    double latitude; // Latitude of the location
    double longitude; // Longitude of the location
    TreeNode* left; // Pointer to the left child
    TreeNode* right; // Pointer to the right child
};

// Function to create a new node
TreeNode* createNode(string location, double latitude, double longitude) {
    TreeNode* newNode = new TreeNode;
    newNode->location = location;
    newNode->latitude = latitude;
    newNode->longitude = longitude;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a node into the binary tree
TreeNode* insertNode(TreeNode* root, string location, double latitude, double longitude) {
    if (root == nullptr) {
        return createNode(location, latitude, longitude); // Create a new node if the root is null
    } else {
        // Insert data into the left subtree if it's smaller, otherwise into the right subtree
        if (location < root->location) {
            root->left = insertNode(root->left, location, latitude, longitude);
        } else {
            root->right = insertNode(root->right, location, latitude, longitude);
        }
        return root;
    }
}

// Function to print the binary tree in an inorder traversal
void printTree(TreeNode* root) {
    if (root != nullptr) {
        printTree(root->left); // Print the left subtree
        cout << "Location: " << root->location << ", Latitude: " << root->latitude << ", Longitude: " << root->longitude << endl; // Print the root
        printTree(root->right); // Print the right subtree
    }
}

int main() {
    TreeNode* root = nullptr; // Initialize the root of the binary tree
    int size;
    cout << "Enter the number of locations in the GPS navigation system: ";
    cin >> size; // Input the size of the navigation system

    // Input data for each location and insert into the binary tree
    for (int i = 0; i < size; ++i) {
        string location;
        double latitude, longitude;
        cout << "Enter data for location " << i + 1 << ":" << endl;
        cout << "Location name: ";
        cin >> location;
        cout << "Latitude: ";
        cin >> latitude;
        cout << "Longitude: ";
        cin >> longitude;
        root = insertNode(root, location, latitude, longitude); // Insert the location into the binary tree
    }

    // Print the binary tree representing the GPS navigation system
    cout << "GPS Navigation System (Binary Tree Representation):" << endl;
    printTree(root);

    return 0;
}
