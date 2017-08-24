#include <iostream>
using namespace std;
class Adder {
public:
	int addNumb() {
		int a, b;
		cout << "Enter 2 numbers";
		cin >> a >> b;
		return a % b;
	}
};