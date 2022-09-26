#include<iostream>
using namespace std;
char toLowerCase(char ch){
	if(ch>='a' && ch<='z'){
		return ch;
	}
	else{
		char temp=ch-'A'+'a';
		return temp;
	}
}

bool checkPalindrome(char name[],int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		if(toLowerCase(name[s])!=toLowerCase(name[e])){
			return 0;
		}
		else{
			s++;
			e--;
		}
	}
	return 1;
}
int reverseString(char name[],int n){
	int s=0;
	int e=n-1;
	while(s<e){
		swap(name[s++],name[e--]);
	}
}


int getLength(char name[]){
	int count=0;
	for(int i=0;name[i]!='\0';i++){
		count++;
	}
	return count;
}
int main(){
	char name[20];
	cout<<"enter name:"<<endl;
	cin>>name;
	cout<<"your name:"<<name<<endl;
	int len=getLength(name);
	cout<<"palindrome or Not:"<<checkPalindrome(name,len)<<endl;
	return 0;
	
	
}
