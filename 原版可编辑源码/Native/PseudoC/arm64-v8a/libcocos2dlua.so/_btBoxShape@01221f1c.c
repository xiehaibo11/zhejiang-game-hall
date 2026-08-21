
/* btBoxShape::~btBoxShape() */

void __thiscall btBoxShape::~btBoxShape(btBoxShape *this)

{
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)this);
  btAlignedFreeInternal(this);
  return;
}

