//
// Created by ALVARO & MARCOS on 6/10/21.
//

#include "smart.hpp"
#include <sstream>

smart::smart(int filas, int columnas)
    : filas_{filas},
      columnas_{columnas},
      vec_{std::make_unique<double[]>(filas_ * columnas_)} {
    CONTRACT_PRE(filas > 0 && columnas > 0)
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

    std::unique_ptr<double[]> aux = std::make_unique<double[]>(m.filas_ * m.columnas_);
    std::copy_n(m.vec_.get(), m.filas_ * m.columnas_, aux.get());
    filas_ = m.filas_;
    columnas_ = m.columnas_;
    vec_= std::move(aux); // aux will be deleted after this
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
    smart temp{std::move(m)};
    return (*this = temp);
}

double smart::operator()(int x, int  y) const {
    CONTRACT_PRE(x < filas_ && y < columnas_)
    return vec_[columnas_ * x + y];
}

double &smart::operator()(int x, int y) {
    CONTRACT_PRE(x < filas_ && y < columnas_)
    return vec_[columnas_ * x + y];
}

bool smart::operator==(const smart &v) const noexcept {
    if (filas_ != v.filas_ || columnas_ != v.columnas_)
        return false;

    u_int index = 0;
    while (index < filas_ * columnas_) {
        if (vec_[index] != v.vec_[index])
            return false;
        ++index;
    }

    return true;
}

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
    CONTRACT_PRE(columnas_==m.filas_)
    smart aux{filas_, m.columnas_};
    for (int i = 0; i < aux.filas_; ++i)
        for (int j = 0; j < aux.columnas_; ++j) {
            double sum = 0;
            for (int k = 0; k < columnas_; ++k)
                sum += vec_[i * columnas_ + k] * m.vec_[k * m.columnas_ + j];
            aux.vec_[i * m.columnas_ + j] = sum;
        }

    return (*this = aux);
}



smart operator+(const smart& m, const smart& n) {
    smart temp{m};
    return temp += n;
}

smart operator-(const smart& m, const smart& n) {
    smart temp{m};
    return temp -= n;
}

smart operator*(const smart& m, const smart& n) {
    smart temp{m};
    return temp *= n;
}

std::ostream &operator<<(std::ostream &os, smart &m) {
    int max_blank_space = 10;
    for (int i = 0; i < m.filas(); ++i) {
        for (int j = 0; j < m.columnas(); ++j) {
            os << "[" << i << "," << j << "] : " << m(i, j);
            std::ostringstream str_s;
            str_s << m(i, j);
            for (int k = static_cast<int>(str_s.str().size()); k < max_blank_space; ++k)
                os << " ";
        }
        os << "\n";
    }
    return os;
}








