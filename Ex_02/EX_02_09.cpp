#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));

	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;

	int sum = dice1 + dice2;
	cout << "사용자의 주사위: " << dice1 << "+" << dice2 << "=" << sum << endl;
	if ((sum == 7) || (sum == 11))
		cout << "사용자가 이겼습니다." << endl;
	else if ((sum == 2) || (sum == 3) || (sum == 12))
		cout << "사용자가 졌습니다." << endl;

	return 0;
}