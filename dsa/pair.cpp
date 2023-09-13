
#include <utility>      // std::pair, std::make_pair
#include <string> 
#include <iostream>

using namespace std;


int main()
{
    // default construtor
    pair<string,double> product1;   
    //value init
    pair<string,double> product2("tomatoes",2.30);
    //copy construtor
    pair<string,double> product3(product2);
    product1 = make_pair("lightbuld",4.25);
    
    product2.first = "shoes";
    product2.second = 24.45;
    
    cout<<"price of "<<product1.first << " is $ " <<product1.second<<"\n";
    cout<<"price of "<<product2.first << " is $ " <<product2.second<<"\n";
    cout<<"price of "<<product3.first << " is $ " <<product3.second<<"\n";

    //youtube

    pair <int,int> p = {1,2};
    
    cout<<"first"<<p.first << " second" <<p.second<<"\n";
    
    
    pair <int,pair<int,string>> p1 = {1,{2,"raj"}};


    cout<<"first "<<p1.first << " second second " <<p1.second.second<< " second first " <<p1.second.first<<"\n";
    
        pair <int,int> arr[] = {{1,2},{3,4},{5,6}};
    
    cout<<"arr index 1 first "<<arr[1].first <<"\n";

    

    return 0;
}
