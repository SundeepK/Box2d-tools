#include "Vec.h"

Vec::Vec()
{
    //ctor
}

Vec::~Vec()
{
    //dtor
}


Vec& Vec::operator=(const b2Vec2 &v)
{
    setVals(v.x,v.y);
    return *this;
}

Vec::Vec( const sf::Vector2f& other ) : x(other.x), y(other.y) {
}

Vec& Vec::operator=(const sf::Vector2f &v)
{
    setVals(v.x,v.y);
    return *this;
}

void Vec::setVals(const float& a, const float& b){
        x = a; y = b;
 }


Vec::Vec( const b2Vec2& other ) : x(other.x), y(other.y) {
}

Vec& Vec::operator /(float divisor){
    x /= divisor;y /= divisor;
    return *this;
}

Vec& Vec::mToPix(){
    x *= Box2DConstants::WORLD_SCALE;y *= Box2DConstants::WORLD_SCALE;
    return *this;
}

Vec& Vec::pixToM(){
    x /= Box2DConstants::WORLD_SCALE;y /= Box2DConstants::WORLD_SCALE;
    return *this;
}


