#include <iostream>
#include <math.h>
using namespace std;

inline double calc_volume(double r) {
	return (4.0 / 3.0 * 3.14 * pow(r, 3));
}

int main() {
	double radius;
	cout << "�������� �Է��ϼ���: ";
	cin >> radius;

	double volume = calc_volume(radius);
	cout << "���� ���Ǵ� " << volume << "�Դϴ�!" << endl;

	return 0;
}