#include <iostream>
using namespace std;

const int MAX_SIZE = 10;
int main()
{
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Array elements:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
