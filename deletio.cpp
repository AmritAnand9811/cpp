#include <iostream>
using namespace std;

void deleteElement(int arr[], int &size, int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index" << endl;
        return;
    }
    // Shift elements to the left
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--; // Reduce the size of the array
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int indexToDelete = 2; // Deleting the element at index 2
    deleteElement(arr, size, indexToDelete);

    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
