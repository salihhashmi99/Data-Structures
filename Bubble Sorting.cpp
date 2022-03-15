#include<iostream>
using namespace std;
int main()
{
int i,j,size, temp;
cout<<"enter the size of array :";
cin>>size;
int ar[size];
cout<<"enter the value for array :";
for(i=0;i<size;i++)
{
cin>>ar[i];
}
for(i=0;i<size-1;i++)
{
for(j=0;j<size-1;j++)
{
if(ar[j]>ar[j+1]){
temp=ar[j];
ar[j]=ar[j+1];
ar[j+1]=temp;
}
}
}
for(i=0;i<size;i++)
{
cout<<ar[i];
}
}
