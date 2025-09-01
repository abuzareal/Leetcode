class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        res = 0
        for i in nums:
            num = i
            count = 0
            while num != 0:
                count += 1
                num = num//10
            if count % 2 == 0:
                res += 1
        
        return res
                
        