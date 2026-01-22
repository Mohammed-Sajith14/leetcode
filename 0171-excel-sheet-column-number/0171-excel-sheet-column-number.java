class Solution {
    public int titleToNumber(String columnTitle) {
        int power = 0;
        int res = 0;
        for(int i=columnTitle.length()-1; i>=0;i--)
        {
            res = (int)(res + Math.pow(26,power)*(columnTitle.charAt(i)-'A'+1));
            power++;
        }
        return res;
    }
}