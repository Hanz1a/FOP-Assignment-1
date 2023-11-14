#include <iostream>
#include <limits>
using namespace std;
int main(){
	char a[25], b[25];
	cout<<"Input the first line of text: ";
	cin.get(a, 25);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout<<"Input the second line of text: ";
	cin.get(b, 25);
	cout<<"The first srting is: \n"<<a<<endl;
	cout<<"The second string is: \n";
	for (int i=24; i>=0; i--){
		if (a[i]==b[i]){
			cout<<b[i];
		}
	}
	return 0;
}
