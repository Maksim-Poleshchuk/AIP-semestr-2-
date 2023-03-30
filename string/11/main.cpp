#include <iostream>
#include <string>
#include <vector>

struct WordCount {
    std::string word;
    int count;
};

std::vector<WordCount> count_words(const std::string& str);
WordCount find_most_common_word(const std::vector<WordCount>& frequency);

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::vector<WordCount> frequency = count_words(input);

    WordCount most_common_word = find_most_common_word(frequency);

    std::cout << "The most common word in the text is \"" << most_common_word.word <<
        "\". It appears " << most_common_word.count << " times." << std::endl;

    return 0;
}

std::vector<WordCount> count_words(const std::string& str) {
    std::vector<WordCount> frequency;

    std::string current_word = "";
    for (int i = 0; i < str.size(); i++) {
        char c = str[i];
        if (c != ' ' && c != '\0') {
            current_word += std::tolower(c);
        } else {
            if (!current_word.empty()) {
                bool exists = false;
                for (int j = 0; j < frequency.size(); j++) {
                    WordCount& wc = frequency[j];
                    if (wc.word == current_word) {
                        wc.count++;
                        exists = true;
                        break;
                    }
                }
                if(!exists)
                {
                    WordCount new_wc;
                    new_wc.word = current_word;
                    new_wc.count = 1;
                    frequency.push_back(new_wc);
                }
                current_word = "";
            }
        }
    }

    return frequency;
}

WordCount find_most_common_word(const std::vector<WordCount>& frequency) {
    const WordCount& zero_word = frequency.front();
    WordCount most_common_word = zero_word;
    for (const auto& wc : frequency) {
        if (wc.count > most_common_word.count) {
            most_common_word = wc;
        }
    }
    return most_common_word;
}
