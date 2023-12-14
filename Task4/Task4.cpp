// Task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void fillArray(int** array, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == j) {
                array[i][j] = 0;
            }
            else if (i < j) {
                array[i][j] = 2; 
            }
            else {
                array[i][j] = 1; 
            }
        }
    }
}

void printArray(int** array, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << array[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

int main() {
    int size;

    std::cin >> size;

    int** array = new int* [size];
    for (int i = 0; i < size; ++i) {
        array[i] = new int[size];
    }

    fillArray(array, size);

    std::cout << "Матриця N × N:\n";
    printArray(array, size);


    return 0;
}