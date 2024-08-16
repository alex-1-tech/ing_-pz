#include "second_task.h"
#include <random>
#include <iostream>

namespace second_task {
    int generate_random_number(int start, int end) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(start, end);
        return dist(gen);
    }

    Matrix::Matrix() {
        n = generate_random_number(3, 10);
        if (generate_random_number(0, 1) == 0)
            clockwise_bypass = true;
        else
            clockwise_bypass = false;
        initializationMatrix();
    }

    [[maybe_unused]] Matrix::Matrix(int n) : n(n) {
        if (generate_random_number(0, 1) == 0)
            clockwise_bypass = true;
        else
            clockwise_bypass = false;
        initializationMatrix();
    }

    [[maybe_unused]] Matrix::Matrix(int n, bool clockwise_bypass) : n(n), clockwise_bypass(clockwise_bypass) { initializationMatrix(); }

    void Matrix::initializationMatrix() {
        matrix = new int *[n];
        for (int i = 0; i < n; i++) {
            matrix[i] = new int[n]{};
        }
        int step = 0, indent = 0, value = 0, i = 0, j = 0;
        while (value != n * n) {
            if(clockwise_bypass)
                matrix[i][j] = ++value;
            else
                matrix[j][i] = ++value;
            switch (step % 4) {
                case 0:
                    if (++i == n - indent - 1)
                        step++;
                    break;
                case 1:
                    if (++j == n - indent - 1)
                        step++;
                    break;
                case 2:
                    if (--i == indent)
                        step++;
                    break;
                case 3:
                    if (--j == indent) {
                        step++;
                        indent++;
                        value--;
                        j++;
                    }
                    break;
            }
        }
    }

    void Matrix::printMatrix() {
        std::cout << std::boolalpha;
        std::cout << "==========Matrix==========\nSize: " << n << std::endl;
        std::cout << "Clockwise bypass: " << (bool) clockwise_bypass << std::endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                std::cout << matrix[i][j] << ' ';
            std::cout << std::endl;
        }
    }

    void solution() {
        auto matrix = Matrix();
        matrix.printMatrix();
    }
}