
/* btCapsuleShapeZ::~btCapsuleShapeZ() */

void __thiscall btCapsuleShapeZ::~btCapsuleShapeZ(btCapsuleShapeZ *this)

{
  btConvexShape::~btConvexShape((btConvexShape *)this);
  btAlignedFreeInternal(this);
  return;
}

