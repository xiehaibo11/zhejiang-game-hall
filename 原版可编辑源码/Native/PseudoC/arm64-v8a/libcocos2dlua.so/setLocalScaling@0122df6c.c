
/* btPolyhedralConvexAabbCachingShape::setLocalScaling(btVector3 const&) */

void __thiscall
btPolyhedralConvexAabbCachingShape::setLocalScaling
          (btPolyhedralConvexAabbCachingShape *this,btVector3 *param_1)

{
  btConvexInternalShape::setLocalScaling((btConvexInternalShape *)this,param_1);
  recalcLocalAabb(this);
  return;
}

