
/* dtNavMesh::getTileStateSize(dtMeshTile const*) const */

int __thiscall dtNavMesh::getTileStateSize(dtNavMesh *this,dtMeshTile *param_1)

{
  if (param_1 != (dtMeshTile *)0x0) {
    return *(int *)(*(long *)(param_1 + 8) + 0x18) * 4 + 0xc;
  }
  return 0;
}

