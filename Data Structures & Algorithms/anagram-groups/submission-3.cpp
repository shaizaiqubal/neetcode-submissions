class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> ans;
       unordered_map<string,vector<string>> hash;
       for(auto& str: strs){
        string k = str;
        sort(k.begin(),k.end());
        hash[k].push_back(str);
       }
       for(auto& [key,value]: hash){
        ans.push_back(value);
       }
       return ans;
    }
};
