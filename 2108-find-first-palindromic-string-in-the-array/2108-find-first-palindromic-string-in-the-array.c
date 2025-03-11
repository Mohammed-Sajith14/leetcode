char* firstPalindrome(char** words, int wordsSize) {
    char arr[100];
    int n;
    int count;
    for(int i=0;i<wordsSize;i++)
    {
        int left = 0;
        int right = strlen(words[i])-1;
        int ispal = 1;
        while(left<right)
        {
            if(words[i][left] != words[i][right])
            {
                ispal = 0;
                break;
            }
            left++;
            right--;
        }
        if(ispal)
        {
            return words[i];
        }
    }
    return "";
    
}