#include <iostream>
using namespace std;
const int MAX_SIZE = 10;

void insertInMiddle(int arr[], int &size, int num)
{
    if (size >= MAX_SIZE)
    {
        cout << "Array is full. Cannot insert more elements." << endl;
        return;
    }
    int middleIndex = size / 2;
    for (int i = size; i > middleIndex; --i)
    {
        arr[i] = arr[i - 1];
    }
    arr[middleIndex] = num;
    ++size;
}
int main()
{
    int arr[MAX_SIZE];
    int size = 0;
    cout << "Enter five numbers to insert at the middle:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        int num;
        cin >> num;
        insertInMiddle(arr, size, num);
    }
    cout << "Array after insertion at the middle:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
