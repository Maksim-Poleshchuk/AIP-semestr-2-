/*
 * Дана матрица. Элементы первой строки — мощность электромотора, второй строки
— категория мотора (число от 1 до 3). Найти самый мощный мотор категории 3.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    srand(time(NULL));
    const int DIM = 6;
    int matrix[2][DIM];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < DIM; j++) {
            matrix[i][j] = rand() % 5 + 1;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    // поиск самого мощного мотора категории 3
    int max_power = 0;
    for (int j = 0; j < DIM; j++) {
        if (matrix[1][j] == 3 && matrix[0][j] > max_power) {
            max_power = matrix[0][j];
        }
    }

    std::cout << "Must powerfull motor in category 3: " << max_power << "\n";
    return 0;
}
