
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cout << "Array Values are: " << endl;
	int arr[] = { 0, 1, 2, 3, 4, 5 };

	// using range based for loop for iterating array
	for (int x : arr) {
		cout << x << " ";
	}
	cout << endl;

	cout << "Vector Values are: " << endl;
	vector<int> v = { 0, 1, 2, 3, 4, 5 };

	// using range-based for loop for iterating over vector
	for (auto x : v) {
		cout << x << " ";
	}
	cout << endl;

	return 0;
}
