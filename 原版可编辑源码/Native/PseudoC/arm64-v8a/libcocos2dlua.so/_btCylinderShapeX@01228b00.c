
/* btCylinderShapeX::~btCylinderShapeX() */

void __thiscall btCylinderShapeX::~btCylinderShapeX(btCylinderShapeX *this)

{
  btConvexShape::~btConvexShape((btConvexShape *)this);
  btAlignedFreeInternal(this);
  return;
}

