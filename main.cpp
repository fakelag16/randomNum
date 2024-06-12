#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	srand(time(0));
	int userNum;
	int start = 10;
	int end = 20;
	int x = rand() % (end - start + 1) + start;
	bool tryAgain = true;

	while (tryAgain)
	{
		cin >> userNum;
		if (userNum < x) {
			cout << "Загаданное число больше." << endl;
		}
		else if (userNum > x) {
			cout << "Загаданное число меньше." << endl;
		}
		else
		{
			cout << "Вы угадали!" << endl;
			tryAgain = false;
		}
	}
	cout << "Program ended";
}
