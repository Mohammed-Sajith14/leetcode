class Solution(object):
    def findContentChildren(self, g, s):
        num = 0
        g.sort()
        s.sort()
        i = 0
        j = 0
        while i<len(g) and j<len(s):
            if s[j]>=g[i]:
                num = num + 1
                i = i+1
            j = j+1
        return num
        