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
        cout << "Can not insert as queue is full." << endl;
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

void display(){
    if(front == -1){
        cout << "Display requested on an empty queue." << endl;
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
    display();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    
    enqueue(40);
    enqueue(50);
    display();
    
    cout << "Attempting to insert into a full queue:" << endl;
    enqueue(60);
    
    return 0;
}