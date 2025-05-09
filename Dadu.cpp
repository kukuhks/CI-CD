#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(NULL));

	int dice_num = rand() % 6 + 1;
	int guess_num;

	cout << "main tebak dadu-daduan\n";
	cout << "Tebak angka: ";
	cin >> guess_num;

	if (guess_num == dice_num)
		cout << "Tebakan benar\n";
	else
		cout << "Tebakan salah\n";

	return 0;
}