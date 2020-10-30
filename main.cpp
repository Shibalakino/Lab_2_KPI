#include <iostream>

int main() {
	double x = 0, y = 0;
	std::cout << "enter a value of point x: " << std::endl; 
	std::cin >> x;
	std::cout << "enter a value of point y: " << std::endl;
	std::cin >> y;
	if (y >= x && y >= -x && y <= 1 - x * x / 1) {
		std::cout << "your values are in range" << std::endl;
	}
	else {
		std::cout << "your values aren`t in range" << std::endl;
	}
	return 0;
}
