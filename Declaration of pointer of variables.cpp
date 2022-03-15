#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n;
int *ptr;
cout<<”Enter an integer”<<endl;
cin>>n;
ptr = &n;
cout<<”The value of n is “<<n<<endl;
cout<<”The address of n is “<<ptr<<endl;
return 0;
}

