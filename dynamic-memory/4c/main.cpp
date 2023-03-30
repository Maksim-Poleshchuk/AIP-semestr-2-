/*
 * 4. Объявить сущность и описать её свойства. Объявить динамический массив
сущностей. Реализовать функцию, которая изменяет значения элемента (структура)
массива. Заполнить атрибуты числовыми и текстовыми значениями (диапазон
значений определить самостоятельно).
c. цветок
*/

#include <iostream>
#include <string>

struct Flower {
    std::string name;
    std::string color;
    double price;
};

void modifyFlower(Flower* arr, int index, std::string newName, std::string newColor, double newPrice) {
    arr[index].name = newName;
    arr[index].color = newColor;
    arr[index].price = newPrice;
}

int main() {
    int size = 3;
    Flower* flowers = new Flower[size];

    flowers[0] = {"Rose", "Red", 100.0};
    flowers[1] = {"Tulip", "White", 80.0};
    flowers[2] = {"Orchid", "Purple", 250.0};

    for (int i = 0; i < size; i++) {
        std::cout << "Element " << i << ":" << std::endl;
        std::cout << "Name: " << flowers[i].name << std::endl;
        std::cout << "Color: " << flowers[i].color << std::endl;
        std::cout << "Price: " << flowers[i].price << std::endl;
    }

    std::cout << std::endl;

    modifyFlower(flowers, 1, "Peony", "Pink", 120.0);

    for (int i = 0; i < size; i++) {
        std::cout << "Element " << i << ":" << std::endl;
        std::cout << "Name: " << flowers[i].name << std::endl;
        std::cout << "Color: " << flowers[i].color << std::endl;
        std::cout << "Price: " << flowers[i].price << std::endl;
    }

    delete[] flowers;

    return 0;
}
