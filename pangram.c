/*Documentiation
  Sai Chandu
  10-12-24
  sample input:the quick brown fox jumps over the lazy dog
  sample output:is a pangram 
  Description:to check the string is pangram or not
*/  
#include <stdio.h>
int pangram(char []);  //function prototype
int main()
{
    char str[100];
    //printf("Enter the string:");
    scanf("%[^\n]",str);
    int ret=pangram(str);  //function calling
    if(ret==1)  //checking pangram or not
    {
        printf("The Entered String is a Pangram String");
    }
    else
    {
        printf("The Entered String is not a Pangram String");
    }
}
int pangram(char str[])  //function definition
{
    int i=0;
    int arr[26]={0};
    while(str[i])
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            int j=str[i]-'A';
            arr[j]=1;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            int j=str[i]-'a';
            arr[j]=1;
        }
        i++;
    }
    int k;
    for(k=0;k<=25;k++)
    {
        if(arr[k]==1)
        {
            k++;
        }
        else
        {
            return 0;
        }
    }
    if(k>25)
    {
        return 1;
    }
}