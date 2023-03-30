/*
 * Составить алгоритм, находящий, сколько раз в тексте сочетание “мир”(из-за проблемы с кириллицей в QT будет слово world) является отдельным словом (пробелы перед и после).
 */

#include <iostream>
#include <string>

int main() {
    std::string text = "world it very good and good world is much better world ";

    text = " " + text + " ";
    int count = 0;
    std::string pattern = " world ";
    size_t pos = text.find(pattern);

    while (pos != std::string::npos) {
        count++;
        pos = text.find(pattern, pos + 1);
    }

    std::cout << "count of words 'world' is  " << count << std::endl;

    return 0;
}
