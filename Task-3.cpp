// Name: Muhammad Hissan Saqib
// Registration number: 543530
// Section: BSCS-15-D

#include <iostream>
#include <string>
using namespace std;

char items[20];
int top = -1;

void push(char c){
    if(top == 19){
        cout << "Stack full. Cannot push." << endl;
    }
    else{
        top++;
        items[top] = c;
    }
}

char pop(){
    if(top == -1){
        return '\0'; // Return null character if empty
    }
    else{
        char value = items[top];
        top--;
        return value;
    }
}

int main(){
    string word;
    cout << "Enter a word to reverse (up to 20 characters): ";
    cin >> word;
    
    if(word.length() > 20){
        cout << "Word is too long. Please enter up to 20 characters." << endl;
        return 0;
    }
    
    for(char c : word){
        push(c);
    }
    
    cout << "Reversed word: ";
    while(top != -1){
        cout << pop();
    }
    cout << endl;
    return 0;
}