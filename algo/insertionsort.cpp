
#include <iostream>

using namespace std;

void print(int a[],int n){
    for(int i = 0; i < n; i++) {
    cout <<a[i]  <<' ';
    }
    cout<<endl;
}
void insertionsort(int a[],int n){
    int i,j ,tmp;
    for(i = 1; i < n; i++){
        tmp = a[i];
        cout<<tmp<<" index at "<<i<<endl;
        j = i - 1;
        while(j >= 0 && a[j] > tmp){
            a[j+1] = a[j];
            print(a,n);
            j = j - 1;
        }
        a[j+1] = tmp;
        print(a,n);
    }
    cout<<"final"<<endl;
    print(a,n);
}

int main()
{
    int a[] = {1,1,0,2};
    int n = sizeof(a) / sizeof(a[0]);
    print(a,n);
    cout<<"Array sort start here"<<endl;
    insertionsort(a,n);
    print(a,n);

    return 0;
}