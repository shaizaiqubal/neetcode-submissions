class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> cat=nums;
        cat.insert(cat.end(),nums.begin(),nums.end());
        return cat;
    }
};