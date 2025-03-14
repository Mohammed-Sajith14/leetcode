int maxProduct(int* nums, int numsSize) 
{
    int max = 0;
    int ans;
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            ans = (nums[i]-1)*(nums[j]-1);
            if(ans>max)
            {
                max = ans;
            }
        }
    }
    return max;    
}