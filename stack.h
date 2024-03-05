//These lines ensure that if the header file is included multiple times in the same translation unit (source file), its content is processed only once. 
#ifndef STACK_H 
#define STACK_H

#include <vector>

 class Stack {
 private:
     std::vector<int> data;

  public:
      // Function to insert an element onto the stack
      void push(int value);
  
      // Function to remove an element from the stack
      void pop();
  
      // Function to check if the stack is empty
      bool isEmpty() const;

      // Function to get the top element of the stack    
      int top() const;

      // Function to calculate the average value of stack elements
      double calculateAverage() const;

      // Function to print the content of the stack
      void printStack() const;
  };

#endif // STACK_H
