
/* btTriangleMesh::getNumTriangles() const */

int __thiscall btTriangleMesh::getNumTriangles(btTriangleMesh *this)

{
  btTriangleMesh *pbVar1;
  
  pbVar1 = this + 0xcc;
  if (this[0xe8] != (btTriangleMesh)0x0) {
    pbVar1 = this + 0xac;
  }
  return *(int *)pbVar1 / 3;
}

