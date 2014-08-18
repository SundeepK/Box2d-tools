#ifndef B2BOXBUILDER_H
#define B2BOXBUILDER_H

#include "B2DBuilderHelper.h"
#include "Box2DConstants.h"
#include "B2Builder.h"

class B2BoxBuilder : public B2Builder
{
public:
B2BoxBuilder();
    B2BoxBuilder(float width, float height);
    B2BoxBuilder(std::vector<b2Vec2>& points, b2Body* bodyToCopyFrom);
    B2BoxBuilder&  setPosition(b2Vec2 position);
    B2BoxBuilder&  bodyType(b2BodyType bodyType);
    B2BoxBuilder&  setFriction(float friction);
    B2BoxBuilder&  setRestitution(float restitution);
    B2BoxBuilder&  setDensity(float density);
    B2BoxBuilder&  setSensor(bool isSensor);
    b2Body* build(b2World& world);
protected:
private:
    float m_width;
    float m_height;
    B2DBuilderHelper m_builder;
    b2PolygonShape m_boxShape;

};

#endif // B2BOXBUILDER_H
