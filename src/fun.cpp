unsigned int faStr1(const char *str)
{
    int i = 0;
    int k = 0;
    bool flag = 0;
    bool l = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && !flag)
        {
            flag = 1;
            l = 1;
        }
        if(str[i] == ' ' && flag)
        {
            flag = 0;
            if(l==1)
                k++;
        }
        if(flag && str[i] > 47 && str[i] < 58)
            l = 0;
        i++;
    }
    if(str[i - 1] != ' ')
        if(l)
            k++;
    return k;
}
unsigned int faStr2(const char *str)
{
    int i = 0;
    int k = 0;
    bool flag = 0;
    bool l = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && !flag)
        {
            flag = 1;
            if(str[i] > 64 && str[i] < 91)
            {
                l = 1;
                i++;
            }
        }
        if(str[i] == ' ' && flag)
        {
            flag = 0;
            if(l)
                k++;
        }
        if( flag && (str[i] < 97 || str[i] > 122) )
            l = 0;
        i++;
    }
    if(str[i - 1] != ' ')
        if(l)
            k++;
    return k;
}
unsigned int faStr3(const char *str)
{
    int k=0;
    int i=0;
    bool flag=0;
    double sum=0.0;
    while(str[i]!='\0'){
        if(str[i] !=' ' && !flag){
            k++;
            flag=1;
        }
        else if (str[i] !=' ' && flag)
                sum++;
        else if (str[i] !=' ')
                flag = 0;
        i++;
    }
    sum= (sum+k)/k;
    int sum1=sum;
    if(sum-sum1 >= 0.5)    sum1++;
    return sum1;
}