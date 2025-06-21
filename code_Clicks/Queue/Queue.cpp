#include <iostream>
using namespace std;

int Queue[5], n = 5, y, x, front = -1, rear = -1;

void insert() {
    if (rear == n - 1) { // Fix: Corrected comparison operator
        cout << "Queue is full" << endl;
    } else {
        if (front == -1) { // Fix: Initialize 'front' only for the first element
            front = 0;
        }
        cout << "Enter the element to be inserted: ";
        cin >> x;
        rear++;
        Queue[rear] = x;
    }
}

void Delete() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Element deleted from queue is: " << Queue[front] << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

int Peek() {
    if (front == -1) {
        return 0;
    } else {
        return Queue[front];
    }
}

void Display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << Queue[i] << " ";
        }
        cout << endl;
    }
} // **Fix: Added missing closing brace for Display function**

int main() {
    insert(); 
    insert();
    insert();
    insert();
    insert();
    // Delete();
    
    y = Peek();
    if (y == 0) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Front element is: " << y << endl;
    }
    Display();

    return 0; // **Fix: Moved return statement outside the if-else block**
}
