#include<iostream>
using namespace std;

class Queue {
 public:
 // Initialize front and rear
 int rear, front;

 // Circular Queue
 int size;
 int *circular_queue;

 Queue(int sz) {
 front = rear = -1;
 size = sz;
 circular_queue = new int[sz];
 }
 void enQueue(int elem);
 int deQueue();
 void displayQueue();
};

/* Function to create Circular queue */
void Queue::enQueue(int elem)
{
 if ((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))) {
 cout<<"\nQueue is Full";
 return;
 }
 else if (front == -1) { /* Insert First Element */
 front = rear = 0;
 circular_queue[rear] = elem;
 }
 else if (rear == size-1 && front != 0) {
 rear = 0;
 circular_queue[rear] = elem;
 }
 else {
 	rear++;
 circular_queue[rear] = elem;
 } }
// Function to delete element from Circular Queue
int Queue::deQueue()
{
 if (front ==-1) {
 cout<<" \nQueue is Empty";
 return
-1;
 }

 int data = circular_queue[front];
 circular_queue[front] =
-1;
 if (front == rear) {
 front =
-1;
 rear =
-1;
 }
 else if (front == size
-1)
 front = 0;
 else
 front++;

 return data;
}

//display elements of Circular Queue
void Queue::displayQueue()
{
 if (front ==
-1) {
 cout<<"\nQueue is Empty"<<endl;
 return;
 }
 cout<<"\nCircular Queue elements: ";
 if (rear >= front) {
 for (int i = front; i <= rear; i++)
 cout<<circular_queue[i]<<" ";
 }
 else {
 for (int i = front; i < size; i++)
 cout<<circular_queue[i]<<" ";

 for (int i = 0; i <= rear; i++)
 cout<<circular_queue[i]<<" ";
 }
}

//main program
int main()
{
 Queue pq(5);
 // Insert elements in Circular Queue
 pq.enQueue(2);
 pq.enQueue(4);
 pq.enQueue(6);
 pq.enQueue(8);

 // Display elements present in Circular Queue
 pq.displayQueue();

 // Delete elements from Circular Queue
 cout<<"\nElement Dequeued = "<<pq.deQueue();
 cout<<"\nElement Dequeued = "<<pq.deQueue();

 pq.displayQueue();

 pq.enQueue(10);
 pq.enQueue(12);
 pq.enQueue(14);

 pq.displayQueue();

 pq.enQueue(10);
 return 0;
}
