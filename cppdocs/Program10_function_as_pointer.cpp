//pointer to function
#include<iostream>
using namespace std;

int addition(int a,int b){
    return a+b;
}
int subtraction(int a,int b){
    return a-b;
}
int operation(int x,int y, int(*functioncall)(int,int)){
    int g;
    g = (*functioncall)(x,y);

    return g;
}

int main() {
int m,n;

int(*minus)(int,int)= subtraction;

m = operation(5,7,addition);

n = operation(20,m,minus);

cout<<m<<" , "<<n<<endl;

return 0;
}