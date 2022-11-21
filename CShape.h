#include <SFML/Graphics.hpp>

class CShape {
public:
    sf::CircleShape circle;

    CShape() = default;
    CShape(float radius, int points, const sf::Color &fill, const sf::Color &outline, float thickness);
};
