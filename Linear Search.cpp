#include<iostream>
using namespace std;
int main()
{
int x,r,size,i,j;
cout<<"enter the size of array :";
cin>>size;
int a[size];
cout<<"enter value for array :"<<endl;
for(i=0;i<size;i++)
{
cin>>a[i];
}
cout<<"enter number for search :";
cin>>x;
for( i=0;i<5;i++)
{
for( j=0;j<5;j++)
{
if(x==a[i])
{
r=1;
}
}


if( r==1)
{
cout<<"found";
}
else
{
cout<<"not found";
}
}
}
