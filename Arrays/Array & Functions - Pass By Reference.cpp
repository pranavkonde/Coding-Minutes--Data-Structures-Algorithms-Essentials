#include<iostream>
using namespace std;
printArray(int arr[])
{
	cout<<"In function "<<sizeof(arr)<<endl;
	arr[0]=100;
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	printArray(arr);
	cout<<"In Main "<<sizeof(arr)<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
