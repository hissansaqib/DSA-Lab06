// Name: Muhammad Hissan Saqib
// Registration number: 543530
// Section: BSCS-15-D

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = nullptr;

void push(int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << "Pushed " << value << endl;
}

void pop(){
    if(top == nullptr){
        cout << "Stack is empty. Cannot pop." << endl;
    }
    else{
        Node* temp = top;
        cout << "Removed: " << temp->data << endl;
        top = top->next;
        delete temp;
    }
}

void peek(){
    if(top == nullptr){
        cout << "Stack is empty. Nothing to peek." << endl;
    }
    else{
        cout << "Top value is: " << top->data << endl;
    }
}

void display(){
    if(top == nullptr){
        cout << "Stack is empty." << endl;
    }
    else{
        cout << "Stack (top to bottom): ";
        Node* temp = top;
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main(){
    cout << "Linked List Stack Implementation" << endl;
    push(5);
    push(15);
    push(25);
    display();
    pop();
    peek();
    
    cout << "\nEmpty Stack Test" << endl;
    pop();
    pop();
    pop();
    // Releasing all remaining nodes before exit
    push(100);
    push(200);
    while(top != nullptr){
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    cout << "\nAll remaining nodes released. Exiting." << endl;
    
    return 0;
}