#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <unordered_set>

using namespace std;
// 

 vector<string> findWords(vector<string>& words) {
    vector<string> ret;
        unordered_set<char> row1{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p','Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
        unordered_set<char> row2{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l','A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
        unordered_set<char> row3{ 'z', 'x', 'c', 'v', 'b', 'n', 'm','Z', 'X', 'C', 'V', 'B', 'N', 'M'};
bool flag ;
        for(string& x : words){
            if(row1.find(x[0]) != row1.end()){
             flag = true;
              for(char& y : x)
                {
                    if(row1.find(y) == row1.end()){
                       flag = false;
                        break;
                    }
                }

            }
            else if(row2.find(x[0]) != row2.end()){
             flag = true;
              for(char& y : x)
                {
                    if(row2.find(y) == row2.end()){
                       flag = false;
                        break;
                    }
                }

            }
            else{
                  flag = true;
              for(char& y : x){
                
                    if(row3.find(y) == row3.end()){
                       flag = false;
                        break;
                    }
                }
            }

            if(flag){
                ret.push_back(x);
            }
        }
    

return  ret;
    }

int main() {

   string s[] = {"qaz"};


 vector<string> strs(s,s+ sizeof(s) / sizeof(string));

 vector<string> ret = findWords(strs);

 for(int i = 0; i < ret.size(); i++) {
    cout<<ret[i]<<endl;
        }

    return 0;
}