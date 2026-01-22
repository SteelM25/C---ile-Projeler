#ifndef NOKTA_H
#define NOKTA_H

class Nokta {
private:
    float x;
    float y;

public:
    // Parametreli constructor
    Nokta(float xDegeri, float yDegeri);

    float getX() const;
    float getY() const;

    void  setX(float xDegeri);
    void  setY(float yDegeri);
};

#endif // NOKTA_H
