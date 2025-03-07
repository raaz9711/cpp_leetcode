// array example 
#include<iostream>
using namespace std;

int foo[] = {1,2,3,4,5};
int n, result = 0;

int main(){
for(int n = 0 ; n < 5; n++){
    result += foo[n];
}

cout<<result<<endl;

return 0;
}