// Pointer as arguments:
#include<iostream>
using namespace std;

void incremental_all(int *start,int *stop){
    int *current = start;
    while(current != stop){
        ++(*current);
        ++current;
    }
}
void print_all(const int *start,const int *stop){
const int *current = start;

while(current != stop){
    cout<<*current<<",";
    current++;    
}
cout<<endl;

}

int main() {
int numbers[] = {10,20,30};
print_all(numbers,numbers+3);
incremental_all(numbers,numbers+3);
print_all(numbers,numbers+3);



return 0;
}