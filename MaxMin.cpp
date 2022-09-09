#include<iostream>
using namespace std;
int getMax(int num[],int n){
  int max=INT_MIN;
  for(int i=0;i<n;i++){
    if(num[i]>max){
      max=num[i];
    }
  }
    return max;
  }
  int getMin(int num[],int n){
  int min=INT_MAX;
  for(int i=0;i<n;i++){
    if(num[i]<min){
      min=num[i];
    }
  }
    return min;
  }
int main(){
  int num[5]={3,6,7,,5,1};
  cout<<getMax(num,5);
  cout<<getMin(num,5);
  return 0;
}
  
