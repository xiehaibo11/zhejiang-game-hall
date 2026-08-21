
/* btPolyhedralConvexShape::~btPolyhedralConvexShape() */

void __thiscall btPolyhedralConvexShape::~btPolyhedralConvexShape(btPolyhedralConvexShape *this)

{
  *(undefined ***)this = &PTR__btPolyhedralConvexShape_01733510;
  if (*(undefined8 **)(this + 0x40) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0x40))();
    btAlignedFreeInternal(*(void **)(this + 0x40));
  }
  btConvexShape::~btConvexShape((btConvexShape *)this);
  return;
}

