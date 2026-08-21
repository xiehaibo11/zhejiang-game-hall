
/* btTriangleIndexVertexArray::hasPremadeAabb() const */

bool __thiscall btTriangleIndexVertexArray::hasPremadeAabb(btTriangleIndexVertexArray *this)

{
  return *(int *)(this + 0x40) == 1;
}

