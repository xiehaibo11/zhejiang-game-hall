
/* btCylinderShape::~btCylinderShape() */

void __thiscall btCylinderShape::~btCylinderShape(btCylinderShape *this)

{
  btConvexShape::~btConvexShape((btConvexShape *)this);
  btAlignedFreeInternal(this);
  return;
}

