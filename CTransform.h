#include "Vec2.h"

class CTransform {
    Vec2 pos;
    Vec2 speed;
    Vec2 scale;
    double angle;

    CTransform();

    CTransform(Vec2 pos, Vec2 speed, Vec2 scale, double angle);
};

