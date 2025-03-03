/*Documentiation
  Sai Chandu
  25-12-24
  sample input:no of characters:3 
               string length:6
               3 characters : a b c
  sample output:possible NRPS is bacabc
  Description:to generate consecutive NRPS(non repeat print string)
*/  
#include <stdio.h>
#include <string.h>
void nrps(char [], int, int);

int main()
{
    char str[30];
    int i=0,characters, length,flag=0;
    scanf("%d",&characters);
    scanf("%d",&length);
    scanf(" %[^\n]",str);
    while(str[i])
    {
        for(int j=i+1;j<strlen(str);j++)
       {
           if(str[i]==str[j])
           {
               flag=1;
               break;
           }
       }
       i++;
    }
    if(flag==1)
    {
         printf("Enter distinct characters");
    }
    else
    {
         nrps(str, characters, length);
    }
}

void nrps(char str[], int c, int n)
{
 
   int flag = 0;
   char temp;
   for(int i = 0; i < n; i++)       //run the loop upto length 
   {
       if(i % c == 0)              //if one pair is get overed means swap the chars 
       {
           temp = str[0];
           str[0] = str[1];
           str[1] = temp;
           flag = 0;
       }
    printf("%c",str[flag]);    //print char by char
    flag++;
   }
}