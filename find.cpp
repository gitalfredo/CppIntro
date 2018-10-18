#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// Splits string into words using the delimiter 'delim'
vector<string> split(string sentence, char delim)
{
	vector<string> words;	// Vector to hold words
	stringstream sstr(sentence);	// String stream to be used as stream for getline
	string w;					// It will hold each word on each iteration
	while (getline(sstr, w, delim))
	{
		words.push_back(w);	// Put word into vector
	}
	return words;
}

// Displays vector to console
void display(vector<string> v)
{
	for (const string& item : v)
	{
		cout << item << endl;
	}
}
int main()
{
	string sentence = "Orca whale";

	cout << "Spliting the sentence: " << sentence << endl;
	auto words = split(sentence, ' ');
	display(words);


	cout << "Press enter to exit" << endl;
	cin.get();
	return 0;
}
