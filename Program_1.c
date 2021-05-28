//You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it
//Input: loop Output: 2
#include<stdio.h>

int main()
{
	char str[10];
  int vowel=0,i=0;
  printf("Enter a word\n");
	scanf("%s", str);
  while(str[i++]!='\0')
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {
      vowel++;
    }
  }
  printf("The number of vowels=%d",vowel);

	//Write your code here

	return 0;
}
