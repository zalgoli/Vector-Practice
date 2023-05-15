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

	// 3D-VECTOR PRACTICE

	std::cout << "\nProvide the number of rows, columns and layers for the 3D matrix:\n";
	int rows2, columns2, layers;
	std::cin >> rows2;
	std::cin >> columns2;
	std::cin >> layers;

	std::cout << "You can choose to input custom elements (which will be sorted) or to input the first N numbers (input 1 or 2): \n";
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1: {
		std::vector<std::vector<std::vector<int>>> vec3D(layers, std::vector<std::vector<int>>(rows, std::vector<int>(columns)));

		// Taking input
		for (int i = 0; i < vec3D.size(); i++) {
			for (int j = 0; j < vec3D[i].size(); j++) {
				for (int k = 0; k < vec3D[i][j].size(); k++) {
					std::cin >> vec3D[i][j][k];
				}
			}
		}

		// Sorting
		for (int i = 0; i < vec3D.size(); i++) {
			std::sort(vec3D.begin(), vec3D.end());
			for (int j = 0; j < vec3D[i].size(); j++) {
				std::sort(vec3D[i].begin(), vec3D[i].end());
				for (int k = 0; k < vec3D[i][j].size(); k++) {
					std::sort(vec3D[i][j].begin(), vec3D[i][j].end());
				}
			}
		}

		// Outputting
		for (int i = 0; i < vec3D.size(); i++) {
			std::cout << "\n\n\n";
			for (int j = 0; j < vec3D[i].size(); j++) {
				std::cout << "\n";
				for (int k = 0; k < vec3D[i][j].size(); k++) {
					std::cout << vec3D[i][j][k] << " ";
				}
			}
		}
		break;
	}
	case 2: {
		std::vector<std::vector<std::vector<int>>> vec3D(layers, std::vector<std::vector<int>>(rows2, std::vector<int>(columns2)));

		// Populating
		int counter = 0;
		for (int i = 0; i < vec3D.size(); i++) {
			for (int j = 0; j < vec3D[i].size(); j++) {
				for (int k = 0; k < vec3D[i][j].size(); k++) {
					vec3D[i][j][k] = counter++;
				}
			}
		}

		// Outputting
		for (int i = 0; i < vec3D.size(); i++) {
			std::cout << "\n\n\n";
			for (int j = 0; j < vec3D[i].size(); j++) {
				std::cout << "\n";
				for (int k = 0; k < vec3D[i][j].size(); k++) {
					std::cout << vec3D[i][j][k] << " ";
				}
			}
		}
		break;
	}
	}

	return 0;
}