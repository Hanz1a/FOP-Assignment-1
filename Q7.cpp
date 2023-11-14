#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	int l;
	cout<<"Input the string text: ";
	getline(cin, a);
	l= a.length();
	for (int i=0; i<=l; i++){
		for (int j=0; j<=l; j++){
			if (tolower(a[i])==tolower(a[j]) && i!=j){
				a.erase(j, 1);
				j--;
				l=a.length();
			}
		}
	}
	cout<<a;
	return 0;
}
