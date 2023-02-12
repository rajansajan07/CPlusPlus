#include <iostream>
#include <conio.h>

class Stack
{
   private:
      static const int MAX_SIZE = 100;
      int stack[MAX_SIZE];
      int top;
   public:
      Stack()
      {
         top = -1;
      }
      void push(int data)
      {
         if (top == MAX_SIZE - 1)
         {
            std::cout << "Stack overflow" << std::endl;
            return;
         }
         stack[++top] = data;
      }
      void pop()
      {
         if (top == -1)
         {
            std::cout << "Stack underflow" << std::endl;
            return;
         }
         top--;
      }
      int poll()
      {
         if (top == -1)
         {
            std::cout << "Stack underflow" << std::endl;
            return -1;
         }
         return stack[top--];
      }
      void display()
      {  
         if (top == -1) 
         {
            std::cout << "Stack underflow" << std::endl;
            return;
         }
         for (int i = top; i >= 0; i--) {
            std::cout << stack[i] << std::endl;
         }
      }
      int peek()
      {
         if (top == -1)
         {
            std::cout << "Stack underflow" << std::endl;
            return -1;
         }
         return stack[top];
      }
};
int main()
{
   Stack stack = Stack();
   stack.push(4);
   stack.push(3);
   stack.push(2);
   stack.push(1);

   std::cout << stack.peek() << std::endl;
   stack.display();


   return 0;
}