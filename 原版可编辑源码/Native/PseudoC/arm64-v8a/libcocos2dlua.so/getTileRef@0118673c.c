
/* dtNavMesh::getTileRef(dtMeshTile const*) const */

uint __thiscall dtNavMesh::getTileRef(dtNavMesh *this,dtMeshTile *param_1)

{
  if (param_1 != (dtMeshTile *)0x0) {
    return *(int *)param_1 << (ulong)(*(int *)(this + 0x5c) + *(uint *)(this + 0x60) & 0x1f) |
           (int)((ulong)((long)param_1 - *(long *)(this + 0x50)) >> 3) * -0x3b13b13b <<
           (ulong)(*(uint *)(this + 0x60) & 0x1f);
  }
  return 0;
}

