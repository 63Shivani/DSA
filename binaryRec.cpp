#include<iostream>
using namespace std;
void print(int arr[],int n){
cout<<"Size of array is "<<n<<endl;
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}cout<<endl;
}
bool binarySearch(int arr[],int s,int e,int k){

	if(s>e)
	return false;
	int mid=s+(e-s)/2;
	if(arr[mid]==k){
		return true;
	}
	if(arr[mid]<k)
{
	return binarySearch(arr,mid+1,e,k);
	
}
else{
	return binarySearch(arr,s,mid-1,k);
}
}
int main(){
	int arr[5]={3,5,6,1,2};
	int size=5;
	int k=9;
	cout<<binarySearch(arr,0,5,k)<<endl;
	return 0;
}

