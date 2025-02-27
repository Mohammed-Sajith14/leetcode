int lengthOfLastWord(char* s) 
{
    int len = strlen(s);
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            flag = 1;
        }
    }
    if(flag==0)
    {
        int count=0;
        for(int i=0;i<len;i++)
        {
            count++;
        }
        return count;
    }
    else
    {
        int count1=0;
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]==' ' && count1==0)
            {
                continue;
            }
            else if(s[i]==' ' && count1>0)
            {
                break;
            }
            else
            {
                count1++;
            }
        }
        return count1;
    }
}