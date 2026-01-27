import java.util.*;
class Solution {
    public int maxArea(int[] height) {
        int a = 0;
        int l = height.length;
        int b = l-1;
        int max = 0;
        while(a<b)
        {
            int small = Math.min(height[a],height[b]);
            int dis = b - a;
            if(small*dis>max)
            {
                max = small*dis;
            }
            if(height[a]<height[b])
            {
                a++;
            }
            else
            {
                b--;
            }
        }
        return max;
    }
}