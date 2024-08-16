#include "first_task.h"
#include "second_task.h"
#include <iostream>

int main() {
    std::cout << "Enter the issue number: ";
    int number;
    std::cin >> number;
    if (number == 1) first_task::solution();
    else if (number == 2) second_task::solution();
}