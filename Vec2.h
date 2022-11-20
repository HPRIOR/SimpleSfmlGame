#pragma once

class Vec2 {
public:
    float x = 0;
    float y = 0;

    Vec2();

    Vec2(float xIn, float yIn);

    bool operator==(const Vec2 &rhs) const;

    bool operator!=(const Vec2 &rhs) const;

    Vec2 operator+(const Vec2 &rhs) const;

    Vec2 operator-(const Vec2 &rhs) const;

    Vec2 operator/(float val) const;

    Vec2 operator*(float val) const;

    Vec2 operator+=(const Vec2 &rhs);

    Vec2 operator-=(const Vec2 &rhs);

    Vec2 operator/=(const Vec2 &rhs);

    Vec2 operator*=(const Vec2 &rhs);

    float dist(const Vec2 &rhs) const;

    float length() const;
};

