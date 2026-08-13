class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(auto i: nums){
            if(hash.find(i)!=hash.end()){
                hash[i] = hash[i]+1;
            }
            else{
                hash[i] = 1;
            }
        }
        for(auto& [item,count]: hash){
            if(count>1){
                return true;
            }
        }
        return false;
    }
};