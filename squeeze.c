/*Documentiation
  Sai Chandu
  16-12-24
  sample input:Dennis Ritchie, Linux
  sample output:Des Rtche
  Description:to reverse the string using recursive method
*/  
#include <stdio.h>
void squeeze(char [], char []);  //function prototype
int main()
{
    char str1[30], str2[30];
    printf("Enter string1:");   
    scanf("%[^\n]", str1);  
    printf("Enter string2:");
    scanf(" %[^\n]", str2);
    squeeze(str1, str2);  //function calling
    printf("After squeeze s1 : %s\n", str1);
    return 0;
}
void squeeze(char str1[],char str2[])  //function definition
{
    int i=0;
    while(str2[i])
    {
        for(int j=0;str1[j];j++)
        {
            if(str2[i]==str1[j])
            {
                for(int k=j;str1[k];k++)  //shifting operation
                {
                    str1[k]=str1[k+1];
                }
                --j;
            }
        }
        i++;
    }
}