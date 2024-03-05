#include "stack.h"
#include "single_linked_list.h"
#include <iostream>

using namespace std;

int main() {

  // Create a Single_Linked_List object
  Single_Linked_List linked_list;

  // Test push_front and push_back
  linked_list.push_front(3);
  linked_list.push_front(2);
  linked_list.push_front(1);
  linked_list.push_back(4);
  linked_list.push_back(5);

  // Display the linked list
  std::cout << "Linked List: ";
  linked_list.display();
  cout << endl;

  // Test pop_front
  linked_list.pop_front();
  std::cout << "After pop_front: ";
  linked_list.display();
  cout << endl;

  // Test pop_back
  linked_list.pop_back();
  std::cout << "After pop_back: ";
  linked_list.display();
  cout << endl;

  // Test front and back
  std::cout << "Front element: " << linked_list.front() << std::endl;
  cout << endl;
  std::cout << "Back element: " << linked_list.back() << std::endl;
  cout << endl;

  // Test empty
  std::cout << "Is the list empty? " << (linked_list.empty() ? "Yes" : "No") << std::endl;
  cout << endl;

  // Test insert
  linked_list.insert(1, 10); // Insert at index 1
  std::cout << "After inserting 10 at index 1: ";
  linked_list.display();
  cout << endl;

  linked_list.insert(0, 100); // Insert at index 0
  std::cout << "After inserting 100 at index 0: ";
  linked_list.display();
  cout << endl;

  linked_list.insert(5, 50); // Insert at index 5 (beyond the end)
  std::cout << "After inserting 50 at index 5: ";
  linked_list.display();
  cout << endl;

  // Test remove
  size_t remove_index = 2;
  if (linked_list.remove(remove_index)) {
      std::cout << "After removing element at index " << remove_index << ": ";
      linked_list.display();
    cout << endl;
  } else {
      std::cout << "Error: Cannot remove element at index " << remove_index << ". Index out of bounds." << std::endl;
    cout << endl;
  }

  // Test find
  
    int find_item = 101;
  size_t find_result = linked_list.find(find_item);
  if (find_result < linked_list.size()) {
      std::cout << "Item " << find_item << " found at index " << find_result << std::endl;
    cout << endl;
  } else {
      std::cout << "Item " << find_item << " not found in the list" << std::endl;
    cout << endl;
  }
  
  /*
    //Create a stack object
    Stack myStack;

  // Example usage
      myStack.push(1);
      myStack.printStack();
      cout <<endl;
      myStack.push(2);
      myStack.printStack();
      cout <<endl;
      myStack.push(3);
      myStack.printStack();
      cout <<endl;

      //Check top element
      if (!myStack.isEmpty()) {
          int topElement = myStack.top();
          std::cout << "Top element: " << topElement << std::endl;
          cout <<endl;
      } else {
          std::cout << "Stack is empty. Cannot get top element." <<std::endl;
          cout <<endl;
      }

  // Check the average value
  if (!myStack.isEmpty()) {
      double averageValue = myStack.calculateAverage();
      std::cout << "Average value: " << averageValue << std::endl;
      cout <<endl;
  } else {
      std::cout << "Stack is empty. Cannot calculate average." << std::endl;
      cout <<endl;
  }

      //Removes items from the stack
      myStack.pop();
      myStack.printStack();
      cout <<endl;
      myStack.pop();
      myStack.printStack();
      cout <<endl;
      myStack.pop();
      myStack.printStack();
      cout <<endl;
     
      // Trying to pop from an empty stack
      myStack.pop(); 
      myStack.printStack();

  */

      return 0;
  }
