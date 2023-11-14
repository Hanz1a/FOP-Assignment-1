#include <iostream>
using namespace std;
int main(){
	int a[50]={1,2,3,4,5};
	cout<<"Input digits into the array. \n"
		<<"Enter 0 to stop the input stream and display the array. \n";
	for (int i=5; i<=49; i++){
		cin>>a[i];
		if (a[i]==0){
			break;
		}
	}
	cout<<"The current values stored in the array are: \n";
	for (int j=0; j<=49; j++){
		if (a[j]==0){
		break;
		}
		cout<<a[j]<<endl;	
	}
	return 0;
}
