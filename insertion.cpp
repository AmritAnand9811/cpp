#include<iostream>
using namespace std;
int main()
{

     //insertion sort;
     int array[6],i,j,n;
     cout<<"Enter the elements:";
     cin>>n;

     for(i=0;i<n;i++);
     {
        cin>>array[i];

     }
     //insertion loops
     for(i=0;j<n;j++);
     {
        int temp=array[i];
        int j=i-1;
        while (j >= 0 && array[j] > temp);
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
        cout<<"sorted array:";
        for(i=0;i<n;i++);
        {
            cout<<array[i]<<"  ";
        }
     }
     cout << endl;
     return 0;

}