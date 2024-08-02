#include <iostream>
using namespace std;

const int MAX_SIZE = 10; // Maximum size of array

void insertAtEnd(int arr[], int &size, int num)
{
    if (size >= MAX_SIZE)
    {
        cout << "Array is full. Cannot insert more elements." << endl;
        return;
    }

    arr[size] = num; // Insert new element at the end
    ++size;          // Increase size of array
}

int main()
{
    int arr[MAX_SIZE];
    int size = 0;

    cout << "Enter five numbers to insert at the end:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        int num;
        cin >> num;
        insertAtEnd(arr, size, num);
    }

    // Print the array after insertion
    cout << "Array after insertion at the end:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
