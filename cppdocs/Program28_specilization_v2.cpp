//class templates
#include<iostream>
#include<string>
using namespace std;

template<class T>
class mycontainer{
   public : T element;
    public :
    mycontainer(T arg){
        element = arg;
    }

    T increase() {return ++element;}
};
int main() {
mycontainer<int> myint(7);
mycontainer<float> myfloat(7.14);
mycontainer<char> mychar('c');

myint.increase();
cout<<myint.element<<endl;

myfloat.increase();
cout<<myfloat.element<<endl;


mychar.increase();
cout<<mychar.element<<endl;

return 0;
}

