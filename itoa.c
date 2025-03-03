/*Documentiation
  Sai Chandu
  10-12-24
  sample input:12345(number)
  sample output:12345(string)
  Description:To implement own itoa function
*/  
#include <stdio.h>
void itoa(int , char []);
void fun1(char [],int );
void fun2(char [],int );
int main()
{
    int num,i;
    char str[50]="0";
    
    printf("Enter the number:");
    scanf("%d", &num);
    int num1=num;
    for(i=0;i<=num1;i++)
    {
        if(num1%10>=0 && num1%10<=9)
        {
            i++;
        }
        num1=num1/10;
    }
    if(i>=num1)
    {
        itoa(num, str);
        printf("Integer to string is %s",str);
    }
    else
    {
        printf("Integer to string is %s",str);
    }
    return 0;
}
void itoa(int n,char str[])
{
    if(n>0)
    {
        fun1(str,n);
    }
    else if(n<0)
    {
        fun2(str,n);
    }
    else
    {
        return;
    }
}
void fun1(char str[],int n)
{
    int l=0,num=n;
    while(num>0)
    {
        num=num/10;
        l++;
    }
    for(int j=l-1;j>=0;j--)
    {
        str[j]=(n%10)+'0';
        n=n/10;
    }
    str[l]='\0';
}
void fun2(char str[],int n)
{
    int l=0;
    str[l]='-';
    int k=n;
    while(n<0)
    {
        l++;
        n=n/10;
    }
    for(int j=l;j>=1;j--)
    {
        str[j]=-(k%10)+'0';
        k=k/10;
    }
    str[l+1]='\0';
}
