#include<iostream>
using namespace std;
void reverse(int arr[], int n){
  int start=0,end=n-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}
void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
  }
}
int main(){
  int arr[5]={2,4,7,8,0};
  cout<<reverse(arr,5);
  cout<<printArray(arr,5);
  return 0;
}
