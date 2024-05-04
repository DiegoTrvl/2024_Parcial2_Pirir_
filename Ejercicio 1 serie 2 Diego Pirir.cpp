#include <iostream>
#include <fstream>
#include <filesystem>
#include <windows.h>

void createFiles(int numFiles) {
    std::string basePath = "C:\\Users\\torre\\OneDrive\\Desktop\\Repositorio ejercicio 1";
    std::string folder;

    if (numFiles % 2 == 0) {
        folder = "par\\";
    } else {
        folder = "impar\\";
    }

    std::filesystem::create_directory(basePath + folder);

    for (int i = 1; i <= numFiles; i++) {
        std::ofstream file(basePath + folder + "file" + std::to_string(i));
        file.close();
    }
}

int main() {
    int numFiles;
    std::cout << "Cuantos archivos desea crear? ";
    std::cin >> numFiles;

    createFiles(numFiles);

    return 0;
}
