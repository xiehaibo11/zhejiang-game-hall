
/* btConvexHullShape::setLocalScaling(btVector3 const&) */

void __thiscall btConvexHullShape::setLocalScaling(btConvexHullShape *this,btVector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x18) = uVar1;
  btPolyhedralConvexAabbCachingShape::recalcLocalAabb((btPolyhedralConvexAabbCachingShape *)this);
  return;
}

