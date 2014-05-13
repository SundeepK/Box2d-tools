#ifndef B2BUILDER_H
#define B2BUILDER_H

#include <Box2D/Box2D.h>

class B2Builder
{

public:
    virtual B2Builder&  setPosition(b2Vec2 position) = 0;
    virtual B2Builder&  bodyType(b2BodyType bodyType) =0;
    virtual B2Builder&  setFriction(float friction) =0;
    virtual B2Builder&  setRestitution(float restitution)= 0;
    virtual  B2Builder&  setDensity(float density) = 0;
    virtual  B2Builder&  setSensor(bool isSensor) =0 ;
    virtual  b2Body* build(b2World& world) =0 ;
};

#endif // B2BUILDER_H
