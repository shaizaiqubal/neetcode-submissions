class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero_count=0;
        vector<int> res;
        for(auto& num: nums){
            if(num==0){
                zero_count++;
            }
        }
        if(zero_count>1){
            return vector<int> (nums.size(),0);
        }

        int prod = 1;
        for(auto& num: nums){
            if(num==0){
                ;
            }
            else{
                prod = prod*num;
            }
        }
        for(auto& num:nums){
            if(zero_count==0){
                res.push_back(prod/num);
            }
            else{
                if(num==0){
                    res.push_back(prod);
                }
                else{
                    res.push_back(0);
                }
            }
        }

        return res;
    }
};
