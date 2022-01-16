#include<iostream>
using namespace std;
int increase(int n)
{
	if(n==0)
	{
		return 0;
	}
    increase(n-1);
	cout<<n<<",";
}
int main()
{
	int n;
	cin>>n;
	cout<<increase(n)<<endl;
}
