#include<string>
#include<vector>
#include<iostream>

using namespace std;

int main()
{
	// This is a single line comment

	/* This
		Is
		A
		Multi-line
		Comment
	*/

	// Declaring primitives
	int Integer = 255;
	double Double = 0.5;
	float Float = 0.5f;
	bool Boolean = true;
	char Character = 'a';

	// Declaring objects
	string myString = "Hello World!";
	vector<string> myVector;

	// Appending to a vector
	myVector.push_back("Hello");
	myVector.push_back(" ");
	myVector.push_back("World!");
	for (string s : myVector) {
		cout << s;
	}
	cout << endl;

	// Removing and appending to a vector
	myVector.pop_back();
	myVector.push_back("Sam");
	for (string s : myVector) {
		cout << s;
	}
	cout << endl;

	// Indexing a vector
	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i];
	}
	cout << endl;
}

