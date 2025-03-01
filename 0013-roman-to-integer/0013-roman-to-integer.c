int romanToInt(char* s) {

    int tot=0;

    int len = strlen(s);

    for(int i=0;i<len;i++)
    {
        if(s[i]=='I' && s[i+1]=='V')
        {
            tot = tot + 4;
            i++;
        }
        else if(s[i]=='I' && s[i+1]=='X')
        {
            tot = tot+9;
            i++;
        }
        else if(s[i]=='X' && s[i+1]=='L')
        {
            tot = tot + 40;
            i++;
        }
        else if(s[i]=='X' && s[i+1]=='C')
        {
            tot = tot + 90;
            i++;
        }
        else if(s[i]=='C' && s[i+1]=='D')
        {
            tot = tot + 400;
            i++;
        }
        else if(s[i]=='C' && s[i+1]=='M')
        {
            tot = tot + 900;
            i++;
        }
        else if(s[i]=='I')
        {
            tot = tot + 1;
        }
        else if(s[i]=='V')
        {
            tot = tot + 5;
        }
        else if(s[i]=='X')
        {
            tot = tot + 10;
        }
        else if(s[i]=='L')
        {
            tot = tot + 50;
        }
        else if(s[i]=='C')
        {
            tot = tot + 100;
        }
        else if(s[i]=='D')
        {
            tot = tot + 500;
        }
        else if(s[i]=='M')
        {
            tot = tot + 1000;
        }
    }
    return tot;
}