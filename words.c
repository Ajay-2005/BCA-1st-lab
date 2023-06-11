#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
char s[200];
int count=0,i;

printf("enter the string:\n");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if (s[i]==' '&&s[i+1]!=' ')
count++;
}
printf("number of words in given string %d\n",count+1);
getch();
return 0;
}

