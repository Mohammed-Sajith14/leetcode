class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int flag = 0;
        int min = 27;
        char ans = letters[0];
        for(int i = 0;i<letters.length;i++)
        {
            if(letters[i]>target)
            {
                int diff = letters[i] - target;
                if(diff<min)
                {
                    min = diff;
                    ans = letters[i];
                    flag = 1;
                }
            }
        }
        return ans;
    }
}