#ifndef B2DBuilderHelper_H
#define B2DBuilderHelper_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <Box2D/Box2D.h>
#include "Box2DConstants.h"
#include "B2Builder.h"


#include <memory.h>

class B2DBuilderHelper
{
public:

    B2DBuilderHelper&  setPosition(b2Vec2 position);
    B2DBuilderHelper&  bodyType(b2BodyType bodyType);
    B2DBuilderHelper&  setFriction(float friction);
    B2DBuilderHelper&  setRestitution(float restitution);
    B2DBuilderHelper&  setDensity(float density);
    B2DBuilderHelper&  setSensor(bool isSensor);
    B2DBuilderHelper&  setAngle(float angle);

    b2Body* build(b2World& world, b2Shape* shape);
private:

    b2BodyDef m_bodyDef;
    b2FixtureDef m_fixtureDef;

};
#endif // B2DBuilderHelper_H
