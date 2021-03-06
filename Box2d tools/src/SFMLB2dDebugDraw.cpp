#include "SFMLB2dDebugDraw.h"

SFMLB2dDebugDraw::SFMLB2dDebugDraw(sf::RenderTarget& renderWindow) : m_renderWindow(&renderWindow)
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
	sf::CircleShape shape(radius*30);
	shape.setPosition(SFMLB2dDebugDraw::B2VecToSFVec(center));
	// set a 1-pixel wide orange outline
	shape.setOutlineThickness(1.0f);
	shape.setOutlineColor(sf::Color(20, 60 , 70));
	m_renderWindow->draw(shape);
}

void SFMLB2dDebugDraw::DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color)
{
	sf::CircleShape shape(radius*30);

	shape.setPosition(SFMLB2dDebugDraw::B2VecToSFVec(b2Vec2(center.x - radius, center.y - radius)));
	// set a 1-pixel wide orange outline
	shape.setOutlineThickness(1.0f);
	shape.setOutlineColor(sf::Color(color.r, color.g, color.b));
	m_renderWindow->draw(shape);

}

void SFMLB2dDebugDraw::DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color)
{
	sf::VertexArray lines(sf::Lines, 2);
	lines[0].position = SFMLB2dDebugDraw::B2VecToSFVec(p1);
	lines[0].color = sf::Color(color.r, color.g, color.b);
	lines[1].position = SFMLB2dDebugDraw::B2VecToSFVec(p2);
	lines[1].color = sf::Color(color.r, color.g, color.b);

	m_renderWindow->draw(lines);

}

void SFMLB2dDebugDraw::DrawTransform(const b2Transform& xf)
{

}
