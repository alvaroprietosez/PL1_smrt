//
// Created by ALVARO & MARCOS  on 6/10/21.
//
//Github es lo mejor del mundo

#ifndef MATRIZ_PRACTICA1_SMART_HPP
#define MATRIZ_PRACTICA1_SMART_HPP
#include "mincontracts/mincontracts.hpp"

#include <memory>

class smart {

    private:

        int filas_;
        int columnas_;
        std::unique_ptr<double[]> vec_;

    public:

        smart(): filas_{0}, columnas_{0}, vec_{nullptr} {}
        smart(int filas, int columnas);

        smart(const smart &m);
        smart &operator=(const smart &m);
        smart(smart &&m) noexcept;
        smart &operator=(smart &&m) noexcept;
        ~smart() noexcept {
            filas_ = 0;
            columnas_ = 0;
            vec_ = nullptr;
        }

        [[nodiscard]] int filas() const noexcept { return filas_; }
        [[nodiscard]] int columnas() const noexcept { return columnas_; }
        [[nodiscard]] double diagonal() const noexcept;

        double operator()(int x, int y) const;
        double &operator()(int x, int y);

        smart &operator+=(const smart &m);
        smart &operator-=(const smart &m);
        smart &operator*=(const smart &m);

        static void next_method();
};

smart operator+(const smart &m, const smart &n);
smart operator-(const smart &m, const smart &n);
smart operator*(const smart &m, const smart &n);

std::ostream &operator<<(std::ostream &os, const smart &m);



#endif //MATRIZ_PRACTICA1_SMART_HPP
