#include<iostream>
using namespace std;
int LastOcc(int arr[],int n,int key)
{
	if(n==0)
	{
		return -1;
	}
	int subIndex=LastOcc(arr+1,n-1,key);
	if(subIndex==-1)
		{
			if(arr[0]==key)
			{
				return 0;
			}	
			else
			{
				return -1;
			}
		}
	else{
		return subIndex+1;
	}	
}
int main()
{
	int arr[]={1,3,5,8,7,6,2,8,7,11,21};
	int n=sizeof(arr)/sizeof(int);
	int key=7;
	cout<<LastOcc(arr,n,key)<<endl;
	return 0;
}
