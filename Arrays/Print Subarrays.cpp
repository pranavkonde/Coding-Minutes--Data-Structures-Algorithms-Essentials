#include<iostream>
using namespace std;
int PrintSubarrays(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=i;k<j;k++)
			{
				cout<<arr[k]<<" ";
			}
			cout<<endl;
		}
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	PrintSubarrays(arr,n);
	return 0;
}
