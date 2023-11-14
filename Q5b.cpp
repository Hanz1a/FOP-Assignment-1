#include <iostream>
#include <string>
using namespace std;
int main(){
	string a, b;
	int l;
	cout<<"Input the first line of text: ";
	getline(cin, a);
	cout<<"Input the second line of text: ";
	getline(cin, b);
	if (a==b){
		l=a.length();
		for (int i=0; i<l/2; i++){
			swap(b[i], b[l-i-1]);
		}
	}
	cout<<"The first sting is: \n\t"<<a<<endl;
	cout<<"The second srting is: \n\t"<<b<<endl;
	return 0;
}
