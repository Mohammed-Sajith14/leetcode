bool isAnagram(char* s, char* t) 
{   
    int count[26] = {0};  // Frequency array for 26 letters

    if(strlen(s) != strlen(t))
    {
        return 0;
    }
    else
    {
        for(int i = 0; s[i]; i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--; 
        }
        for(int i = 0; i < 26; i++)
        {
            if(count[i] != 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
