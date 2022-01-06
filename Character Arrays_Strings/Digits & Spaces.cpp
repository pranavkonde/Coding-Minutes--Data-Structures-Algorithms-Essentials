#include<iostream>
using namespace std;
int main()
{
	char ch;
	ch=cin.get();
	int digit=0;
	int alpha=0;
	int space=0;
	while(ch!='\n')
	{
		if(ch>='0'and ch<='9')
		{
			digit++;
		}
		if(ch>='a'and ch<='z' or ch>='A'and ch<='Z')
		{
			alpha++;
		}
		if(ch>=' 'and ch<='\t')
		{
			space++;
		}
		ch=cin.get();
	}
		cout<<"Total number of Integers: "<<digit<<endl;
		cout<<"Total number of Alphabets: "<<alpha<<endl;
		cout<<"Total number of Spaces: "<<space<<endl;
		return 0;
}
