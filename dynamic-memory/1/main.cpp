/*
 * 1. Объявить указатели на две переменные указанного типа. Используя указатели
произвести операции сложения и вычитания над переменными. Вывести адреса
указателей. Тип long long
*/

#include <iostream>

int main() {
    // Объявление переменных и указателей на них
    long long var1 = 10, var2 = 5;
    long long* ptr1 = &var1, *ptr2 = &var2;

    // Сложение и вычитание переменных с помощью указателей
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    std::cout << "*ptr1 + *ptr2: " << *ptr1 << std::endl;
    std::cout << "*ptr1 - *ptr2: " << *ptr2 << std::endl;

    // Вывод адресов указателей
    std::cout << "Adress ptr1: " << ptr1 << std::endl;
    std::cout << "Adress ptr2: " << ptr2 << std::endl;

    return 0;
}
