/*Documentiation
  Sai Chandu
  07-12-24
  sample input:12345(string)
  sample output:12345(integer)
  Description:To implement own atoi function
*/  
#include <stdio.h>
int my_atoi(const char []);    //function prototype
int main()
{
    char str[20];
    
    //printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));    //function calling
}
int my_atoi(const char str[])       //function definition
{
    int flag=0;
    if(str[0]=='+' || str[0]=='-')    //checking string is signed or not
    {
        flag=1;
    }
    int i=0;
    if((str[i]=='+' || str[i]=='-') && (str[i+1]=='+' || str[i+1]=='-') || (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
    {
        return 0;
    }
    else if(str[i]=='*')
    {
        return 0;
    }
    int sum=0;
    while(str[i])
    {
        if(str[i]>='0' && str[i]<='9')     //converting string to integer
        {
            int result=(int)str[i]-48;
            sum=(sum*10)+result;
        }
        i++;
    }
    if(flag==1)             //return the integer 
    {
        if(str[0]=='-')
        {
            return -1*sum;
        }
        else
        {
            return sum;
        }
    }
    else
    {
        return sum;
    }
}