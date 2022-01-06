#include<iostream>
using namespace std;
int main()
{
	char sentence[1000];
	cin.getline(sentence,1000);
	cout<<sentence<<endl;
	char school[1000];
	cin.getline(school,1000,'#');
	cout<<school<<endl;
	return 0;
}
