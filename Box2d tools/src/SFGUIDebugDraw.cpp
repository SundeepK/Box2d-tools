#include <SFGUIDebugDraw.h>

SFGUIDebugDraw::SFGUIDebugDraw(sfg::Canvas::Ptr canvas) : m_canvas(canvas) {
}

SFGUIDebugDraw::~SFGUIDebugDraw() {
}

void SFGUIDebugDraw::DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color) {
	m_canvas->Draw(m_debugDrawer.DrawPolygon(vertices, vertexCount, color));
}

void SFGUIDebugDraw::DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color) {
	m_canvas->Draw(m_debugDrawer.DrawSolidPolygon(vertices, vertexCount, color));
}

void SFGUIDebugDraw::DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color) {
	m_canvas->Draw(m_debugDrawer.DrawCircle(center, radius, color));
}

void SFGUIDebugDraw::DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color) {
	m_canvas->Draw(m_debugDrawer.DrawCircle(center, radius, color));
}

void SFGUIDebugDraw::DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color) {
	m_canvas->Draw(m_debugDrawer.DrawSegment(p1, p2, color));
}

void SFGUIDebugDraw::DrawTransform(const b2Transform& xf) {
}
