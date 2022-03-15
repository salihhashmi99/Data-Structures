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
void addNode(int n){
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
void begning(int n){
node *temp=new node;
temp
->data=n;
temp
->next=head;
head=temp
;
}
node*gethead(){
 return head;

}
 static void concatenate(node*a, node*b){
 if(a!=NULL && b!=NULL){
 if(a
->next==NULL)

a
->next=b;

 else
 concatenate(a
->next,b);

}
 else{
 cout<<" a or b is NULL"<<endl;
 }}
void after(node *a ,int s){
node *p=new node; p->data=s; p->next=a->next; a->next=p;
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
public:
};
int main(){
l_list list1;
list1.addNode(13);
list1.addNode(1);
list1.addNode(4);
list1.display();
list1.begning(34);
list1.display();
 list1.begning(1);
 list1.after(list1.gethead(),45);
 list1.after(list1.gethead()
->next,23);
 list1.after(list1.gethead()
->next
->next,3);
 list1.display();
return 0;
}

