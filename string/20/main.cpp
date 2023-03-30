/*
 * 20) Дана строка. Вставить после каждого символа пробел. Пробел не считается символом, после которого надо ставить пробел
 */

#include <iostream>
#include <string>

int main() {
    std::string str;
    getline(std::cin, str);
    std::string newStr;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != ' ') {
            newStr.push_back(str[i]);
            newStr.push_back(' ');
        }
    }
    std::cout << newStr << std::endl;
    return 0;
}
