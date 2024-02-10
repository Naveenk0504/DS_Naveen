#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Creating an integer stack named 'numStack'
    stack<int> numStack;

    // Pushing values into the stack
    numStack.push(21); // Adding 21 to the stack
    numStack.push(22); // Adding 22 to the stack
    numStack.push(24); // Adding 24 to the stack
    numStack.push(25); // Adding 25 to the stack

    int num = 0;
    numStack.push(num); // Adding the value of 'num' (which is 0) to the stack
    numStack.pop();     // Removing the top element from the stack (0)
    numStack.pop();     // Removing the top element from the stack (25)
    numStack.pop();     // Removing the top element from the stack (24)

    // Printing the remaining elements in the stack
    while (!numStack.empty()) {
        cout << numStack.top() << " "; // Outputting the top element of the stack
        numStack.pop();                 // Removing the top element from the stack
    }

    return 0; // Indicating successful completion of the program
}
