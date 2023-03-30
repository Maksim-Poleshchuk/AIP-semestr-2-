/*
 * 2. Написать функцию для обмена значений переменных, указанных выше. Передача по
указателю. Выполнить программу по шагам и выписать в тетрадь адреса указателей
и величины переменных. (long long)
*/

#include <iostream>

void swap(long long* ptr1, long long* ptr2) {
    long long temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Объявление переменных и указателей на них
    long long var1 = 10, var2 = 5;
    long long* ptr1 = &var1, *ptr2 = &var2;

    // Вывод адресов и значений перед обменом
    std::cout << "Adress ptr1: " << ptr1 << ", value var1: " << var1 << std::endl;
    std::cout << "Adress ptr2: " << ptr2 << ", value var2: " << var2 << std::endl;

    // Обмен значениями
    swap(ptr1, ptr2);

    // Вывод адресов и значений после обмена
    std::cout << "Adress ptr1: " << ptr1 << ", value var1: " << var1 << std::endl;
    std::cout << "Adress ptr2: " << ptr2 << ", value var2: " << var2 << std::endl;

    return 0;
}
