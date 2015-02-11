#ifndef BOX2D_TOOLS_BOX2D_TOOLS_INCLUDE_DEBUGDRAWER_H_
#define BOX2D_TOOLS_BOX2D_TOOLS_INCLUDE_DEBUGDRAWER_H_

#include "Box2DConstants.h"
#include <memory.h>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <Box2D/Box2D.h>

class DebugDrawer {
public:

	DebugDrawer();
	~DebugDrawer();

	sf::ConvexShape DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
	sf::ConvexShape DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
    sf::CircleShape DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color);
    sf::CircleShape DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color);
    sf::VertexArray DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color);
    void DrawTransform(const b2Transform& xf);



};

#endif /* BOX2D_TOOLS_BOX2D_TOOLS_INCLUDE_DEBUGDRAWER_H_ */
