//constructor on const object
#include<iostream>
using namespace std;

class MyClass{
    int x;
    public:
    MyClass(int val) : x(val) {}
    const int& get() const {return x;}
};

void print(const MyClass &arg){
    cout<<arg.get()<<endl;
}

int main() {
const MyClass foo(10);
print(foo);
return 0;
}

