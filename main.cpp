#include "first_task.h"
#include "second_task.h"
#include "third_task.h"
#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "Enter the issue number: ";
    int number;
    std::cin >> number;
    if (number == 1) first_task::solution();
    else if (number == 2) second_task::solution();
    else if (number == 3) third_task::solution(argc, argv);
    return 0;
}

