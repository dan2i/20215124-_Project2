#include <iostream>
#include <math.h>
using namespace std;

inline double calc_volume(double r) {
	return (4.0 / 3.0 * 3.14 * pow(r, 3));
}

int main() {
	double radius;
	cout << "반지름을 입력하세요: ";
	cin >> radius;

	double volume = calc_volume(radius);
	cout << "구의 부피는 " << volume << "입니다!" << endl;

	return 0;
}