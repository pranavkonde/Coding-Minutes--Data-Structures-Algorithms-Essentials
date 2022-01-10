#include<iostream>
using namespace std;
int main()
{
	int x=10;
	cout<<&x<<endl;
	int *xptr=&x;
	cout<<xptr<<endl;
	int **xxptr=&xptr;
	cout<<&xptr<<endl;
	cout<<xxptr<<endl;
	return 0;
}
