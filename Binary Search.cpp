#include<iostream>
using namespace std;
int main()
{
int l,f,m,se,n;
cout<<"enter the total element of array :";
cin>>n;
int ar[n];
cout<<"enter value for array "<<endl;
for(int i=0;i<n;i++)
{
cin>>ar[i];
}
cout<<"enter search element :";
cin>>se;
l=n-1;
f=0;
while(f<=l)
{
m=(f+l)/2;
if(ar[m]<se)
{
f=m+1;
}
else if(ar[m]==se)
{
cout<<"element found at"<<m<<" index";
break;
}
else
l=m-1;
}
if(f>l)
cout<<"not found";
}
