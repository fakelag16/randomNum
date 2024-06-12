#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	srand(time(0));
	int tryLimit = 10;
	int userNum;
	int start = 1;
	int end = 100;
	int x = rand() % (end - start + 1) + start;
	bool tryAgain = true;

	cout << "Компьютер загадал число от 1 до 100. Попробуй угадать!" << endl;

	

	while (tryAgain && tryLimit > 0) {
		cout << "Осталось попыток: " << tryLimit << endl;
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
		tryLimit--;
	}

	if (tryLimit == 0 && tryAgain) {
		cout << "К сожалению, вы исчерпали все попытки. Загаданное число было " << x << "." << endl;
	}
	cout << "Program ended";
}
