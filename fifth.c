#include<stdio.h>
#include<string.h>
int main()                ///Find largest and smallest word in a sentence
{
  char str[200],str1[200],max[200],min[200];
  int a ,b ,c ,d,e,i,j=0;
  printf("\n Enter a string: ");
  gets(str);
a=strlen(str);
for(i=0;i<=a;i++)
{
  if(str[i]!=' '&&str[i]!='\0'&& str[i]!='.')
  {
    str1[j]=str[i];
j++;
  }
  else
{
  str1[j]='\0';
  if(strlen(str1)>strlen(max))
  {
  strcpy(max,str1);
  }
  if(strlen(str1)<strlen(min))
  {
  strcpy(min,str1);
  }
  j=0;
  str1[20]="\0";
}
}
printf("\n Largest word in the sentence is= %s",max);
printf("\n Smallest word in the sentence is= %s",min);
}
