
/* btCylinderShapeZ::~btCylinderShapeZ() */

void __thiscall btCylinderShapeZ::~btCylinderShapeZ(btCylinderShapeZ *this)

{
  btConvexShape::~btConvexShape((btConvexShape *)this);
  btAlignedFreeInternal(this);
  return;
}

