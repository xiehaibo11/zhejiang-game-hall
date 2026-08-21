
/* btTriangleMeshShape::~btTriangleMeshShape() */

void __thiscall btTriangleMeshShape::~btTriangleMeshShape(btTriangleMeshShape *this)

{
  btConcaveShape::~btConcaveShape((btConcaveShape *)this);
  btAlignedFreeInternal(this);
  return;
}

