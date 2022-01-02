#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
	int mid,start,end;
	start=0;
	end=n-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(key>arr[mid])
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<"Enter the element to be searched: ";
	int key;
	cin>>key;
	int index=BinarySearch(arr,n,key);
	if(index!=-1)
	{
		cout<<"Element found at index: "<<index;
	}
	else{
		cout<<"Element not found";
	}
	return 0;
}
