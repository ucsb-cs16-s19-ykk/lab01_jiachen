#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cout.setf(ios::fixed); 	   // Display in fixed point notation. For example, display 1e-1 as 0.1
	cout.setf(ios::showpoint); // Always display the decimal point.
	cout.precision(3);         // Set the number of digits to display after the decimal point to 3
	int n = 0;
	string num_of_terms;
	double fac = 0;
	double ans = 0;
	while (true){
	cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<< endl;
	cin >> n;
	if (n == 0){
		num_of_terms = "";
	}
	else{
		num_of_terms = "s";
	}
	if(n == -1){
		return 0;
	}
	for (int i = 0; i<=n; i++){	
			fac += (pow(-1.0,i)/(2.0*i+1.0));
		}
    ans = 4*fac;
	cout<<"The approximate value of pi using "<<n+1<<" term" + num_of_terms << " is: "<<ans<< endl;
	fac = 0;
	ans = 0;
	}
 	return 0;
}
 	

