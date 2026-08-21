
/* cocos2d::PhysicsShapeEdgePolygon::~PhysicsShapeEdgePolygon() */

void __thiscall
cocos2d::PhysicsShapeEdgePolygon::~PhysicsShapeEdgePolygon(PhysicsShapeEdgePolygon *this)

{
  PhysicsShapeEdgeSegment::~PhysicsShapeEdgeSegment((PhysicsShapeEdgeSegment *)this);
  operator_delete(this);
  return;
}

