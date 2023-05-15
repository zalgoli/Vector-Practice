#include <iostream>
#include <vector>
#include <algorithm>

// Practicing Vectors in C++

int main() {

	// 1D-VECTOR PRACTICE

	std::cout << "Define the number of elements for the vector: \n";
	int size;
	std::cin >> size;
	std::vector<int> vec(size);
	std::cout << "Thank you, now provide the elements for the vector: \n";
	for (int i = 0; i < size; i++) {
		std::cin >> vec[i];
	}
	std::cout << "Thanks. Here are your vector elements in order of input: \n";
	for (int i = 0; i < size; i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << "\nThis marks the end of 1D-vector practice.\n";

	// 2D-VECTOR PRACTICE

	std::cout << "Input the rows and columns for the vector matrix: \n";
	int rows, columns;
	std::cin >> rows;
	std::cin >> columns;
	std::vector<std::vector<int>> vec2D (rows, std::vector<int> (columns));

	for (int i = 0; i < vec2D.size(); i++) {
		for (int j = 0; j < vec2D[i].size(); j++) {
			std::cin >> vec2D[i][j];
		}
	}

	std::cout << "Thanks. Here are your elements, sorted, in a 2D vector: \n";

	for (int i = 0; i < rows; i++) {
		std::sort(vec2D[i].begin(), vec2D[i].end());
	}

	std::sort(vec2D.begin(), vec2D.end());

	for (int i = 0; i < vec2D.size(); i++) {
		std::cout << "\n";
		for (int j = 0; j < vec2D[i].size(); j++) {
			std::cout << vec2D[i][j] << " ";
		}
	}

	return 0;
}