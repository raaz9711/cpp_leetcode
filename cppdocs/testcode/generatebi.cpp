//class templates
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void bis(vector<string>&s,string ch,int n,int i){
   if(ch.size() == n) {
    s.push_back(ch);
   }
   else{
    bis(s,ch+"0",n,i+1);
    bis(s,ch+"1",n,i+1);
   }
}


int main() {
vector<string> s;

bis(s,"",2,0);

for(int i = 0; i < s.size(); i++){
        cout<<s[i]<<endl;
    }
return 0;
}

