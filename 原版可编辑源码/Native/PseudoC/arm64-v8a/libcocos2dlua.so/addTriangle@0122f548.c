
/* btTriangleMesh::addTriangle(btVector3 const&, btVector3 const&, btVector3 const&, bool) */

void __thiscall
btTriangleMesh::addTriangle
          (btTriangleMesh *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,
          bool param_4)

{
  int iVar1;
  
  **(int **)(this + 0x28) = **(int **)(this + 0x28) + 1;
  iVar1 = findOrAddVertex(this,param_1,param_4);
  addIndex(this,iVar1);
  iVar1 = findOrAddVertex(this,param_2,param_4);
  addIndex(this,iVar1);
  iVar1 = findOrAddVertex(this,param_3,param_4);
  addIndex(this,iVar1);
  return;
}

