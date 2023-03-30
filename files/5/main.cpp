/*
 * Пользователь вводит данные о студентах: Фамилия, Средняя оценка, Курс.
Организовать запись данных из массива структур в файл в следующем формате: 1
строка Фамилия, 2 строка Средняя оценка, 3 строка Курс. Остальные строки
повторяют тройками эти данные для других студентов. Организовать переменные
для хранения информации.
*/

#include <iostream>
#include <fstream>
#include <array>

struct Student {
    std::string lname;
    double grade;
    int course;
};

int main() {
    const int num_students = 3;
    std::array<Student, num_students> students;

    for (int i = 0; i < num_students; i++) {
        std::cout << "Surname: ";
        std::cin >> students[i].lname;

        std::cout << "Midlle grade: ";
        std::cin >> students[i].grade;

        std::cout << "Kurs: ";
        std::cin >> students[i].course;
    }

    std::ofstream outfile("students.txt");
    for (int i = 0; i < num_students; i++) {
        outfile << "Фамилия: " << students[i].lname << std::endl;
        outfile << "Средняя оценка: " << students[i].grade << std::endl;
        outfile << "Курс: " << students[i].course << std::endl;
    }

    return 0;
}
