#include<iostream>
using namespace std;
void watchvideo(int *viewptr)
{
	*viewptr=*viewptr+1;
}
int main()
{
	int views=100;
	watchvideo(&views);
	cout<<views<<endl;
	return 0;
}
