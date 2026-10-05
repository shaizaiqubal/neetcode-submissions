class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        total = int("".join(str(digit)for digit in digits))+1
        return [ i for i in str(total)]
        
            