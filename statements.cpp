
#include <iostream>
using namespace std;

void findGreater(int x, int y)
{
	if (x > y) {
		cout << x << " "
			<< "is greater"
			<< "\n";
		return;
	}
	else {
		cout << y << " "
			<< "is greater"
			<< "\n";
		return;
	}
}

// Driver Code
int main()
{
	// Function Call
	findGreater(10, 20);

	return 0;
}
