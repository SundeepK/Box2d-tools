#include "SFMLB2dDebugDraw.h"

SFMLB2dDebugDraw::SFMLB2dDebugDraw(sf::RenderWindow& renderWindow) : m_renderWindow(&renderWindow)
{
}

SFMLB2dDebugDraw::~SFMLB2dDebugDraw()
{
}

void SFMLB2dDebugDraw::DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color)
{
    sf::ConvexShape polygon(vertexCount);
	for(int i = 0; i < vertexCount; i++)
	{
		sf::Vector2f transformedVec = SFMLB2dDebugDraw::B2VecToSFVec(vertices[i]);
		polygon.setPoint(i, sf::Vector2f(std::floor(transformedVec.x), std::floor(transformedVec.y)));
	}
	polygon.setOutlineThickness(-1.f);
	polygon.setFillColor(sf::Color::Transparent);
	polygon.setOutlineColor(SFMLB2dDebugDraw::GLColorToSFML(color));

	m_renderWindow->draw(polygon);
}

void SFMLB2dDebugDraw::DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color)
{

        sf::ConvexShape polygon(vertexCount);
	for(int i = 0; i < vertexCount; i++)
	{
		sf::Vector2f transformedVec = SFMLB2dDebugDraw::B2VecToSFVec(vertices[i]);
		polygon.setPoint(i, sf::Vector2f(std::floor(transformedVec.x), std::floor(transformedVec.y)));
	}
	polygon.setOutlineThickness(-1.f);
	polygon.setFillColor(sf::Color::Transparent);
	polygon.setOutlineColor(SFMLB2dDebugDraw::GLColorToSFML(color));

	m_renderWindow->draw(polygon);
}

void SFMLB2dDebugDraw::DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color)
{

}

void SFMLB2dDebugDraw::DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color)
{


}

void SFMLB2dDebugDraw::DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color)
{


}

void SFMLB2dDebugDraw::DrawTransform(const b2Transform& xf)
{

}
