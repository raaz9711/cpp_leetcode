// arrays as parameters
#include<iostream>

using  namespace std;
void printArray(int arg[],int length){

for(int i = 0; i < length; i++){
    cout <<arg[i]<<endl;
}

}

int main() {

int fa[] = {5,10,15};
int sa[] = {2,4,6,8,10};

printArray(fa,3);
printArray(sa,5);

return 0;    
}