
/* btTriangleShape::~btTriangleShape() */

void __thiscall btTriangleShape::~btTriangleShape(btTriangleShape *this)

{
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)this);
  btAlignedFreeInternal(this);
  return;
}

