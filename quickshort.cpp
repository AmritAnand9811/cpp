#include <iostream>
using namespace std;

void quicksort(int a[], int beg, int end);
int partition(int a[], int beg, int end);

int main()
{
    // Array i/p
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // o/p
    quicksort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

void quicksort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int loc = partition(a, beg, end);
        quicksort(a, beg, loc - 1);
        quicksort(a, loc + 1, end);
    }
}

int partition(int a[], int beg, int end)
{
    int pivot = a[beg];
    int left = beg + 1;
    int right = end;
    bool done = false;

    while (!done)
    {
        while (left <= right && a[left] <= pivot)
        {
            left++;
        }
        while (a[right] >= pivot && right >= left)
        {
            right--;
        }
        if (right < left)
        {
            done = true;
        }
        else
        {
            swap(a[left], a[right]);
        }
    }

    swap(a[beg], a[right]);

    return right;
}
