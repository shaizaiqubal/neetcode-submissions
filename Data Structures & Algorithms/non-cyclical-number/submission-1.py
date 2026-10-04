class Solution:

    def isHappy(self, n: int) -> bool:
        nums, x = [], n
        while True:
            num = 0
            for i in str(x):
                num+= int(i)**2
            if num == 1:
                return True
            elif num in nums:
                return False
            else:
                nums.append(num)
                x = num