#include <vector>

namespace first_task {
    int ***createMatrix(int, int, int);

    void freeMatrix(int ***, int, int);
    std::vector<std::vector<int>> find_elements_z(int ***matrix, int l, int m, int n, int z);
    void solution();
}