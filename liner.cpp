// serching in linear arraay of order n=0;
#include <iostream>
using namespace std;
int main()
{
    int a[10], i, n, t;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter Array:" << endl;
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
    for (i = 0; i < n; i++)
    {
        if (t == a[i])
        {
            cout << "Element found at index " << i << endl;
            return 0;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}
