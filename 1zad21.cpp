#include <iostream>
using namespace std;

int n;
void razdelno(int rez) {
	if (n / rez)
		razdelno(rez * 10);
	rez /= 10;
	cout << n / rez << endl;
	n %= rez;
}

void main() {
	cin >> n;
	razdelno(10);
	cout << endl;
}
