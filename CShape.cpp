#include <SFML/Graphics.hpp>
#include "CShape.h"

CShape::CShape(float radius, int points, const sf::Color &fill, const sf::Color &outline, float thickness)
        : circle(radius, points) {
    circle.setFillColor(fill);
    circle.setOutlineColor(outline);
    circle.setOutlineThickness(thickness);
    circle.setOrigin(radius, radius);
}
