//
// Created by ALVARO & MARCOS on 6/10/21.
//

#include "smart.hpp"
#include <iomanip>

smart::smart(int filas, int columnas)
    : filas_{filas},
      columnas_{columnas},
      vec_{std::make_unique<double[]>(filas_ * columnas_)} {
    CONTRACT_PRE(filas >= 0 && columnas >= 0)
}

smart::smart(const smart &m)
    : filas_{m.filas_},
      columnas_{m.columnas_},
      vec_{std::make_unique<double[]>(filas_ * columnas_)} {

    std::copy_n(m.vec_.get(), m.filas_ * m.columnas_, vec_.get());
}

smart &smart::operator=(const smart &m) {
    if (this == &m)
        return *this;

    std::unique_ptr<double[]> temp = std::make_unique<double[]>(m.filas_ * m.columnas_);
    std::copy_n(m.vec_.get(), m.filas_ * m.columnas_, temp.get());
    filas_ = m.filas_;
    columnas_ = m.columnas_;
    vec_= std::move(temp); // temp will be deleted after this

    return *this;
}

smart::smart(smart &&m) noexcept
    : filas_{m.filas_},
      columnas_{m.columnas_},
      vec_{std::move(m.vec_)} {

    m.filas_ = 0;
    m.columnas_ = 0;
    m.vec_ = nullptr;
}

smart &smart::operator=(smart &&m) noexcept {
    if (this == &m)
        return *this;

    filas_ = m.filas_;
    columnas_ = m.columnas_;
    vec_ = std::move(m.vec_);

    m.filas_ = 0;
    m.columnas_ = 0;
    m.vec_ = nullptr;

    return *this;
}

double smart::operator()(int x, int  y) const {
    CONTRACT_PRE(x < filas_ && y < columnas_)

    return vec_[columnas_ * x + y];
}

double &smart::operator()(int x, int y) {
    CONTRACT_PRE(x < filas_ && y < columnas_)

    return vec_[columnas_ * x + y];
}

double smart::diagonal() const noexcept {
    CONTRACT_PRE(filas_ == columnas_)

    double result = 0;
    for (int i = 0; i < filas_; ++i)
        result += vec_[i * columnas_ + i];

    return result;
}

//int method = 0;

/*void smart::next_method() {
    method = (method + 1) % 3;
}*/

smart &smart::operator+=(const smart &m) {
    CONTRACT_PRE(filas_ == m.filas_ && columnas_ == m.columnas_)

    for (int i = 0; i < filas_ * columnas_; ++i)
        vec_[i] += m.vec_[i];

    return *this;
}

smart &smart::operator-=(const smart &m) {
    CONTRACT_PRE(filas_ == m.filas_ && columnas_ == m.columnas_)

    for (int i = 0; i < filas_ * columnas_; ++i)
        vec_[i] -= m.vec_[i];

    return *this;
}

smart &smart::operator*=(const smart &m) {
    CONTRACT_PRE(columnas_ == m.filas_)

    smart temp{filas_, m.columnas_};

    /*if (method == 0) {
        for (int i = 0; i < temp.filas_; ++i)
            for (int j = 0; j < temp.columnas_; ++j) {
                double sum = 0;
                for (int k = 0;
                     k < columnas_; ++k) // k before j is faster, closer elements in memory -> faster memory access
                     sum += vec_[i * columnas_ + k] * m.vec_[k * m.columnas_ + j];
                temp.vec_[i * m.columnas_ + j] = sum;
            }
    }
    else if (method == 1) {
        for (int i = 0; i < temp.filas_; ++i)
            for (int j = 0; j < temp.columnas_; ++j)
                for (int k = 0; k < columnas_; ++k) // k before j is faster, closer elements in memory -> faster memory access
                    temp.vec_[i * m.columnas_ + j] += vec_[i * columnas_ + k] * m.vec_[k * m.columnas_ + j];

    }
    else {*/
        for (int i = 0; i < temp.filas_; ++i)
            for (int k = 0; k < columnas_; ++k) // k before j is faster, closer elements in memory -> faster memory access
                for (int j = 0; j < temp.columnas_; ++j)
                    temp.vec_[i * m.columnas_ + j] += vec_[i * columnas_ + k] * m.vec_[k * m.columnas_ + j];


    //}

    *this = std::move(temp);
    return *this;
}

smart operator+(const smart &m, const smart &n) {
    smart temp{m};
    return temp += n;
}

smart operator-(const smart &m, const smart &n) {
    smart temp{m};
    return temp -= n;
}

smart operator*(const smart &m, const smart &n) {
    smart temp{m};
    return temp *= n;
}

std::ostream &operator<<(std::ostream &os, const smart &m) {
    for (int i = 0; i < m.filas(); ++i) {
        for (int j = 0; j < m.columnas(); ++j)
            os << "[" << i << "," << j << "] : " << std::setw(10) << m(i, j);
        os << "\n";
    }

    return os;
}






