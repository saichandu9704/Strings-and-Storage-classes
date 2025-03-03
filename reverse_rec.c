/*Documentiation
  Sai Chandu
  10-12-24
  sample input:hello world
  sample output:dlrow olleh
  Description:to reverse the string using recursive method
*/  
#include <stdio.h>
void reverse_recursive(char str[], int ind, int len);  //function prototype
int main()
{
    char str[30];
    //printf("Enter any string : ");
    scanf("%[^\n]", str);
    int length=0;
    while(str[length])
    {
        length++;
    }
    reverse_recursive(str, 0, length);   //function calling
    printf("Reversed string is %s\n", str);
}
void reverse_recursive(char str[],int ind,int len)   //function definition
{
    if(ind<len/2)
    {
        int temp=str[ind];
        str[ind]=str[len-ind-1];
        str[len-ind-1]=temp;
        reverse_recursive(str,ind+1,len);  //recursive function
    }
}