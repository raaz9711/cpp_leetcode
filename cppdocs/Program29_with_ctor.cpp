//class templates
#include<iostream>
#include<string>
using namespace std;

class Example3 {
    string data;
    public :
        Example3(const string &str) : data(str){}
        Example3(){}
        const string& content() const{return data;}
};

int main() {
Example3 foo;
Example3 bar("Example");

cout<<foo.content()<<"bar's content :"<<bar.content() << '\n';

return 0;
}

