#include <iostream>
using namespace std;

int main(){
 	int var1;
	int var2;
	int i = 0;
	int j = 0;
	while (true){
	cout<<"Enter number of rows and columns:\n";
	cin>> var1>>var2;
	for(int i = var1; i>0; i--){
		for(int j = var2; j > 0; j--){
			cout<<"X.";
		}
	cout<<endl;}
	}
	return 0;
}

