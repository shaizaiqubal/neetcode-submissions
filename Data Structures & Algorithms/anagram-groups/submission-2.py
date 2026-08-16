class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hash = {}
        for i in strs:
            k = ''.join(sorted(i))
            hash.setdefault(k, []).append(i)

        return list(hash.values())