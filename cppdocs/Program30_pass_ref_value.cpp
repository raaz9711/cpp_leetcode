//class templates
#include<iostream>
#include<string>
using namespace std;

void passbyref(int &a, int &b){
    int temp = a;
    a =b;
    b= temp;
}
void passbyvalue(int a,int b){
   int  temp = a;
         a =b;
    b= temp;
}

int main() {

int a = 2; int b = 3;
passbyvalue(a,b);
cout<<a <<" "<< b<<endl;

int c = 5, d= 10;

passbyref(c,d);

cout<<c << " "<<d<<endl;


return 0;
}

