// LIFO stack
// Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container.

// stacks are implemented as container adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container, providing a specific set of member functions to access its elements. Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.



// constructing stacks
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque

int main ()
{
  std::deque<int> mydeque (3,100);          // deque with 3 elements
  std::vector<int> myvector (2,200);        // vector with 2 elements

  std::stack<int> first;                    // empty stack
  std::stack<int> second (mydeque);         // stack initialized to copy of deque

  std::stack<int,std::vector<int> > third;  // empty stack using vector
  std::stack<int,std::vector<int> > fourth (myvector);

  std::cout << "size of first: " << first.size() << '\n';
  std::cout << "size of second: " << second.size() << '\n';
  std::cout << "size of third: " << third.size() << '\n';
  std::cout << "size of fourth: " << fourth.size() << '\n';

  //Insert and pop and top

    stack<int> mystack;                    // empty stack
for (int i=0; i<5; ++i) mystack.push(i);
cout << "Popping out elements...";
  while (!mystack.empty())
  {
     cout << ' ' << mystack.top();
     mystack.pop();
  }
  cout << '\n';

  return 0;
}