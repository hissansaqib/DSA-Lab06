// Name: Muhammad Hissan Saqib
// Registration number: 543530
// Section: BSCS-15-D

#include <iostream>
using namespace std;

int items[5];
int top = -1;

void push(int value){
    if(top == 4){
        cout << "Stack is full. Cannot insert " << value << endl;
    }
    else{
        top++;
        items[top] = value;
        cout << "Pushed " << value << endl;
    }
}

void pop(){
    if(top == -1){
        cout << "Stack is empty. Cannot pop." << endl;
    }
    else{
        cout << "Removed: " << items[top] << endl;
        top--;
    }
}

void peek(){
    if(top == -1){
        cout << "Stack is empty. Nothing to peek." << endl;
    }
    else{
        cout << "Top value is: " << items[top] << endl;
    }
}

void display(){
    if(top == -1){
        cout << "Stack is empty." << endl;
    }
    else{
        cout << "Stack (top to bottom): ";
        for(int i = top; i >= 0; i--){
            cout << items[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    cout << "Initial tests: " << endl;
    push(10);
    push(20);
    push(30);
    display();
    pop();
    peek();
    
    cout << "\nChecking boundary conditions" << endl;
    push(40);
    push(50);
    push(60);
    push(70);
    
    cout << "\nRemoving all values:" << endl;
    pop();
    pop();
    pop();
    pop();
    pop();
    
    cout << "Attempting pop on empty stack:" << endl;
    pop();
    
    return 0;
}