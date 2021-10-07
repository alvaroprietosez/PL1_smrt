//
// Created by ALVARO & MARCOS  on 6/10/21.
//

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

        bool operator==(const smart &v) const noexcept;

        [[nodiscard]] int filas() const noexcept { return filas_; }
        [[nodiscard]] int columnas() const noexcept { return columnas_; }
        [[nodiscard]] bool is_available() const noexcept { return vec_ != nullptr; } // quitar

        double operator()(int x, int y) const;
        double &operator()(int x, int y);

        smart &operator+=(const smart &m);
        smart &operator-=(const smart &m);
        smart &operator*=(const smart &m);
};

smart operator+(const smart& m, const smart& n);
smart operator-(const smart& m, const smart& n);
smart operator*(const smart& m, const smart& n);

std::ostream &operator<<(std::ostream &os, smart &m);

#endif //MATRIZ_PRACTICA1_SMART_HPP
