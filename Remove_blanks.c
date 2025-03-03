/*Documentiation
  Sai Chandu
  12-12-24
  sample input:Hello    world
  sample output:Hello world
  Description:to replace each string of one or more blanks by single blank
*/  
#include <stdio.h>
void replace_blank(char []);
int main()
{
    char str[100];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    
    replace_blank(str);
    
    printf("%s\n", str);
}
void replace_blank(char str[])
{
    for(int i=0;str[i];i++)
    {
        if(str[i]=='\t')
        {
            str[i]=' ';
        }
        if(str[i]==' ' && str[i+1]==' ')
        {
            for(int j=i+1;str[j];j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
    }
}