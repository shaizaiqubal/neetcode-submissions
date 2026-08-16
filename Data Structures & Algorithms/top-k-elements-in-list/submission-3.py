class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hash = {}
        arr =[]
        for i in nums:
            hash[i]=hash.get(i,0)+1
        for n,c in hash.items():
            arr.append([c,n])
        arr.sort(reverse=True)
        ans = [x[1] for x in arr]
        return ans[:k]

