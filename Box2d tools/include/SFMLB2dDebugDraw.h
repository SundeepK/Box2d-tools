#ifndef SFMLB2DDEBUGDRAW_H
#define SFMLB2DDEBUGDRAW_H

#include "Box2DConstants.h"
#include <memory.h>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <Box2D/Box2D.h>

class SFMLB2dDebugDraw :  public b2Draw
{

public:
    SFMLB2dDebugDraw(sf::RenderWindow& window);
    virtual ~SFMLB2dDebugDraw();

    static sf::Color GLColorToSFML(const b2Color &color, sf::Uint8 alpha = 255)
    {
        return sf::Color(static_cast<sf::Uint8>(color.r * 255), static_cast<sf::Uint8>(color.g * 255), static_cast<sf::Uint8>(color.b * 255), alpha);
    }

    static sf::Vector2f B2VecToSFVec(const b2Vec2 &vector, bool scaleToPixels = true)
    {
        return sf::Vector2f(vector.x * (scaleToPixels ? Box2DConstants::WORLD_SCALE : 1.f), vector.y * (scaleToPixels ? Box2DConstants::WORLD_SCALE : 1.f));
    }

    void DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
    void DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
    void DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color);
    void DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color);
    void DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color);
    void DrawTransform(const b2Transform& xf);

private:
    std::unique_ptr<sf::RenderWindow> m_renderWindow;

};

#endif // SFMLB2DDEBUGDRAW_H
