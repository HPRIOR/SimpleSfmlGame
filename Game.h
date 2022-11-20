#include <SFML/Graphics.hpp>
#include "EntityManager.h"

class Game {
    sf::RenderWindow m_window;
    EntityManager m_entities;
    Entity m_player;
    bool m_paused;
    bool m_running;

    void init();
public:
    void update();

   void sMovement();
   void sUserInput();
   void sRender();
   void sEnemySpawner();
   void sCollision();

};
