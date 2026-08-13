class Solution:
    def isPalindrome(self, s: str) -> bool:
        l=0
        r=len(s)-1
        while l<=r:
            c=0
            if not s[l].isalnum():
                l+=1
                c+=1
            if not s[r].isalnum():
                r-=1
                c+=1
            if c==0:
                if s[l].lower()!=s[r].lower():
                    return False
                l+=1
                r-=1
        return True

