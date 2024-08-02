// function                    ,return type  name of function (input type);
// 1. Decleration;
// 2.body definition
// 3. call

#include <iostream>
using namespace std;
int add(int, int, int);
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    add(a, b, c);
    return 0;
}
int add(int a, int b, int c)
{
    int d;
    d = a + b + c;
    cout << d;
}

