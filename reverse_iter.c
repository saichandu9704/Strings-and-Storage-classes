/*Documentiation
  Sai Chandu
  10-12-24
  sample input:hello world
  sample output:dlrow olleh
  Description:to reverse the string using iterative method
*/  
#include <stdio.h>
void reverse_iterative(char str[]); //function prototype
int main()
{
    char str[30];
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    reverse_iterative(str);   //function calling
    printf("Reversed string is %s\n", str);
}
void reverse_iterative(char str[])  //function definition
{
    int length=0;
    while(str[length])   //finding string length
    {
        length++;
    }
    for(int i=0;i<length/2;i++)   //reverse process of string
    {
        int temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
}