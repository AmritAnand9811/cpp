// insertion sort
#include <iostream>
using namespace std;

int main()
{
    int array[6], n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
