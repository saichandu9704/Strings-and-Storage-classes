/*Documentiation
  Sai Chandu
  17-12-24
  sample input:string1=Bangalore;;::--Chennai:;Kolkata
               string2=;:/-:
  sample output:Tokens=Bangalore
                       Chennai
                       Kolkata
  Description:to implement strtok function
*/  
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[50], delim[50];
    
    printf("Enter the string  : ");
    scanf("%s", str);
    
    __fpurge(stdout);
 
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);
    
    char *token = my_strtok(str, delim);
    printf("Tokens :\n");
    
    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}


char *my_strtok(char str[], const char delim[])
{
    static char *ptr_str = {0};
    static int i = 0;
    char *start = 0;
    int found = 0;
    
    if(str != NULL)
    {
        ptr_str = str;
    }
    
    if(ptr_str == NULL)
    return NULL;
    
    while(ptr_str[i])        
    {
        found = 0;
        for(int j = 0; delim[j]; j++)
        {
            if(ptr_str[i] == delim[j])      //not consider delimeter if present in starting position
            {
                found = 1;
                break;
            }
        }
        if(!found)
        {
            break;
        }
        i++;
    }
    if(ptr_str[i] == '\0')
    {
        ptr_str = NULL;
        return NULL;
    }
    start = ptr_str + i;    //starting position of each sub string
   
    
    while(ptr_str[i])
    {
        found = 0;
        for(int j = 0; delim[j]; j++)
        {
            if(ptr_str[i] == delim[j]) 
            {
                found = 1;
                break;
            }
        }
        
        if(found)     //delimeter is present in sub str      
        {
            ptr_str[i] = '\0';     //make that current position to null char
             i++;
            return start;
        }
        i++;
    }
    
   ptr_str = NULL;  
   return start;
}