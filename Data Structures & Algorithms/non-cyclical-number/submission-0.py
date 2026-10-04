class Solution:

    def isHappy(self, n: int) -> bool:
        def square_sum(n: int) -> int:
            sum = 0
            while n > 0 :
                digit = n % 10
                sum += digit * digit
                n = n//10
            return sum

        nums = []
        x = n
        while True:
            num = square_sum(x)
            if num == 1 :
                return True
            elif num in nums:
                return False
            else:
                nums.append(num)
                x = num