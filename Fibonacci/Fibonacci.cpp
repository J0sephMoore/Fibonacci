#include <iostream>
#include <vector>

using namespace std;

int main()// make sequence not work off i or change i intial value
{
	for (int x = 0; x <= 50;) { // allow user to do code multiple times
		cout << "Input the fibonacci number that you would like: "; // prompt
		int n;
		cin >> n;

		unsigned long NextNum; // use to store numbers in vector

		vector<unsigned long> Sequence{0, 0, 1}; // set up a vector to store the numbers of the fibonacci sequence
		for (int i = 1; i <= n + 1; i++) { // run fibonacci sequence as much as necessary. Start at one for human factors
			NextNum = Sequence[i] + Sequence[i + 1]; // calculate each fibonacci value
			Sequence.push_back(NextNum); // add new value to the vector
			if (i == n) { // make sure at the desired fibonacci value
				cout << "The " << n << "# of the fibonacci sequence is " << Sequence[n];
			}
		}
		x++; // let you run code again
		cout << endl << endl;
	}
}


