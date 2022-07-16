#include <iostream>
using namespace std;
int main() {

	int a;
	
	do {
		cin >> a;
		switch (a)
		{
		case 1:
			a = 2 ^ (a + 3);
			cout << "Case 1 : " << a;
			break;
		default: cout << "(O.O)" << flush << endl;
			break;
		}
	} while (a != 5);
	cout << " Yo ";
	return 0;
}