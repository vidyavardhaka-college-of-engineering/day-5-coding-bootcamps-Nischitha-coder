//You will be given a string 'str'. Your task is to reverse 'str' and print it.
//Input: vvce & Output: ecvv

#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],temp=0;
  int i=0,j;
  printf("Enter a word\n");
	scanf("%s", str);
  j=strlen(str)-1;
  while(i<j)
  {
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;j--;
  }
  printf("The reverse of the word: %s",str);

	//Write your code here

	return 0;
}
