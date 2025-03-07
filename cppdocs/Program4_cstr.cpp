#include<iostream>
#include<string>

using namespace std;

int main() {

char myncts[] = "some text";

string mystring = myncts;

cout<<mystring;

cout<<mystring.c_str();


return 0;
}