#include <iostream>

namespace firstNamespace {
	int calc(int x, int y) {
		return x + y;
	}
};

namespace secondNamespace {
	int calc(int x, int y) {
		return x - y;
	}
}

namespace thirdNamespace {
	int calc(int x, int y) {
		return x * y;
	}
}

namespace fourthNamespace {
	int calc(int x, int y) {
		return x / y;
	}
}

int main() {

	int x = 6, y = 9;
	std::cout << "x = " << x << ", y = " << y << std::endl;

	std::cout << "Addition: " << firstNamespace::calc(x, y) << std::endl;
	std::cout << "Subtraction: " << secondNamespace::calc(x, y) << std::endl;
	std::cout << "Multiplication: " << thirdNamespace::calc(x, y) << std::endl;
	std::cout << "Division: " << fourthNamespace::calc(x, y) << std::endl;
	

return 0;
}