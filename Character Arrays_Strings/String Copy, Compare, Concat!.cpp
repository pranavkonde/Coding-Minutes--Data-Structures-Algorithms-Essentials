#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100]="Hello World";
	char b[100];
	cout<<strlen(a)<<endl;
	cout<<strcpy(b,a)<<endl;
	cout<<"a= "<<a<<"  "<<"b= "<<b<<endl;
	cout<<strcmp(a,b)<<endl;
	cout<<strcat(a,b)<<endl;
	return 0;
}
