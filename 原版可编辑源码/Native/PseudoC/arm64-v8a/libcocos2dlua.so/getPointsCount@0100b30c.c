
/* cocos2d::PhysicsShapeEdgePolygon::getPointsCount() const */

ulong __thiscall cocos2d::PhysicsShapeEdgePolygon::getPointsCount(PhysicsShapeEdgePolygon *this)

{
  return (ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30)) >> 3;
}

