// Include the input/output stream header file for fundamental input and output operations.
#include <iostream>
// Utilize the standard namespace to streamline the use of standard library components.
using namespace std;

// Define a function called optimizeBubbleSort that accepts an array and its size as parameters.
void optimizeBubbleSort(int arr[], int size) {
    // Flag to track if the array is already sorted
    bool isSorted;

    // Outer loop: Traverse the array from the beginning to the second-to-last element.
    for (int i = 0; i < size - 1; ++i) {
        // Initialize isSorted to true at the start of each pass
        isSorted = true;

        // Inner loop: Traverse the array from the beginning to the (size - i - 1) element.
        for (int j = 0; j < size - i - 1; ++j) {
            // Check if the current element is greater than the next element.
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the incorrect order.
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Set isSorted to false if a swap occurs.
                isSorted = false;
            }
        }

        // If the array is already sorted up to this point, break out of the outer loop.
        if (isSorted) {
            break;
        }
    }
}

// Define the primary function, the entry point of the program.
int main() {
    // Declare an integer array and initialize it with values.
    int arr[] = {3, 6, 1, 8, 2};
    // Calculate the size of the array by dividing the total size of the array by the size of one element.
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print a message indicating the unsorted array is about to be displayed.
    cout << "Unsorted array:";
    // Loop through each element of the array and print its value.
    for (int i = 0; i < size; ++i) {
        cout << " " << arr[i];
    }
    // Move to the next line after printing the unsorted array.
    cout << endl;

    // Call the optimizeBubbleSort function to sort the array.
    optimizeBubbleSort(arr, size);

    // Print a message indicating the sorted array is about to be displayed.
    cout << "Sorted array:";
    // Loop through each element of the sorted array and print its value.
    for (int i = 0; i < size; ++i) {
        cout << " " << arr[i];
    }
    // Move to the next line after printing the sorted array.
    cout << endl;

    // Indicate successful program execution by returning 0.
    return 0;
}
