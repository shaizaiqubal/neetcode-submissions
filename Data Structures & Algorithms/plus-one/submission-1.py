class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        total = ""
        for i in digits:
            total += str(i)
        total = int(total)+1
        return [ i for i in str(total)]
        
            