#include <iostream>
#include <fstream>
#include <filesystem>
#include <windows.h>

void createFiles(int numFiles) {
    std::string basePath = "C:\\Users\\torre\\OneDrive\\Desktop\\ejercicio 2\\";
    std::string folder;

    if (numFiles % 2 == 0) {
        folder = "par\\";
    } else {
        folder = "impar\\";
    }

    std::filesystem::create_directory(basePath + folder);

    for (int i = 1; i <= numFiles; i++) {
        std::ofstream file(basePath + folder + "file" + std::to_string(i) + ".txt");
        for (int j = 0; j < i; j++) {
            file << "Esta es la línea " << j+1 << " del archivo " << i << "\n";
        }
        file.close();
    }
}

int main() {
    int numFiles;
    std::cout << " Cuntos archivos desea crear? ";
    std::cin >> numFiles;

    createFiles(numFiles);

    return 0;
}
