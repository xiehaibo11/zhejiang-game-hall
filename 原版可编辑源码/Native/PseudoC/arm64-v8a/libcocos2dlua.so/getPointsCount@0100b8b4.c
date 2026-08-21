
/* cocos2d::PhysicsShapeEdgeChain::getPointsCount() const */

int __thiscall cocos2d::PhysicsShapeEdgeChain::getPointsCount(PhysicsShapeEdgeChain *this)

{
  return (int)((ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30)) >> 3) + 1;
}

