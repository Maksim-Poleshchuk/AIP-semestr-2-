/*
 * 3. Объявить динамический массив. Размер массива задаёт пользователь. Заполнить
массив случайными числами. Вывести на экран адреса и значения элементов
массива
*/

#include <iostream>
#include <ctime>

int main() {
    // Запрос у пользователя размера массива
    int size;
    std::cout << "Enter size of massive: ";
    std::cin >> size;

    long long* arr = new long long[size];

    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000;
    }

    // Вывод адресов и значений элементов массива
    for (int i = 0; i < size; i++) {
        std::cout << "Adress " << i << ": " << &arr[i]
                  << ", value " << i << ": " << arr[i] << std::endl;
    }

    delete[] arr;

    return 0;
}
