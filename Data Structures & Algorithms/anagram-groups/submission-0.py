class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        import collections
        res = collections.defaultdict(list)
        for i in strs:
            count = [0] *26
            for s in i:
                count[ord(s)-ord('a')]+=1
            res[tuple(count)].append(i)
        return list(res.values())