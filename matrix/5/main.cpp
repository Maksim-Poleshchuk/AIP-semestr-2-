/*
 * В квадратной матрице для каждой строки найти минимальный элемент и
переставить его с элементом, стоящим в этой строке на главной диагонали.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    const int DIM = 4;
    int matrix[DIM][DIM];

    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            matrix[i][j] = rand() % 10 + 1;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    // поиск минимального элемента в каждой строке
    for (int i = 0; i < DIM; i++) {
        int min = matrix[i][0], min_j = 0;
        for (int j = 1; j < DIM; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                min_j = j;
            }
        }
        // перестановка минимального элемента соответствующей строки
        if (min_j != i) {
            int temp = matrix[i][i];
            matrix[i][i] = min;
            matrix[i][min_j] = temp;
        }
    }

    std::cout << "New matrix:\n";
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
