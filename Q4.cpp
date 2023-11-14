#include <iostream>
using namespace std;
int main(){
	int num, i;
	bool value;
	cout<<"Input the number: ";
	cin>>num;
	while (num>=2){
		i=2;
		value=false;
		while(i<num){
			if(num%i==0){
				value=true;
				break;
			}
			i++;
		}
		if(value==false){
			cout<<"Largest Prime is "<<num<<endl;
			break;
		}
		num--;
	}
	return 0;
}



