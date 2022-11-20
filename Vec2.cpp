#include "Vec2.h"
#include <cmath>


Vec2::Vec2() {
    this->x = 0;
    this->y = 0;
}

Vec2::Vec2(float xIn, float yIn) : x(xIn), y(yIn) {
}

bool Vec2::operator==(const Vec2 &rhs) const {
    return this->x == rhs.x && this->y == rhs.y;
}

bool Vec2::operator!=(const Vec2 &rhs) const {
    return !(*this == rhs);
}

Vec2 Vec2::operator+(const Vec2 &rhs) const {
    return {this->x + rhs.x, this->y + rhs.y};
}

Vec2 Vec2::operator-(const Vec2 &rhs) const {
    return {this->x - rhs.x, this->y - rhs.y};
}

Vec2 Vec2::operator/(float val) const {
    return {this->x / val, this->y / val};

}

Vec2 Vec2::operator*(float val) const {
    return {this->x * val, this->y * val};
}

Vec2 Vec2::operator+=(const Vec2 &rhs) {
    this->y += rhs.y;
    this->x += rhs.x;
    return *this;
}

Vec2 Vec2::operator-=(const Vec2 &rhs) {
    this->y -= rhs.y;
    this->x -= rhs.x;
    return *this;
}

Vec2 Vec2::operator/=(const Vec2 &rhs) {
    this->y /= rhs.y;
    this->x /= rhs.x;
    return *this;
}

Vec2 Vec2::operator*=(const Vec2 &rhs) {
    this->y *= rhs.y;
    this->x *= rhs.x;
    return *this;
}

float Vec2::dist(const Vec2 &rhs) const {
    return sqrt(
            (pow(this->x - rhs.x, 2) +
             pow(this->y - rhs.y, 2)
            ));
}



