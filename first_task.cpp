#include <vector>
#include <iostream>
#include "first_task.h"


namespace first_task {
    std::vector<std::vector<int>> find_elements_z(int ***matrix, int l, int m, int n, int z) {
        std::vector<std::vector<int>> elements;
        for (int i = 0; i < l; i++)
            for (int j = 0; j < m; j++)
                for (int k = 0; k < n; k++) {
                    if (matrix[i][j][k] == z)
                        elements.emplace_back(std::vector<int>{i, j, k});
                }
        return elements;
    }


    void solution() {
        int l, m, n;
        std::cout << "Enter size: " << std::endl;
        std::cout << ">", std::cin >> l;
        std::cout << ">", std::cin >> m;
        std::cout << ">", std::cin >> n;

        auto matrix = createMatrix(l, m, n);
        int z;
        std::cout << "Enter Z-value: ";
        std::cin >> z;
        auto ans = find_elements_z(matrix, l, m, n, z);
        for (const auto &i: ans) {
            std::cout << "{";
            for (auto j: i)
                std::cout << j << ';';
            std::cout << "}" << std::endl;
        }


        freeMatrix(matrix, l, m);
    }


    int ***createMatrix(int l, int m, int n) {
        std::cout << "Enter array values: ";
        int ***matrix = new int **[l];
        for (int i = 0; i < l; ++i) {
            matrix[i] = new int *[m];
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = new int[n];
                for (int k = 0; k < n; k++)
                    std::cin >> matrix[i][j][k];
            }
        }
        return matrix;
    }

    void freeMatrix(int ***matrix, int l, int m) {
        for (int i = 0; i < l; ++i) {
            for (int j = 0; j < m; ++j) {
                delete[] matrix[i][j];
            }
            delete[] matrix[i];
        }
        delete[] matrix;
    }
}