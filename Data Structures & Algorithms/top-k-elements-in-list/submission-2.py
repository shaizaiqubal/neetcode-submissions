class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hash = {}
        for i in nums:
            hash[i]=hash.get(i,0)+1
        items = list(hash.items())
        sitems= sorted(items,key=lambda x:x[1],reverse = True)
        ans = [x[0] for x in sitems]
        return ans[:k]

