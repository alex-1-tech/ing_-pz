namespace second_task {
    int generate_random_number(int start, int end);

    void solution();

    class Matrix {
    private:
        int n; // размер матрицы в диапазоне от 3 до 10
        int **matrix{};
        bool clockwise_bypass;
    public:
        explicit Matrix();

        [[maybe_unused]] explicit Matrix(int n);

        [[maybe_unused]] explicit Matrix(int n, bool clockwise_bypass);

        void printMatrix();

    private:
        void initializationMatrix();
    };
}