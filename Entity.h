
// only the Entity manager should be able to instantiate this class
#include <memory>
#include "CCollision.h"
#include "CTransform.h"
#include "CScore.h"

using namespace std;

class Entity {
public:
    Entity();

    Entity(
            shared_ptr<CTransform> cTransform,
            shared_ptr<CCollision> cCollision,
            shared_ptr<CScore> cScore);
};
