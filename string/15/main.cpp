/*
 * 15) Дана строка. Если ее длина больше 10, то оставить в строке только первые 6 символов, иначе дополнить строку символами 'o' до длины 12:
 */

#include <iostream>
#include <string>

int main() {
    std::string text = "good";

    if (text.length() > 10) {
        text = text.substr(0, 6);
    } else {
        text.append(12 - text.length(), 'o');
    }

    std::cout << text << std::endl;

    return 0;
}
