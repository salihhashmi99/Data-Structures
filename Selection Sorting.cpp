#include<iostream>
using namespace std;
int main()
{
int i,j,size,mini;
cout<<"please enter the size of the array :"<<endl;
cin>>size;
int ar[size];
cout<<"please enter the value for array ;"<<endl;
for(i=0;i<size;i++)
{
cin>>ar[i];
}
for(i=0;i<size;i++)
{
mini=i;
for(j=i+1;j<size;j++)
{
if(ar[mini]>ar[j])
{
mini=j;
}
}
if(mini!=i)
{
swap(ar[i],ar[mini]);
}
}
cout<<"value after sorting"<<endl;
for(i=0;i<size;i++)
{
cout<<ar[i];
}
}
