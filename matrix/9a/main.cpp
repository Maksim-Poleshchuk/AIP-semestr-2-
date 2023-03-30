/*
 * Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
на экран матрицу, описывающую следующие сущности. Предложите свой вариант.
a. Двумерное изображение. Изображение состоит из пикселей. Каждый пиксель
характеризуется яркостью цветовых каналов: красный, синий, зелёный
*/

#include <iostream>
#include <array>

int main()
{
    const int ROWS = 2;
    const int COLS = 2;
    std::array<std::array<std::array<int, 3>, COLS>, ROWS> image;

    std::cout << "Input value of matrics cell (RGB):\n";
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            std::cout << "Pixel [" << i << "][" << j << "]: ";
            std::cin >> image[i][j][0] >> image[i][j][1] >> image[i][j][2];
        }
    }

    std::cout << "Matrix:\n";
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            std::cout << "[";
            for (int k = 0; k < 3; ++k)
            {
                std::cout << image[i][j][k];
                if (k < 2) std::cout << ",";
            }
            std::cout << "] ";
        }
        std::cout << "\n";
    }
    return 0;
}
