
/* btCapsuleShape::~btCapsuleShape() */

void __thiscall btCapsuleShape::~btCapsuleShape(btCapsuleShape *this)

{
  btConvexShape::~btConvexShape((btConvexShape *)this);
  btAlignedFreeInternal(this);
  return;
}

