#include "Vec.h"

Vec::Vec()
{
    //ctor
}

Vec::Vec(float x_, float y_) : x(x_) , y(y_)
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

Vec Vec::mToPix(){
    float x_ = x * Box2DConstants::WORLD_SCALE; float y_ = y * Box2DConstants::WORLD_SCALE;
    return Vec(x_,y_);
}

Vec Vec::pixToM(){
    float x_ = x / Box2DConstants::WORLD_SCALE; float y_ = y / Box2DConstants::WORLD_SCALE;
    return Vec(x_,y_);
}

sf::Vector2f Vec::toSFMLv(){
    return sf::Vector2f(x,y);
}

b2Vec2 Vec::toB2v(){
    return b2Vec2(x,y);
}



