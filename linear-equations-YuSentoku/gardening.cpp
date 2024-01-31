#include <iostream>
#include <cmath>
int main() {
	std::cout << "Please enter a positive number for n1: ";
	double n1;
	std::cin >> n1;
	std::cout << "Please enter a positive number for n2: ";
	double n2;
	std::cin >> n2;
	std::cout << "Please enter a positive number for n3: ";
	double n3;
	std::cin >> n3;
	std::cout << "Please enter a positive number for p1: ";
	double p1;
	std::cin >> p1;
	std::cout << "Please enter a positive number for p2: ";
	double p2;
	std::cin >> p2;
	std::cout << "Please enter a positive number for p3: ";
	double p3;
	std::cin >> p3;
	std::cout << "Please enter a positive number for k1: ";
	double k1;
	std::cin >> k1;
	std::cout << "Please enter a positive number for k2: ";
	double k2;
	std::cin >> k2;
	std::cout << "Please enter a positive number for k3: ";
	double k3;
	std::cin >> k3;
	// Compute and print M1
	double M1 = (k3-n3+(n3-n2+k2-k3)*((p3-n3)/(n2-n3+p3-p2)))/(k3-n3+n1-k1+(n3-n2+k2-k3)*((n1-n3+p3-p1)/(n2-n3+p3-p2))) ;
 	 std::cout << "M1 is: " << M1 << std::endl;
 	 // Compute and print M2
 	 double M2 = (p3-n3-M1*(n1-n3+p3-p1))/(n2-n3+p3-p2) ;
 	 std::cout << "M2 is: " << M2 << std::endl;
 	 // Compute and print M1
 	 double M3 = 1-(M1+M2) ;
 	 std::cout << "M3 is: " << M3 << std::endl;

}

