#include "stack.h"
#include <iostream>

using namespace std;

// Function to insert an element onto the stack
void Stack::push(int value) {
    data.push_back(value);
    std::cout << "Insert: " << value << std::endl;
}

// Function to remove an element from the stack
void Stack::pop() {
    if (!isEmpty()) {
        int poppedValue = data.back();
        data.pop_back();
        std::cout << "Removed: " << poppedValue << std::endl;
    } else {
        std::cout << "Stack is empty. Cannot remove." << std::endl;
    }
}

bool Stack::isEmpty() const {
    return data.empty();
}

// Function to get the top element of the stack
int Stack::top() const {
    if (!isEmpty()) {
        return data.back();
    } else {
        cerr << "Stack is empty. Cannot get top element." << endl;

        // Exit the program with a failure status if an error occurs
        exit(EXIT_FAILURE);
    }
}

// Function to calculate the average value of stack elements
double Stack::calculateAverage() const {
    if (!isEmpty()) {
        int sum = 0;
        for (int element : data) {
            sum += element;
        }

        // Convert the sum to double before division to ensure accurate average
        return static_cast<double>(sum) / data.size();
    } else {
        cerr << "Stack is empty. Cannot calculate average." << endl;

        // Exit the program with a failure status if an error occurs
        exit(EXIT_FAILURE);
    }
}

// Function to print the content of the stack
void Stack::printStack() const {
    if (!isEmpty()) {
        cout << "Stack content: ";
        for (int element : data) {
            cout << element << " ";
        }
        cout << endl;
    } else {
        cout << "Stack is empty." << endl;
    }
}
