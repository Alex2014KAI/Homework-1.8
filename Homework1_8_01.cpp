#include <iostream>

void counting_function() {
	static int counter{ 0 };
	counter++;
	std::cout << "Number of function calls counting_function(): " << counter << std::endl;
};

int main() {

	setlocale(LC_ALL, "Russian");

	for (int i = 0; i < 15; i++)
	{
		counting_function();
	}

return 0;
}
