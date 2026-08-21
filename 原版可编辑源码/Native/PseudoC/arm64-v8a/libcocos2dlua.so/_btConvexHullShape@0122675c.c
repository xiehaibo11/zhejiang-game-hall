
/* btConvexHullShape::~btConvexHullShape() */

void __thiscall btConvexHullShape::~btConvexHullShape(btConvexHullShape *this)

{
  *(undefined ***)this = &PTR__btConvexHullShape_01732ca0;
  if (*(void **)(this + 0x80) != (void *)0x0) {
    if (this[0x88] != (btConvexHullShape)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x80));
    }
    *(undefined8 *)(this + 0x80) = 0;
  }
  *(undefined8 *)(this + 0x80) = 0;
  this[0x88] = (btConvexHullShape)0x1;
  *(undefined8 *)(this + 0x74) = 0;
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)this);
  return;
}

