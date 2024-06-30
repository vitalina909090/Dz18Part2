#include <iostream>
#include <fstream>
#include <string>
#include "newfail.h"
#include <Windows.h> 

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ifstream inputFile("text1.txt");
    ofstream outputFile("text2.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "Файл не відкривається" << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        string transliter = Tran(line);
        outputFile << transliter << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Вдалось!" << endl;
    return 0;
}