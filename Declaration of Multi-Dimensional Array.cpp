#include<iostream>
using namespace std;
int main()
{
int size1,size2,i,j;
// declaration of array
cout<<"Enter the numbers of rows :";
cin>>size1;
cout<<"Enter the number of columns :";
cin>>size2;
int ar[size1][size2];
// initilization of array
cout<<"Enter the value for array :";
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
 {
cin>>ar[i][j];
 }
}
 // display the array
 cout<<"They value of array are :";
 for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
 {
cout<<ar[i][j]<<endl;
 }
}
return 0;
}
