// Merse Short_in it we have to merse a data in such a way so that smaller to greater number

#include <iostream>
using namespace std;
void merse(int a[], int beg, int mid, int end)
{
    int i = beg, j = mid + 1, index = beg, temp[n], k;
    while ((a[i] < a[j]))
    {
        if (a[i] < a[j])
        {
            temp[index] = a[i];
            i++;
        }
        else
        {
            temp[index] = a[j] j++ index++;
        }
        if (i > mid)
        {
            while (j <= end)
            {
                temp[index] = a[j] j++ index++;
            }
            else
            {
                while (i <= mid)
            }
            temp[index] = a[i] i++ index++;
        }
    }
    for (k = beg to index)
        a[k] = temp[k]
}

void mergeSort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }
}
int main()
{
    int main()
    {
        int a[] = {38, 27, 43, 3, 9, 82, 10}; // Input array
        int n = sizeof(a) / sizeof(a[0]);

        cout << "Input array: ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        mergeSort(a, 0, n - 1);

        cout << "Sorted array: ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        return 0;
    }
}
l