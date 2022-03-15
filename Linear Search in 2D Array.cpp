#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x,r,size1,size2,i,j;
cout<<"enter the size of array :";
cin>>size1>>size2;
int a[size1][size2];
cout<<"enter value for array :"<<endl;
for(i=0;i<size1;i++)
{
 for(j=0;j<size2;j++)
 {
cin>>a[i][j];
}
}
cout<<"enter number for search :";
cin>>x;
for( i=0;i<5;i++)
{
for( j=0;j<5;j++)
{
if(x==a[i][j])
{
r=1;
}
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
