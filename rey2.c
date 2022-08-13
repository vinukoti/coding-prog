#include<stdio.h>
int mian()
{
char ch;
printf("enter the character"):
scanf("%c",&ch);
switch(ch)
{
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
           printf("Vowel"):
		   break;
   default:printf("consonant");
           break;
}
return 0;
}