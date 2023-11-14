#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Input the number: ";
	cin>>num;
	cout<<"The factors of "<<num<<" are :"<<endl;
	for(int i=1;i<=num;i++){
		if (num%i==0){
			cout<<i<<"*"<<num/i<<endl;
		}
	}
	return 0;
}

0
