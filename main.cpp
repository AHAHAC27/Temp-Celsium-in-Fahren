#include <iostream>
double Translate(double kef, double tempr)
{
	return kef * tempr;
}
int main()
{
	setlocale(LC_ALL, "rus");
	double kef = 1.8;
	double tempr;
	double result;
	std::cout << "Введите значение температуры в градусах Цельсия: " << std::endl;
	std::cin >> tempr;
	result = Translate(kef, tempr);
	std::cout << "Температура в градусах Фаренгейта: " << result << std::endl;
	system("pause");
	return 0;
}