#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
void insertAtBeginning(int arr[], int &size, int num)
{
    if (size >= MAX_SIZE)
    {
        cout << "Array is full. Cannot insert more elements." << endl;
        return;
    }
    for (int i = size; i > 0; --i)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = num;
    ++size;
}
int main()
{
    int arr[MAX_SIZE];
    int size = 0;
    cout << "Enter five numbers to insert at the beginning:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        int num;
        cin >> num;
        insertAtBeginning(arr, size, num);
    }
    cout << "Array after insertion at the beginning:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
