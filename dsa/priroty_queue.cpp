// Priority queue
// Priority queues are a type of container adaptors, specifically designed such that its first element is always the greatest of the elements it contains, according to some strict weak ordering criterion.

// This context is similar to a heap, where elements can be inserted at any moment, and only the max heap element can be retrieved (the one at the top in the priority queue).

// Priority queues are implemented as container adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container, providing a specific set of member functions to access its elements. Elements are popped from the "back" of the specific container, which is known as the top of the priority queue.


// constructing priority queues
#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <vector>         // std::vector
#include <functional>     // std::greater

class mycomparison
{
  bool reverse;
public:
  mycomparison(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (const int& lhs, const int&rhs) const
  {
    if (reverse) return (lhs>rhs);
    else return (lhs<rhs);
  }
};

int main ()
{
  int myints[]= {10,60,50,20};

  std::priority_queue<int> first;
  std::priority_queue<int> second (myints,myints+4);
  std::priority_queue<int, std::vector<int>, std::greater<int> >
                            third (myints,myints+4);
  // using mycomparison:
  typedef std::priority_queue<int,std::vector<int>,mycomparison> mypq_type;

  mypq_type fourth;                       // less-than comparison
  mypq_type fifth (mycomparison(true));   // greater-than comparison


  //push pop top and min


priority_queue<int> mypq;

mypq.push(30);
mypq.push(10);
mypq.push(20);
mypq.push(40);
mypq.push(310);

 cout << "Popping out elements...";
  while (!mypq.empty())
  {
     cout << ' ' << mypq.top();
     mypq.pop();
  }
  cout << '\n';



//min type

priority_queue<int,vector<int>,greater<int>> minpq;

minpq.push(30);
minpq.push(10);
minpq.push(20);
minpq.push(40);
minpq.push(310);

 cout << "Popping out elements...";
  while (!minpq.empty())
  {
     cout << ' ' << minpq.top();
     minpq.pop();
  }
  cout << '\n';


  return 0;
}

