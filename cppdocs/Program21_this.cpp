//overloading operators example
#include<iostream>
using namespace std;

class Dummy{
    public:
    int x = 10;
    Dummy(){};
    bool isitme(Dummy& param);
};
bool Dummy :: isitme(Dummy &param){
    cout<<param.x<<"ddd"<<&param<<endl;
    if(&param == this) return true;
    else return false;
}        



int main() {

Dummy a;

Dummy* b = &a;

if(b->isitme(a))
 cout<<"yes, &a is b\n";

return 0;
}

