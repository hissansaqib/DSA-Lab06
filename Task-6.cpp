// Name: Muhammad Hissan Saqib
// Registration number: 543530
// Section: BSCS-15-D

#include <iostream>
using namespace std;

int items[5];
int front = -1;
int rear = -1;

void addCustomer(int value){
    if(rear == 4){
        cout << "Queue full! Insertion is blocked. Please wait or empty the queue." << endl;
    }
    else if(front == -1){
        front = 0;
        rear = 0;
        items[rear] = value;
        cout << "Customer token " << value << " added." << endl;
    }
    else{
        rear++;
        items[rear] = value;
        cout << "Customer token " << value << " added." << endl;
    }
}

void serveNext(){
    if(front == -1){
        cout << "No customers to serve." << endl;
    }
    else{
        cout << "Serving customer with token: " << items[front] << endl;
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front++;
        }
    }
}

void viewNext(){
    if(front == -1){
        cout << "No customers currently in queue." << endl;
    }
    else{
        cout << "Next customer to be served has token: " << items[front] << endl;
    }
}

void displayQueue(){
    if(front == -1){
        cout << "Queue is empty." << endl;
    }
    else{
        cout << "Current queue (front to back): ";
        for(int i = front; i <= rear; i++){
            cout << items[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int choice = 0;
    int token;
    
    while(true){
        cout << "\n--- Customer Service Menu ---" << endl;
        cout << "1. Add customer" << endl;
        cout << "2. Serve next" << endl;
        cout << "3. View next" << endl;
        cout << "4. Display queue" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if(choice == 1){
            cout << "Enter customer token number: ";
            cin >> token;
            addCustomer(token);
        }
        else if(choice == 2){
            serveNext();
        }
        else if(choice == 3){
            viewNext();
        }
        else if(choice == 4){
            displayQueue();
        }
        else if(choice == 5){
            cout << "Exiting system." << endl;
            break;
        }
        else{
            cout << "Invalid choice. Please select a number from 1 to 5." << endl;
        }
    }
    
    return 0;
}