
/* btTriangleMesh::~btTriangleMesh() */

void __thiscall btTriangleMesh::~btTriangleMesh(btTriangleMesh *this)

{
  *(undefined ***)this = &PTR__btTriangleMesh_017338c0;
  if (*(void **)(this + 0xd8) != (void *)0x0) {
    if (this[0xe0] != (btTriangleMesh)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0xd8));
    }
    *(undefined8 *)(this + 0xd8) = 0;
  }
  this[0xe0] = (btTriangleMesh)0x1;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xcc) = 0;
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    if (this[0xc0] != (btTriangleMesh)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0xb8));
    }
    *(undefined8 *)(this + 0xb8) = 0;
  }
  this[0xc0] = (btTriangleMesh)0x1;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xac) = 0;
  if (*(void **)(this + 0x98) != (void *)0x0) {
    if (this[0xa0] != (btTriangleMesh)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x98));
    }
    *(undefined8 *)(this + 0x98) = 0;
  }
  this[0xa0] = (btTriangleMesh)0x1;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  if (*(void **)(this + 0x78) != (void *)0x0) {
    if (this[0x80] != (btTriangleMesh)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x78));
    }
    *(undefined8 *)(this + 0x78) = 0;
  }
  this[0x80] = (btTriangleMesh)0x1;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  btTriangleIndexVertexArray::~btTriangleIndexVertexArray((btTriangleIndexVertexArray *)this);
  return;
}

