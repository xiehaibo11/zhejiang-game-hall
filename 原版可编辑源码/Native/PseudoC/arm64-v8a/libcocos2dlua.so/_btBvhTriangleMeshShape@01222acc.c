
/* btBvhTriangleMeshShape::~btBvhTriangleMeshShape() */

void __thiscall btBvhTriangleMeshShape::~btBvhTriangleMeshShape(btBvhTriangleMeshShape *this)

{
  *(undefined ***)this = &PTR__btBvhTriangleMeshShape_017326d0;
  if (this[0x59] != (btBvhTriangleMeshShape)0x0) {
    (**(code **)**(undefined8 **)(this + 0x48))();
    btAlignedFreeInternal(*(void **)(this + 0x48));
  }
  btTriangleMeshShape::~btTriangleMeshShape((btTriangleMeshShape *)this);
  btAlignedFreeInternal(this);
  return;
}

