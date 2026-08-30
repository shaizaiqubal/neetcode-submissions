class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

    unordered_map<int,int> hash;

    for(int i = 0; i<numbers.size();i++){
        int diff = target - numbers[i];
        if(hash.find(diff) != hash.end()){
            return {hash[diff]+1,i+1};
        }
        hash[numbers[i]]=i;

    }  
    return {};  
    }
};
