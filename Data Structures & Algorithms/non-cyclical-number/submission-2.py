class Solution:

    def isHappy(self, n: int) -> bool:
        cycle, z = [], 0

        while n not in cycle and n != 1:
            cycle.append(n)
            for dig in str(n):
                z += int(dig)**2
            n, z = z, 0
        
        if n != 1:
            return False
        return True