
/* btCapsuleShapeX::~btCapsuleShapeX() */

void __thiscall btCapsuleShapeX::~btCapsuleShapeX(btCapsuleShapeX *this)

{
  btConvexShape::~btConvexShape((btConvexShape *)this);
  btAlignedFreeInternal(this);
  return;
}

