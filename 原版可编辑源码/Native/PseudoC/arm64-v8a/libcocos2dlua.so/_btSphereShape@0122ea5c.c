
/* btSphereShape::~btSphereShape() */

void __thiscall btSphereShape::~btSphereShape(btSphereShape *this)

{
  btConvexShape::~btConvexShape((btConvexShape *)this);
  btAlignedFreeInternal(this);
  return;
}

