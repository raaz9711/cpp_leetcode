// Set
// Sets are containers that store unique elements following a specific order.

// In a set, the value of an element also identifies it (the value is itself the key, of type T), and each value must be unique. The value of the elements in a set cannot be modified once in the container (the elements are always const), but they can be inserted or removed from the container.

// Internally, the elements in a set are always sorted following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).

// set containers are generally slower than unordered_set containers to access individual elements by their key, but they allow the direct iteration on subsets based on their order.

// Sets are typically implemented as binary search trees.

// constructing sets
#include <iostream>
#include <set>

bool fncomp (int lhs, int rhs) {return lhs<rhs;}

struct classcomp {
  bool operator() (const int& lhs, const int& rhs) const
  {return lhs<rhs;}
};

int main ()
{
  std::set<int> first;                           // empty set of ints

  int myints[]= {10,20,30,40,50};
  std::set<int> second (myints,myints+5);        // range

  std::set<int> third (second);                  // a copy of second

  std::set<int> fourth (second.begin(), second.end());  // iterator ctor.

  std::set<int,classcomp> fifth;                 // class as Compare

  bool(*fn_pt)(int,int) = fncomp;
  std::set<int,bool(*)(int,int)> sixth (fn_pt);  // function pointer as Compare

  // = operator
    int myints[]={ 12,82,37,64,15 };
  std::set<int> first (myints,myints+5);   // set with 5 ints
  std::set<int> second;                    // empty set

  second = first;                          // now second contains the 5 ints
  first = std::set<int>();                 // and first is empty

  std::cout << "Size of first: " << int (first.size()) << '\n';
  std::cout << "Size of second: " << int (second.size()) << '\n';

  // Insert

    std::set<int> myset;
  std::set<int>::iterator it;
  std::pair<std::set<int>::iterator,bool> ret;

  // set some initial values:
  for (int i=1; i<=5; ++i) myset.insert(i*10);    // set: 10 20 30 40 50

  ret = myset.insert(20);               // no new element inserted

  if (ret.second==false) it=ret.first;  // "it" now points to element 20

  myset.insert (it,25);                 // max efficiency inserting
  myset.insert (it,24);                 // max efficiency inserting
  myset.insert (it,26);                 // no max efficiency inserting

  int myints[]= {5,10,15};              // 10 already in set, not inserted
  myset.insert (myints,myints+3);

  std::cout << "myset contains:";
  for (it=myset.begin(); it!=myset.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  //insert and traverse by auto
  set<int> st;

for(int i = 1; i < 6; i++){
    st.insert(i*i);
}
for(auto s :st) {
    cout<<s<<' ';
}
cout<<endl;

st.insert(25);
st.insert(16);
st.insert(91);

for(auto s :st) {
    cout<<s<<' ';
}
cout<<endl;
    return 0;

  return 0;
}