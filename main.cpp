#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    for (int f = 1; f <= 3; ++f) {
        std::ofstream out("file" + std::to_string(f) + ".txt");
        for (int i = 0; i < 10; ++i) {
            out << (1 + std::rand() % 10);
            if (i < 9) out << " ";
        }
        out << "\n";
    }
    std::cout << "Файлы file1.txt, file2.txt, file3.txt созданы.\n";
    return 0;
}