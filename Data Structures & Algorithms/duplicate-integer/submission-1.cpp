class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(auto& i: nums){
            if(hash.find(i)!=hash.end()){
                return true;
            }
            hash[i]++;
        }
        return false;
    }
};