#include<iostream>
using namespace std;
int SubArraySum(int arr[],int n)
{
	int largest_sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int subarraysum=0;
			for(int k=i;k<=j;k++)
			{
				subarraysum=subarraysum+arr[k];
			}
			largest_sum=max(largest_sum,subarraysum);
		}
	}
	return largest_sum;
}
int main()
{
	int arr[]={-2,3,4,-1,5,-12,6,1,3};
	int n=sizeof(arr)/sizeof(int);
	cout<<"Largest Subarray sum is: "<<SubArraySum(arr,n);
	return 0;
}
