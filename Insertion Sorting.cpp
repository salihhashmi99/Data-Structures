#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int arr[5],i,j,key,n;
cout<<"Enter the values in the array "<<endl;
for (i=0;i<5;i++){
cin>>arr[i];
}
cout<<"Congratulation! you 've entered all values successfully"<<endl;
cout<<"Unsorted order of the array is :"<<endl;
for (i=0;i<5;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
for (i = 1; i < n; i++)
{
 key = arr[i];
 j = i - 1;
 while (j >= 0 && arr[j] > key)
 {
 arr[j + 1] = arr[j];
 j = j - 1;
 }
 arr[j + 1] = key;
 }
cout<<"The sorted order of the array is :"<<endl;
for (i=0;i<5;i++){
 cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
} 
