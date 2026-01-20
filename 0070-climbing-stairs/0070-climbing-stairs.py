class Solution(object):
    def climbStairs(self, n):
        a = 1
        b = 2
        for i in range(1,n-1):
            temp = a
            a = b
            b = temp + b
        if n==1:
            return 1
        return b