#include <iostream>
using namespace std;
int main(){
	int num, divisor, ans;
	cout<<"Input the number: ";
	cin>>num;
	cout<<"Input the divisor: ";
	cin>>divisor;
	for (ans=1; ans<=num; ans++){
		if(divisor*ans==num){
			cout<<num<<"/"<<divisor<<"="<<ans;
			break;
		}
	}
	return 0;
}
