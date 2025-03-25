class Solution(object):
    def maxCount(self, banned, n, maxSum):
        banned_set = set(banned)
        num = 0
        tot = 0
        
        for i in range(1, n + 1):
            if i not in banned_set and tot + i <= maxSum:
                num = num + 1
                tot = tot + i
            elif tot + i > maxSum:
                break
        
        return num
