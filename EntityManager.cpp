#include "EntityManager.h"
#include "memory"
#include <algorithm>

void EntityManager::init() {

}

EntityManager::EntityManager() = default;


bool shouldBeDeleted(const shared_ptr<Entity> &entity) {
    return entity->isActive();
}

void deleteFrom(vector<shared_ptr<Entity>> &entities) {
    entities.erase(
            std::remove_if(entities.begin(), entities.end(), shouldBeDeleted),
            entities.end());
}

/// Deletes entities from all entities and tag mapped entities each frame
void EntityManager::update() {
    for (const auto &e: m_toAdd) {
        m_entities.push_back(e);
        m_entityMap[e->tag()].push_back(e);
    }
    m_toAdd.clear();

    deleteFrom(m_entities);

    for (auto &[key, value]: m_entityMap)
        deleteFrom(value);

}

shared_ptr<Entity> EntityManager::addEntity(const string &tag) {
    auto entity = shared_ptr<Entity>(new Entity(tag, m_totalEntities++));
    m_toAdd.push_back(entity);
    return entity;
}

EntityVector &EntityManager::getEntities() {
    return m_entities;
}

EntityVector &EntityManager::getEntities(const string &tag) {
    return m_entityMap.at(tag);
}
