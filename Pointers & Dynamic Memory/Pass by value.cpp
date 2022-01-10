#include<iostream>
using namespace std;
void applytax(int income)
	{
		float tax=0.10;
		income=income-income*tax;
	}
int main()
{
	int income;
	cin>>income;
	applytax(income);
	cout<<income;
	return 0;
}

