//class templates
#include<iostream>
using namespace std;

template<class T>
class mypair{
    T a,b;
    public :
    mypair(T first,T second){
        a = first;
        b = second;
    }
    T getmax();
};
template<class T>
T mypair<T> :: getmax() {
    T retval;
    retval = a > b ? a : b;
return retval;
}

int main() {
mypair<int> myobject(100,75);
cout<<myobject.getmax() << endl;

mypair<char> myobject1('a','b');
cout<<myobject1.getmax() << endl;


return 0;
}

