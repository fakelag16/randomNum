#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	srand(time(0));
	int tryLimit = 10;
	int userNum;
	int start = 0;
	int end = 20;
	int x = rand() % (end - start + 1) + start;
	bool tryAgain = true;

	cout << "Компьютер загадал число от 1 до 100. Попробуй угадать!" << endl;

	

	while (tryAgain)
	{
		if (tryLimit != 0)
		{
			cout << "Введите число: ";
			cin >> userNum;

			if (userNum < x) {
				cout << "Загаданное число больше." << endl;
			}
			else if (userNum > x) {
				cout << "Загаданное число меньше." << endl;
			}
			else
			{
				cout << "Поздравляю! Вы угадали число " << x << " за " << tryLimit << " попыток." << endl;
				tryAgain = false;
			}
		}
	}
	cout << "Program ended";
}
