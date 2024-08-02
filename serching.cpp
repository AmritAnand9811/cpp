// Binery serching
// serching in Binary arraay of order (log2n);
// enter five number in output and show midile element and also execute the midile no is either greater then midle one or not;
#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int t)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == t)
        {
            return mid; // mid.
        }
        if (a[mid] < t)
        {
            low = mid + 1; //  right half
        }
        else
        {
            high = mid - 1; //  left half
        }
    }
    return -1;
}
int main()
{
    int a[30], i, n, t;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter Array (in sorted order):" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Entered Array: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Enter the value to be searched: ";
    cin >> t;
    int result = binarySearch(a, n, t);
    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}
