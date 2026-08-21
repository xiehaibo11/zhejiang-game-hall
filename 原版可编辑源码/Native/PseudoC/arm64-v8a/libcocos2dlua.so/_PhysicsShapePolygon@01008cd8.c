
/* cocos2d::PhysicsShapePolygon::~PhysicsShapePolygon() */

void __thiscall cocos2d::PhysicsShapePolygon::~PhysicsShapePolygon(PhysicsShapePolygon *this)

{
  PhysicsShapeEdgeSegment::~PhysicsShapeEdgeSegment((PhysicsShapeEdgeSegment *)this);
  operator_delete(this);
  return;
}

