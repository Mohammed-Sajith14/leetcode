class Solution(object):
    def minElement(self, nums):
        sums=[]
        min = nums[0]
        for num in nums:
            sum = 0
            while num!=0:
                last = num%10
                sum = sum+last
                num = num/10
            if(sum<min):
                min = sum
        return min
        