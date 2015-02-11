#ifndef BOX2D_TOOLS_BOX2D_TOOLS_INCLUDE_SFGUIDEBUGDRAW_H_
#define BOX2D_TOOLS_BOX2D_TOOLS_INCLUDE_SFGUIDEBUGDRAW_H_

#include <SFGUI/SFGUI.hpp>
#include <SFGUI/Widgets.hpp>
#include <DebugDrawer.h>
#include "Box2DConstants.h"
#include <memory.h>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <Box2D/Box2D.h>

class SFGUIDebugDraw : public b2Draw {
public:
	SFGUIDebugDraw(sfg::Canvas::Ptr canvas);
	~SFGUIDebugDraw();

    void DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
    void DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
    void DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color);
    void DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color);
    void DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color);
    void DrawTransform(const b2Transform& xf);

private:
	DebugDrawer m_debugDrawer;
	sfg::Canvas::Ptr m_canvas;
};

#endif /* BOX2D_TOOLS_BOX2D_TOOLS_INCLUDE_SFGUIDEBUGDRAW_H_ */
