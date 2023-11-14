#include <iostream>
using namespace std;
int main(){
	int num;
	bool value;
	cout<<"Input thee number: ";
	cin>>num;
	if (num>10 && num<=20){
		value =true;
	}
	else{
		value =false;
	}
	cout<<value;
	return 0;
}


