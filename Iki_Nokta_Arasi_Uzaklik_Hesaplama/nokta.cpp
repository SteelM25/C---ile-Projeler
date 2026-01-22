#include "nokta.h"

// Parametreli constructor
Nokta::Nokta(float xDegeri, float yDegeri) : x(xDegeri), y(yDegeri) {}

float Nokta::getX() const {
    return x;
}

float Nokta::getY() const {
    return y;
}

void  Nokta::setX(float xDegeri) {
    x = xDegeri;
}

void  Nokta::setY(float yDegeri) {
    y = yDegeri;
}
