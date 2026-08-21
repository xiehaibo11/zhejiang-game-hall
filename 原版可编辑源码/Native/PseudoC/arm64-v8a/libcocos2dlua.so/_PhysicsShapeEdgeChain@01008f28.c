
/* cocos2d::PhysicsShapeEdgeChain::~PhysicsShapeEdgeChain() */

void __thiscall cocos2d::PhysicsShapeEdgeChain::~PhysicsShapeEdgeChain(PhysicsShapeEdgeChain *this)

{
  PhysicsShapeEdgeSegment::~PhysicsShapeEdgeSegment((PhysicsShapeEdgeSegment *)this);
  operator_delete(this);
  return;
}

