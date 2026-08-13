class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
        return false;
        }
        unordered_map<int,char> hash_s;
        unordered_map<int,char> hash_t;
        for(int i =0; i<s.length(); i++){
            hash_s[s[i]]++;
            hash_t[t[i]]++;
        }
        for(auto& [item,count]:hash_s){
            if(hash_s[item]!=hash_t[item]){
                return false;
            }
        }
        return true;
    }
    
};
