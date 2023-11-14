#include <iostream>
using namespace std;
int main(){
	int length, a[length], num, j, k, l;
	bool value=false;
	cout<<"Input the length of the input array: ";
	cin>>length;
	cout<<"Input the values in the array: ";
	for (int i=0; i<length; i++){
		cin>> a[i];
	}
	cout<<"Input a number: ";
	cin>>num;
	for(j=0; j<length; j++){
		for(k=j+1; k<length; k++){
			for (l=k+1; l<length; l++){
				if (a[j]+a[k]+a[l]==num){
					value=true;
					break;
				}
			}
		if(value==true){
			break;
		}
		}
	if(value==true){
		break;
	}
	}
	cout<<num<<" is the sum of "<<a[j]<<"(Array."<<j+1<<") ,"
							    <<a[k]<<"(Array."<<k+1<<") & "
							    <<a[l]<<"(Array."<<l+1<<")";
	return 0; 
}
