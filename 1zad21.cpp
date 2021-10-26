#include <iostream>
using namespace std;

int n;
int razdelno(int rez) {
	if (n / rez)
		razdelno(rez * 10);
	rez /= 10;
	cout << n / rez << endl;
	n %= rez;
	return 0;
}

void main() {
	cin >> n;
	razdelno(10);
	cout << endl;
}