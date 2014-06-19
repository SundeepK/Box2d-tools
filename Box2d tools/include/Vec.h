#ifndef VEC_H
#define VEC_H

#include <Box2D.h>
#include <SFML/Graphics.hpp>
#include "Box2DConstants.h"

class Vec
{
    public:
        Vec();
        Vec(float x, float y);
        virtual ~Vec();
        Vec& operator =(const b2Vec2& v);
        Vec( const b2Vec2& other );
        Vec& operator =(const sf::Vector2f& v);
        Vec( const sf::Vector2f& other );
        Vec mToPix();
        Vec pixToM();
        sf::Vector2f toSFMLv();
        b2Vec2 toB2v();

        Vec& operator /(float divisor);
        float x;
        float y;
    protected:
    private:
        void setVals(const float& x, const float& y);

};

#endif // VEC_H
