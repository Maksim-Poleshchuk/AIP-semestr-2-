/*
 * 3. Протабулировать функцию. Начальную и финальную точки, шаг, параметр Ч
считывать из файла in.txt. Результат записывать в текстовый файл out.txt. Формат
записи данных:
x0, y(x0)
x1, y(x1)
x2, y(x2)
и т.д.
j. 𝑦 = x + x^2 / 3 + x^3 / 4 + ... x^C/(C+1)
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include<cmath>

int main() {
    double x0, x1, step, C; // параметр Ч - это C
    std::ifstream f("input.txt");
    f >> x0 >> x1 >> step >> C;
    f.close();

    std::ofstream fout("out.txt");
    for (double x = x0; x <= x1; x += step) {
        double y = 0;
        for (int i = 1; i <= C; i++) {
            if( i == 1)
                y += x;
            else
                y += pow(x, i) / (i + 1);
        }
        fout << x << ", " << y << std::endl;
    }
    fout.close();

    std::cout << "Data save in out.txt" << std::endl;

    return 0;
}
