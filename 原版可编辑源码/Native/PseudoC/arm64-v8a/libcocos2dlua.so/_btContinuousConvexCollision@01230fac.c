
/* btContinuousConvexCollision::~btContinuousConvexCollision() */

void __thiscall
btContinuousConvexCollision::~btContinuousConvexCollision(btContinuousConvexCollision *this)

{
  btConvexCast::~btConvexCast((btConvexCast *)this);
  operator_delete(this);
  return;
}

