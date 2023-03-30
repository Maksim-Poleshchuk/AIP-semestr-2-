/*
 * Реализовать вычисление матричной нормы суммирование всех элементов матрицы(5)
 */

#include <iostream>
#include <ctime>
#include <array>

const int MAX_SIZE = 3;

void allocateMatrix(std::array<std::array<int, MAX_SIZE>, MAX_SIZE> & matrix);
void fillMatrix(std::array<std::array<int, MAX_SIZE>, MAX_SIZE>& matrix);
void printMatrix(const std::array<std::array<int, MAX_SIZE>, MAX_SIZE>& matrix);
int sumMatrix(const std::array<std::array<int, MAX_SIZE>, MAX_SIZE>& matrix);

int main() {
    srand(time(NULL));

    std::array<std::array<int, MAX_SIZE>, MAX_SIZE> matrix;
    allocateMatrix(matrix);
    fillMatrix(matrix);
    printMatrix(matrix);
    std::cout << "Sum of all elements: " << sumMatrix(matrix) << "\n";
    return 0;
}

void allocateMatrix(std::array<std::array<int, MAX_SIZE>, MAX_SIZE> & matrix) {
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            matrix[i][j] = 0;
        }
    }
}

void fillMatrix(std::array<std::array<int, MAX_SIZE>, MAX_SIZE>& matrix) {
    for (int i = 0; i < MAX_SIZE ; i++) {
        for (int j = 0; j < MAX_SIZE ; j++) {
            matrix[i][j] = rand() % 10;
        }
    }
}

void printMatrix(const std::array<std::array<int, MAX_SIZE>, MAX_SIZE>& matrix) {
    for (int i = 0; i < MAX_SIZE ; i++) {
        for (int j = 0; j < MAX_SIZE ; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int sumMatrix(const std::array<std::array<int, MAX_SIZE>, MAX_SIZE>& matrix) {
    int sum = 0;
    for (int i = 0; i < MAX_SIZE ; i++) {
        for (int j = 0; j < MAX_SIZE ; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}
