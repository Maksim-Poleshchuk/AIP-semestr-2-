/*
 * Преобразовать матрицу, умножив элементы каждой строки на значение второго
элемента этой строки.
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL)); // инициализация генератора случайных чисел
    const int ROWS = 3, COLS = 4;
    int matrix[ROWS][COLS];

    // заполнение матрицы случайными числами и конвертация в строку
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            matrix[i][j] = rand() % 10 + 1;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    // умножение элементов каждой строки на значение второго элемента
    for (int i = 0; i < ROWS; i++) {
        int mult = matrix[i][1];
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] *= mult;
        }
    }

    std::cout << "New matrix:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
