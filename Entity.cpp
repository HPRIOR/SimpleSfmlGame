//
// Created by HARRY PRIOR on 19/11/2022.
//

#include "Entity.h"

#include <utility>

Entity::Entity() = default;

Entity::Entity(string tag, size_t id) : m_id(id), m_tag(std::move(tag)), m_active(true) {
}

void Entity::destroy() {
    m_active = false;
}

bool Entity::isActive() const {
    return this->m_active;
}

const string &Entity::tag() const {
    return this->m_tag;
}

size_t Entity::id() const {
    return m_id;
}
