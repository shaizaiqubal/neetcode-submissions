class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        for i in range(1,len(prices)):
            sp = prices[i]
            for j in range(0,i):
                bp = prices[j]
                if sp-bp > profit:
                    profit = sp-bp
        return profit
