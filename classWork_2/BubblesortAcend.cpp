#include <iostream>
using namespace std;

int main() {
    // Demonstrating the Bubble Sort algorithm on an array of integers

    // Initializing an array with integer values
    int numbers[] = { 8, 7, 6, 5, 2, 4, 1, 3, 9 };

    // Calculating the length of the array
    int arrayLength = sizeof(numbers) / sizeof(int);

    // Applying the Bubble Sort algorithm to sort the array in ascending order
    for (int i = 0; i < arrayLength; i++) {
        // Iterating through the array up to the last but one element
        for (int j = 0; j < arrayLength - 1; j++) {
            // Comparing adjacent elements and swapping if necessary to achieve ascending order
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array in ascending order
    cout << "Sorted Array (Ascending Order): ";
    for (int i = 0; i < arrayLength; i++) {
        cout << numbers[i] << " ";
    }

    return 0; // Indicates successful completion of the program
}
