
/* btPolyhedralConvexShape::btPolyhedralConvexShape() */

void __thiscall btPolyhedralConvexShape::btPolyhedralConvexShape(btPolyhedralConvexShape *this)

{
  btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)this);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__btPolyhedralConvexShape_01733510;
  return;
}

