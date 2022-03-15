#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int size,i,j;
// declaration of array
cout<<"Enter value for array :";
cin>>size;
int ar[size];
// initilization of array
for(i=0;i<size;i++)
{
cin>>ar[i];
}
 // display the array
 cout<<"They value of array are :";
 for(j=0;j<size;j++)
 {
 cout<<ar[j];
 }
return 0;
}
