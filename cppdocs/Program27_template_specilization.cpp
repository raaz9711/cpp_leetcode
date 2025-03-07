//class templates
#include<iostream>
#include<string>
using namespace std;

template<class T>
class mycontainer{
    T element;
    public :
    mycontainer(T arg){
        element = arg;
    }

    T increase() {return ++element;}
};
// class template specilization

template<>
class mycontainer<char>{
    char element;
    public :
    mycontainer(char arg){element = arg;}
    char uppercase()
    {
        if(element >= 'a' && element <= 'z'){
            element += 'A' - 'a';
            return element;
        }
        return element; 
    }
};

int main() {
mycontainer<int> myint(7);
mycontainer<float> myfloat(7.14);
mycontainer<char> mychar('c');

cout<<myint.increase()<<endl;
cout<<myfloat.increase()<<endl;
cout<<mychar.uppercase()<<endl;



return 0;
}

