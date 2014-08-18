#include "B2DBuilderHelper.h"

B2DBuilderHelper& B2DBuilderHelper::setPosition(b2Vec2 position){
    //divide by scale to convert to box2d scale
    m_bodyDef.position.Set( position.x, position.y );
    return *this;
}

B2DBuilderHelper&  B2DBuilderHelper::bodyType(b2BodyType bodyType){
    m_bodyDef.type = bodyType;
    return *this;
}

B2DBuilderHelper&  B2DBuilderHelper::setFriction(float friction){
    m_fixtureDef.friction = friction;
    return *this;
}

B2DBuilderHelper&  B2DBuilderHelper::setAngle(float rotation){
    m_bodyDef.angle = rotation;
    return * this;
}


B2DBuilderHelper&  B2DBuilderHelper::setRestitution(float restitution){
    m_fixtureDef.restitution = restitution;
    return *this;
}

B2DBuilderHelper&  B2DBuilderHelper::setDensity(float density){
    m_fixtureDef.density =density;

    return *this;
}

B2DBuilderHelper&  B2DBuilderHelper::setSensor(bool isSensor){
    m_fixtureDef.isSensor = isSensor;
    return *this;
}

b2Body* B2DBuilderHelper::build(b2World& world,  b2Shape* shape){
    m_fixtureDef.shape = shape;
    b2Body* body = world.CreateBody(&m_bodyDef);
    body->CreateFixture(&m_fixtureDef);
    return body;
}


