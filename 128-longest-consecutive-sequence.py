class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s = set(nums)
        result = 0
        for num in nums:
            count, up, down = 1, num + 1, num - 1
            while up in s:
                s.remove(up)
                count += 1
                up += 1
            while down in s:
                s.remove(down)
                count += 1
                down -= 1
                
            result = max(count, result)
            
        return result