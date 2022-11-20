//
// Created by HARRY PRIOR on 19/11/2022.
//

#include "CTransform.h"

CTransform::CTransform() = default;

CTransform::CTransform(Vec2 pos, Vec2 speed, Vec2 scale, double angle) : pos(pos), speed(speed), scale(scale),
                                                                         angle(angle) {

}
