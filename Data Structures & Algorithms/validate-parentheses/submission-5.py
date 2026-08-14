class Solution:
    def isValid(self, s: str) -> bool:
        hash = {')':'(','}':'{',']':'['}
        last = ['']
        for i in range(len(s)):
            if s[i] in hash:
                
                if hash[s[i]]==last[-1]:
                    last.pop()
                else:
                    return False
                
            else:
                last.append(s[i])
            

        if len(last)>1:
            return False
        else:
            return True