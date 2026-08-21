
/* cocos2d::PhysicsShapeEdgeBox::~PhysicsShapeEdgeBox() */

void __thiscall cocos2d::PhysicsShapeEdgeBox::~PhysicsShapeEdgeBox(PhysicsShapeEdgeBox *this)

{
  PhysicsShapeEdgeSegment::~PhysicsShapeEdgeSegment((PhysicsShapeEdgeSegment *)this);
  operator_delete(this);
  return;
}

