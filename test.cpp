#include <iostream>
#include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */

void func(char first, std::string second, int i);

int main() {

    std::string original_str = "XMJYAUZ";
    std::string changed_str = "XMoooJAATYZ";

    for (int i = 0, j = 0; i < changed_str.size(); ++i) {
        if (original_str[i] != changed_str[j]) {
            for (int count = i; count < changed_str.size(); ++count) {
                if (original_str[i] == changed_str[count]) {
                    for (int count1 = i; count1 < count; ++count1) {
                        std::cout << GREEN << "+" << changed_str[count1] << RESET;
                        ++j;
                        if (count1 == count - 1) {
                            std::cout << changed_str[j];
                            ++j;
                        }
                    }
                    break;
                }
            }
        } else {
            std::cout << changed_str[j];
            ++j;
        }
    }

    std::cout << std::endl << std::endl;
    // std::cout << GREEN << " +" << changed_str[j] << RESET << " ";
    // std::cout << RED << " -" << original_str[i] << RESET << " ";

    return 0;
}

// void func(std::string second, int i) {
//     for (int count1 = i; count1 < count; ++count1) {
//         std::cout << GREEN << "+" << changed_str[count1] << RESET;
//         ++j;
//         if (count1 == count - 1) {
//             std::cout << changed_str[j];
//             ++j;
//         }
//     }
// }