#include <iostream>

int n;
int in;

int main() {
	loop:
	std::cout << "Converting to celsius: 1 || Converting to fahrenheit: 2 ";
	std::cin >> n;
	std::cout << "Input number ";
	std::cin >> in;
	switch (n) {
	case 1:
		in = (in - 32) / 1.8;
		std::cout << in << " Degrees Celsius" << std::endl;
		break;
	case 2:
		in = (in*1.8) + 32;
		std::cout << in << " Degrees Fahrenheit" << std::endl;
		break;
	}
	goto loop;
	return 0;
}