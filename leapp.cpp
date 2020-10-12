#include <iostream>
using namespace std;


bool checkLeap(int num){
	
	bool leap;
	
	if(num % 4 == 0)
	
		cout<<"true";

	else
		
		cout<<"false";
	return leap;
}


int main() {

	int leap;

	cout<<"Enter the year you want to check: "<<endl;
	
	cin>>leap;
	
	checkLeap(leap);
	
	
	return 0;
}
