#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
			{
				return i;
			}			
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cout<<"Enter the key to be searched: ";
	cin>>key;
	int index=LinearSearch(arr,n,key);
	if(index!=-1)
	{
		cout<<"Element found at index "<<index<<endl;
	}
	else
	{
		cout<<"Element not found";
	}
	return 0;
}
