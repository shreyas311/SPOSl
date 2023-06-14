#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
int i,id=0,no=0,op=0;
char s[30];
printf("EnterEquation:");
fflush(stdout);
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
char ch=s[i];
if(isalpha(ch))
{
printf("%c isanidentifier\n",ch);
id++;
}
elseif(isdigit(ch))
{
printf("%cisannumber\n",ch);
no++;
}
else
{
printf("%cisanoperator\n",ch);
op++;
}
}
printf("Totalidentifiers:%d\n",id);
printf("Totalnumber:%d\n",no);
printf("Totaloperator:%d\n",op);
printf("Totaltokens:%d\n",(id+no+op));
return 0;
}