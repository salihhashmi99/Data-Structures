#include<iostream>
#include<conio.h>
using namespace std;
struct node{
int data;
node *next;
};
class l_list{
private:
node *head, *tail;
public:
l_list(){
head=NULL;
tail=NULL;
}
void add_node(int n){
node *temp=new node;
temp
->data=n;
temp
->next=NULL;
if(head==NULL){
head=temp;
tail=temp;
}
else{
tail
->next=temp;
tail=tail
->next;
}
}
void display(){
cout<<"data in list is "<<endl;
node *p;
p=head;
while(p!=NULL){
cout<<" "<<p
->data<<endl;
p=p
->next;
}
}
};
int main(){
l_list list1;
list1.add_node(13);
list1.add_node(123);
list1.add_node(133);
list1.add_node(56);
list1.add_node(133);
list1.add_node(1);
list1.add_node(4);
list1.display();
return 0;
}
