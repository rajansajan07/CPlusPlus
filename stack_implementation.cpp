// Program to implement stack using linked list
#include <iostream>
#include <conio.h>

class Node 
{
   public:
      int data;
      Node* next;
   
      Node(int data) 
      {
         this->data = data;
         this->next = nullptr;
      }
};

class Stack
{
   public:
      Node* top;
      Stack()
      {
         top = nullptr;
      }
      void push(int data)
      {
         Node* newNode = new Node(data);
         newNode->next = top;
         top = newNode;
      }
      void pop()
      {
         Node* temp = this->top;
         this->top = this->top->next;
         delete temp;
      }
      int peek()
      {
         if (top == nullptr)
         {
            std::cout << "Emtpy stack" << std::endl;
            return -1;
         }
         return this->top->data;
      }
      int poll()
      {
         if (top == nullptr)
         {
            std::cout << "Empty stack" << std::endl;
            return -1;
         }
         Node* temp = this->top;
         int value = temp->data;

         this->top = this->top->next;
         delete temp;
         return value;
      }
      bool isEmpty()
      {
         return this->top == nullptr;
      }
      void display()
      {
         Node* current = this->top;
         while (current != nullptr)
         {
            std::cout << current->data << "\n";
            current = current->next;
         }
      }
};
int main()
{
   Stack stack = Stack();
   stack.push(4);
   stack.push(3);
   stack.push(2);
   stack.push(1);

    
   stack.pop();

   std::cout << stack.peek() << std::endl;

   

   return 0;
}