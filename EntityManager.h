#include "Entity.h"
#include "vector"
#include "map"

typedef std::vector<std::shared_ptr<Entity>> EntityVector;
typedef std::map<string, EntityVector> EntityMap;

class EntityManager {
    EntityVector m_entities;
    EntityMap m_entityMap;
    EntityVector m_toAdd;
    size_t m_totalEntities = 0;
    void init();

public:

    EntityManager();

    void update();

    shared_ptr<Entity> addEntity(const string& tag);

    EntityVector &getEntities();

    EntityVector &getEntities(const string& tag);
};

