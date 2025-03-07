#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <unordered_set>

using namespace std;

// class Solution {
// public:

// bool compare(string a, string b){
//     cout<<a<<"--"<<b<<endl;
//     std::sort(a.begin(),a.end());
//     std::sort(b.begin(),b.end());
//     return a == b;
// }
vector<vector<string>> groupAnagrams(vector<string>& strs) {
vector<vector<string>> ret;
unordered_map<string,vector<string>> kv;
for(string& s:strs){
             string v = s;
             std::sort(v.begin(),v.end());
                    kv[v].push_back(s);
}
for(auto &element : kv){
    ret.push_back(element.second);
}
return ret;
}
// vector<vector<string>> groupAnagrams(vector<string>& strs) { 
//     vector<vector<string>> ret;
//     unordered_map<string,int> kv;
//  for(int i = 0 ; i < strs.size(); i++){
//           string v = strs[i];
//             std::sort(v.begin(),v.end());
//                     if(kv.find(v) == kv.end())
//                     {
//                         int c = kv.size();
//                         kv[v] = c;
//                         ret.push_back(vector<string>{strs[i]});
//                     }
//                     else{
//                         int idx = kv[v];
//                         ret[idx].push_back(strs[i]);
//                     }

//  }
// return ret;
// }

    // vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     vector<vector<string>> ret;
    //     unordered_set<string> uniq;
    //     for(int i = 0 ; i < strs.size(); i++){
    //         string v = strs[i];
    //         std::sort(v.begin(),v.end());
    //                 if(uniq.find(v) == uniq.end())
    //                 {
    //                     uniq.insert(v);
    //                     string val = strs[i];
    //                     vector<string> v;
    //                     v.push_back(val);
    //                                 for(int j = 0; j < strs.size();j++){
    //                                         if(i != j){
    //                                                     if(compare(strs[i],strs[j])){
    //                                                     v.push_back(strs[j]);
    //                                                     }     
    //                                         }
    //                                 }
    //                     ret.push_back(v);
    //                 }
            
    //     }
     
    //     return ret;

    // }
   void groupAnagrams2(vector<vector<string>>& vec) {
       for (int i = 0; i < vec.size(); i++)
{
       cout<<"===== "<<i<<endl;

    for (int j = 0; j < vec[i].size(); j++)
    {
        cout << vec[i][j] <<endl;;
    }
}
    }

    
// };

int main() {
string s[] = {"","tea","tan","ate","nat","bat"};


 vector<string> strs(s,s+6) ;
 vector<vector<string>>  f = groupAnagrams(strs);
groupAnagrams2(f);
//cout<<compare(s[0],s[1]) <<endl;
//cout<<compare(s[2],s[1]) <<endl;

    return 0;
}