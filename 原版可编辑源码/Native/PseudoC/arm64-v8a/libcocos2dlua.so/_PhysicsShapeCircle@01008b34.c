
/* cocos2d::PhysicsShapeCircle::~PhysicsShapeCircle() */

void __thiscall cocos2d::PhysicsShapeCircle::~PhysicsShapeCircle(PhysicsShapeCircle *this)

{
  PhysicsShapeEdgeSegment::~PhysicsShapeEdgeSegment((PhysicsShapeEdgeSegment *)this);
  operator_delete(this);
  return;
}

