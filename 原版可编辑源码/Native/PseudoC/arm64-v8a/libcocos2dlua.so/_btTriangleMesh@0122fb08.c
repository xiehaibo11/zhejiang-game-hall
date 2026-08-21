
/* btTriangleMesh::~btTriangleMesh() */

void __thiscall btTriangleMesh::~btTriangleMesh(btTriangleMesh *this)

{
  ~btTriangleMesh(this);
  btAlignedFreeInternal(this);
  return;
}

