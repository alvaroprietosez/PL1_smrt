#include <iostream>
#include <random>
#include "smart.hpp"
#include <chrono>

int ask_user_for_numbers();

void set_values_for_matrix(smart &first_matrix, smart &second_matrix);

int main() {

    int n = ask_user_for_numbers();

    smart first_matrix{n, n};
    smart second_matrix{n, n};

    set_values_for_matrix(first_matrix, second_matrix);

    // Sum both matrix
    first_matrix += second_matrix;

    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

    // Find sum's square
    first_matrix *= first_matrix;

    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[ns]" << std::endl;

    // std::cout << first_matrix << "\n";

    // Print square's diagonal
    std::cout << "Starting from two square matrix of " << n << " dimensions... \n"
    << "After sum them into a third one and  squaring it... \n"
    << "The result of adding their diagonal elements is: "
    << first_matrix.diagonal() << "\n";

    return 0;
}

int ask_user_for_numbers() {

    std::cout << "Welcome to squared matrix programme" << "\n";
    int number = -1;
    do {
        std::cout << "Please introduce a positive number corresponding to the square matrix dimensions" << "\n";
        std::cin >> number;
    } while (number < 0);

    return number;
}

void set_values_for_matrix(smart &first_matrix, smart &second_matrix) {

    std::random_device rd;
    std::mt19937_64 gen(rd()); // Create and seed the generator
    std::normal_distribution<> d(100, 2.5); // Create distribution

    for (int i = 0; i < first_matrix.filas(); ++i)
        for (int j = 0; j < first_matrix.columnas(); ++j) {
            first_matrix(i, j) = d(gen);
            second_matrix(i, j) = d(gen);
        }

}

