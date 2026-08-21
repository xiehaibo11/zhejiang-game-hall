
/* btTriangleIndexVertexArray::~btTriangleIndexVertexArray() */

void __thiscall
btTriangleIndexVertexArray::~btTriangleIndexVertexArray(btTriangleIndexVertexArray *this)

{
  *(undefined ***)this = &PTR__btTriangleIndexVertexArray_01734850;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    if (this[0x30] != (btTriangleIndexVertexArray)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x28));
    }
    *(undefined8 *)(this + 0x28) = 0;
  }
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (btTriangleIndexVertexArray)0x1;
  *(undefined8 *)(this + 0x1c) = 0;
  btStridingMeshInterface::~btStridingMeshInterface((btStridingMeshInterface *)this);
  btAlignedFreeInternal(this);
  return;
}

