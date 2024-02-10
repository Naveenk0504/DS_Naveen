// C++ code illustrating the implementation of a Queue using the Standard Template Library (STL)

#include <iostream>
#include <queue>

using namespace std;

// Function to display the elements of the queue (classwork)
void displayQueue(queue<int> q)
{
    queue<int> tempQueue = q;
    while (!tempQueue.empty()) {
        cout << '\t' << tempQueue.front();
        tempQueue.pop();
    }
    cout << '\n';
}

// Driver Code
int main()
{
    // Creating a queue named myQueue
    queue<int> myQueue;

    // Enqueuing elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Displaying the elements in the queue
    cout << "The queue myQueue is: ";
    displayQueue(myQueue);

    // Displaying the size, front, and back of the queue
    cout << "\nmyQueue.size(): " << myQueue.size();
    cout << "\nmyQueue.front(): " << myQueue.front();
    cout << "\nmyQueue.back(): " << myQueue.back();

    // Dequeuing an element and displaying the updated queue
    cout << "\nmyQueue.pop(): ";
    myQueue.pop();
    displayQueue(myQueue);

    return 0;
}
