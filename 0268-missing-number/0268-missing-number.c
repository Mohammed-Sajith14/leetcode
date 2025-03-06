int missingNumber(int* nums, int numsSize) 
{
    int flag = 0;

    for(int i=0;i<=numsSize;i++)
    {
        flag = 0;

        for(int j=0;j<numsSize;j++)
        {
            if(i==nums[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            return i;
        }
    }
    return -1;    
}