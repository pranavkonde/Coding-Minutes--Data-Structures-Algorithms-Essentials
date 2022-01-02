#include<iostream>
using namespace std;
int ReverseArray(int arr[],int n)
{
	int start,end;
	start=0;
	end=n-1;
	while(start<end)
	{
		int temp;
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<"Reverse of the array is: ";
	ReverseArray(arr,n);  
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<",";
	}
	return 0;
}
