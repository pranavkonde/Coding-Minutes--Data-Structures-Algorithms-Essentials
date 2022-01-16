#include<iostream>
using namespace std;
void clearLastIBits(int &n,int i)
{
	int mask=(-1<<i);
	n=n&mask;
}
int main()
{
	int n=15;
	int i;
	cin>>i;
	clearLastIBits(n,i);
	cout<<n;
	return 0;
}
