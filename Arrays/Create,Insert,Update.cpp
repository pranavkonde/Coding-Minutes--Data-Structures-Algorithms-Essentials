#include<iostream>
using namespace std;
int main()
{
	int marks[100];
	int n;
	cout<<"Enter the no. of students"<<endl;
	cin>>n;
	//update
	marks[0]=-1;//{-1}
	//insert
	cout<<"Enter the marks of students"<<endl;
	for(int i=1;i<n;i++)
	{
		cin>>marks[i];
		marks[i]=marks[i]*2;
	}	
	//output
	for(int i=0;i<100;i++)
	{
		cout<<marks[i]<<" ,";
	}	
	cout<<endl;
	return 0;
}
