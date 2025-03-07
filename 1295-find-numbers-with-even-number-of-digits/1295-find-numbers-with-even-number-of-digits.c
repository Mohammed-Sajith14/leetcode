int findNumbers(int* nums, int numsSize) 
{
    int temp;
    int digit;
    int count = 0;
    
    for (int i = 0; i < numsSize; i++)
    {
        digit = 0;
        temp = nums[i];

        while (temp != 0)
        {
            digit = digit + 1;
            temp = temp / 10;
        }

        if (digit % 2 == 0)
        {
            count = count + 1;
        }
    }
    
    return count; 
}
