//Даниил Журавлёв
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	/*Напечатать все числа в диапазоне от a до b  с шагом k.*/
	int a, b, k;
	cin >> a >> b >> k;
	for (int i = a; i <= b; i++) {
		if (i % k == 0) {
			cout << i << endl;
		}
	}
	return 0;
}