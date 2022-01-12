#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr;
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<arr.size()<<endl;
	cout<<arr.capacity()<<endl;
	arr.push_back(15);
	arr.pop_back();
	vector<int> arr1 = {1,2,10,15};
	for(int i=0;i<arr1.size();i++)
	{
		cout<<arr1[i]<<endl;
	}
	
	vector<int> arr2(10,8);
	for(int i=0;i<arr2.size();i++)
	{
		cout<<arr2[i]<<endl;
	}
	return 0;
}
