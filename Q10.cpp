#include <iostream>
using namespace std;
int main(){
	int a[6];
	cout<<"Input 6 integers in the array: \n";
	for (int i=0; i<=5; i++){
		cin>>a[i];
	}
	for(int j=0; j<=5; j++){
		for (int k=0; k<=5; k++){
			if (a[k]>a[k+1]){
				swap(a[k], a[k+1]);
			}
		}
	}
	cout<<"The sorted values are: \n";
	for (int l=0; l<=5; l++){
		cout<<a[l]<<"\n";
	}
	return 0;
}
