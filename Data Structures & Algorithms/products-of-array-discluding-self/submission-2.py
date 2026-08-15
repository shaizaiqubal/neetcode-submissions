class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res=[]
        prod = 1
        c=0
        for i in nums:
            if i == 0:
                c+=1
        for i in range(len(nums)):
            if nums[i]==0:
                continue
            else:
                prod *= nums[i]
        for i in nums:
            if c==0:
                res.append(prod//i)
            elif c>1:
                res.append(0)
            else:
                if i == 0:
                    res.append(prod)
                else:
                    res.append(0)
        return res