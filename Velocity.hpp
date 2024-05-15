#pragma once
#include "Point.hpp"
#include <cmath>

class Velocity {
  public:
    inline Velocity() = default;

    /**
     * @brief Конструктор скорости по модулю и углу
     * @param abs модуль скорости
     * @param angle угол скорости
     */
    inline Velocity(double abs, double angle) {
        const double x = std::cos(angle);
        const double y = std::sin(angle);
        vec = Point{x, y} * abs;
    }

    /**
     * @brief Конструктор скорости по вектору
     * @param vector вектор скорости
     */
    inline Velocity(const Point& vector) {
        setVector(vector);
    }

    inline void setVector(const Point& vector) {
        vec = vector;
    }

    inline Point vector() const {
        return vec;
    }

  private:
    Point vec;
};
