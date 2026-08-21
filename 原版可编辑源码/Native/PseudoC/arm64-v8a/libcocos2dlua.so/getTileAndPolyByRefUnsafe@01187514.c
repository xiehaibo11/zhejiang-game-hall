
/* dtNavMesh::getTileAndPolyByRefUnsafe(unsigned int, dtMeshTile const**, dtPoly const**) const */

void __thiscall
dtNavMesh::getTileAndPolyByRefUnsafe
          (dtNavMesh *this,uint param_1,dtMeshTile **param_2,dtPoly **param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(this + 0x60);
  lVar2 = (ulong)(param_1 >> ((ulong)uVar1 & 0x3f) & ~(-1 << (ulong)(*(uint *)(this + 0x5c) & 0x1f))
                 ) * 0x68;
  *param_2 = (dtMeshTile *)(*(long *)(this + 0x50) + lVar2);
  *param_3 = (dtPoly *)
             (*(long *)(*(long *)(this + 0x50) + lVar2 + 0x10) +
             (ulong)(param_1 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU)) * 0x20);
  return;
}

