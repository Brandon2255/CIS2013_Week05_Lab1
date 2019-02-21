#include <iostream>
using namespace std;



int main() {
	
	
	const int LEN = 3;
	// List of students in our class you can ctrl q to comment out several lines in notepad+
	int students[LEN];
	// int bob = 90;
	// int tom = 15;
	// int jill = 99;
	
	for(int i=0; i<LEN; i++){
		cout << "Enter students grade ";
		cin >> students[i];
	}
		
	// cout << "Enter Bobs grade ";
	// cin >> students[0];
	// cout << "Enter Toms grade ";
	// cin >> students[1];
	// cout << "Enter Jills grade ";
	// cin >> students[2];
	
	
	
	for(int j=0; j<LEN; j++){
		cout << " Students " << j+1 << " grade is " << students[j] << endl;
	}
	
	// cout << " Bob grade is " << students[0] << endl;
	// cout << " Tom grade is " << students[1] << endl;
	// cout << " jill grade is " << students[2] << endl;

return 0;
}