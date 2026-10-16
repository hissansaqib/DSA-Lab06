// Name: Muhammad Hissan Saqib
// Registration number: 543530
// Section: BSCS-15-D

#include <iostream>
using namespace std;

int items[5];
int front = -1;
int rear = -1;

void enqueue(int value){
    if(rear == 4){
        cout << "Insertion blocked: Queue is full." << endl;
    }
    else if(front == -1){
        front = 0;
        rear = 0;
        items[rear] = value;
        cout << "Inserted " << value << endl;
    }
    else{
        rear++;
        items[rear] = value;
        cout << "Inserted " << value << endl;
    }
}

void dequeue(){
    if(front == -1){
        cout << "Queue is empty. Cannot remove." << endl;
    }
    else{
        int value = items[front];
        cout << "Removed: " << value << endl;
        
        if(front == rear){
            front = -1;
            rear = -1;
            cout << "(Queue is completely empty. Indices reset to -1)" << endl;
        }
        else{
            front++;
        }
    }
}

void peekFront(){
    if(front == -1){
        cout << "Queue is empty." << endl;
    }
    else{
        cout << "Front value is: " << items[front] << endl;
    }
}

void display(){
    if(front == -1){
        cout << "Queue is empty." << endl;
    }
    else{
        cout << "Queue (front to rear): ";
        for(int i = front; i <= rear; i++){
            cout << items[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    
    dequeue();
    peekFront();
    display();
    
    cout << "\nRemoving remaining items:" << endl;
    dequeue();
    dequeue();
    
    cout << "Attempting removal on empty queue:" << endl;
    dequeue();
    
    cout << "\nTesting queue after reset:" << endl;
    enqueue(40);
    display();
    
    return 0;
}