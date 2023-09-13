// constructing vectors
#include <iostream>
#include <vector>

int main ()
{
    vector<int> first;   //empty vectors for ints
    vector<int> second(4,100); //four ints with the value of four hundred
    vector<int> third(second.begin(),second.end()); // iterating through second
    vector<int> fourth(third); // a copy of third

    // the iterator constructor can also be used to construct from arrays:
    int myints[] = {16,2,77,29};

    vector<int> fifth (myints,myints + sizeof(myints) / sizeof(int));

    //loop through fifth
    for(vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
        cout<<' '<<*it;
    cout<<"\n";    

        for(auto it = fifth.begin(); it != fifth.end(); ++it)
        cout<<' '<<*it;
    cout<<"\n";    


        for(auto it : fifth)
        cout<<' '<<it;

//youtube

    vector<pair<int,int>> sixth(5,{1,2});
    
    
    //loop through fifth
    for(vector<pair<int,int>>::iterator it = sixth.begin(); it != sixth.end(); ++it)
        cout<<' '<<(*it).first;
    cout<<"\n";    

//erase

    vector<int> arr;
    
    for(int i = 1; i < 11; i++){
        arr.push_back(i * i);
    }
    
    
    for(auto a : arr){
        cout << a <<' ';
    }
        cout<<endl;
    
    arr.erase(arr.begin() + 5);
    
    for(auto a : arr){
        cout << a <<' ';
    }
        cout<<endl;   
    
        arr.erase(arr.begin(),arr.begin() + 3);
    
    for(auto a : arr){
        cout << a <<' ';
    }
        cout<<endl;       

//Insert

 vector<int> myvector (3,100);
 vector<int>::iterator it;
 
 for(auto m : myvector){
     cout << m <<' ';
 }
    cout<<endl;
  it = myvector.begin();
  it = myvector.insert ( it , 200 );
  
   for(auto m : myvector){
     cout << m <<' ';
 }
    cout<<endl;
    
    it = myvector.begin();
    
    vector<int> anothervector(2,400);
    myvector.insert (it+2,anothervector.begin(),anothervector.end());
    
    for(auto m : myvector){
     cout << m <<' ';
 }
    cout<<endl;

//swap ,pop_back

vector<int> v1 = {1,2};
    vector<int> v2 = {3,4};
    
    for(auto i : v1){
        cout << i <<' ';
    }
    cout<<endl;
    for(auto i : v2){
        cout << i <<' ';
    }
        cout<<endl;
    v1.swap(v2);
    
    for(auto i : v1){
        cout << i <<' ';
    }
    cout<<endl;
    for(auto i : v2){
        cout << i <<' ';
    }
        cout<<endl;
    
    v1.pop_back();
    
        for(auto i : v1){
        cout << i <<' ';
    }
    cout<<endl;
    
    //empty ,clear

        v2.clear();
    
    if(v2.empty()){
              cout << "v2 is empty" <<' ';  
    }
    for(auto i : v2){
        cout << i <<' ';
    }
    cout<<endl;


    return 0;
}