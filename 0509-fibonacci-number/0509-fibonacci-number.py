class Solution(object):
    def fib(self, n):
        a = 0
        b = 1
        c = 0
        if n==0:
            return c
        elif n==1:
            return 1
        for i in range(n-1):
            c = a + b
            a = b
            b = c
        return c
        