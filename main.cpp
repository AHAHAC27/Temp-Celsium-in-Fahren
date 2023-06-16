#include <iostream>
double Translate(double kef, double tempr)
{
	return kef * tempr;
}
int main()
{
	double kef = 1.8;
	double tempr;
	double result;
	std::cout << "Enter the value in degrees Celsius: " << std::endl;
	std::cin >> tempr;
	result = Translate(kef, tempr);
	std::cout << "Temperature in degrees Fahrenheit: " << result << std::endl;
	system("pause");
	return 0;
}
