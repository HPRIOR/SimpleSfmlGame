#include "Vec2.h"

class CTransform {
public:
    Vec2 pos = {0.0, 0.0};
    Vec2 speed = {0.0, 0.0};
    Vec2 scale = {0.0, 0.0};
    double angle = 0.0;

    CTransform();

    CTransform(Vec2 pos, Vec2 speed, Vec2 scale, double angle);
};

