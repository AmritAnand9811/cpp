#include <iostream>
using namespace std;

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
    int loc = beg;
    int i = beg;
    int j = end;
    int bag = 0;

    while (bag != 1)
    {
        while ((a[loc] <= a[j]) && (loc != j))
            j--;
        if (loc == j)
            bag = 1;
        else if (a[loc] > a[j])
        {
            int temp = a[loc];
            a[loc] = a[j];
            a[j] = temp;
            loc = j;
        }

        if (bag != 1)
        {
            while (a[loc] >= a[i] && (loc != i))
                i++;
            if (loc == i)
                bag = 1;
            else if (a[loc] < a[i])
            {
                int temp = a[loc];
                a[loc] = a[i];
                a[i] = temp;
            }
        }
    }
    return loc
}
