//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],str1[10],temp=0;
  int i=0,j,c=0;
  printf("Enter a word\n");
	scanf("%s", str);
  j=strlen(str)-1;
  for(int i=0;i<=j;i++)
  {
    str1[i]=str[i];
  }
  while(i<j)
  {
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;j--;
  }
  for(int i=0;i<=j;i++)
  {
    if(str1[i]==str[i])
    c++;
  }
  if(c!=0)
  {
    printf("%s is a palindrome\n",str);
  }
  else
  {
    printf("%s is not a palindrome",str);
  }

 //Write your code here
	
	return 0;
}
