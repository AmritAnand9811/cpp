// not match

#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int beg = 0;
    int end = size - 1;
    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }
    int arr[size];
    cout << "Enter " << size << " elements into the array:\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to search for: ";
    cin >> key;
    int index = BinarySearch(arr, size, key);
    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }
    int mid = size / 2;
    cout << "Middle element is: " << arr[mid] << endl;
    if (arr[mid] > key)
    {
        cout << "Middle element is greater than the search key." << endl;
    }
    else if (arr[mid] < key)
    {
        cout << "Middle element is less than the search key." << endl;
    }
    else
    {
        cout << "Middle element is equal to the search key." << endl;
    }

    return 0;
}
