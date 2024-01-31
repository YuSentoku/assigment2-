#include <iostream>
#include <cmath>
int main() {
	std::cout << "Please enter a positive number for Cp: ";
	double Cp;
	std::cin >> Cp;
	std::cout << "Please enter a positive number for Rp: ";
	double Rp;
	std::cin >> Rp;
	std::cout << "Please enter a positive number for b: ";
	double b;
	std::cin >> b;
	// Compute and print N
	double N = b / (Rp-Cp);
	std::cout << "N is: " << ceil(N) << std::endl;
}
