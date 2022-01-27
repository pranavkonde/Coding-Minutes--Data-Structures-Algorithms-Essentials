#include<stdio.h>
void substring(char s[],char sub[],int p,int len)
{
	int c=0;
	while(c<len)
	{
		sub[c]=s[p+c];
		c++;
	}
	sub[c]='\0';
}
int main()
{
	char c[10],str[10]="ABC";
	int i,j,len=strlen(str);
	printf("All subsets of given string are: ");
	for(int i=0;i<len;i++)
	{
		for(int j=1;j<len-i;j++)
		{
			substring(str,c,i,j);
			printf("%s\n",c);	
		}
	}
	return 0;
}
