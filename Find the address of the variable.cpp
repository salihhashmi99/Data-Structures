#include<iostream>
using namespace std;
int main()
{
int size,i,j;
// declaration of array
cout<<"Enter the size of array :";
cin>>size;
int ar[size];
// initilization of array
cout<<"Enter the value for array :";
for(i=0;i<size;i++)
{
cin>>ar[i];
}
 // display the array
 for(j=0;j<size;j++)
 {
 cout<<" They address of array is :"<<&ar[j]<<endl;
 }
return 0;
}
