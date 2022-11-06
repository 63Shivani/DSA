#include<iostream>
using namespace std;
int main(){
	int arr[10]={23,122,41,67};
	cout<<arr<<endl;
	cout<<&arr<<endl;
	cout<<*arr<<endl;
	cout<<*(arr+1)<<endl;
	cout<<*arr+1<<endl;
	cout<<*(arr)+1<<endl;
	cout<<arr[2]<<endl;
	cout<<*(arr+2)<<endl;
	int temp[10]={1,2};
	cout<<sizeof(temp)<<endl;
	cout<<sizeof(*temp)<<endl;
	cout<<sizeof(&temp)<<endl;
	int *ptr=&temp[0];
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(*ptr)<<endl;
	cout<<sizeof(&ptr)<<endl;
	char ch[6]="abcde";
	cout<<ch<<endl;
	char *c=&ch[0];
	cout<<c<<endl;
	return 0;
	
}
