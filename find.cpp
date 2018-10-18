#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;


int main()
{
	string sentence = "Orca whale";		//find with strings

	int pos = sentence.find("whale");
	
	if(pos > 0)
		cout << "Found (whale) at position " << pos << endl;

	int primeDigits[4] = { 1, 3, 5, 7 };
	int* p = find(primeDigits, primeDigits + 4, 3);		//find 3, returns a pointer when searching through arrays


	cout << "Press enter to exit" << endl;
	cin.get();
	return 0;
}
