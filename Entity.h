
// only the Entity manager should be able to instantiate this class
#include <memory>
#include "CCollision.h"
#include "CTransform.h"
#include "CScore.h"

using namespace std;

class Entity {
    const string m_tag = "Default";
    bool m_active = true;
    size_t m_id = 0;

    Entity();

    Entity(string tag, size_t id);

    friend class EntityManager;

public:
    void destroy();

    [[nodiscard]] bool isActive() const;

    [[nodiscard]] const string &tag() const;

    [[nodiscard]] size_t id() const;

};
