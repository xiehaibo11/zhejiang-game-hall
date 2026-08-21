
/* dtNavMesh::getTileAndPolyByRef(unsigned int, dtMeshTile const**, dtPoly const**) const */

undefined4 __thiscall
dtNavMesh::getTileAndPolyByRef(dtNavMesh *this,uint param_1,dtMeshTile **param_2,dtPoly **param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  dtMeshTile *pdVar5;
  long lVar6;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(this + 0x60);
    uVar2 = param_1 >> ((ulong)uVar1 & 0x3f) & ~(-1 << (ulong)(*(uint *)(this + 0x5c) & 0x1f));
    uVar4 = (ulong)uVar2;
    uVar3 = 0x80000008;
    if (uVar2 < *(uint *)(this + 0x30)) {
      pdVar5 = (dtMeshTile *)(*(long *)(this + 0x50) + uVar4 * 0x68);
      if (((*(uint *)pdVar5 ==
            (param_1 >> (ulong)(uVar1 + *(uint *)(this + 0x5c) & 0x1f) &
            (-1 << (ulong)(*(uint *)(this + 0x58) & 0x1f) ^ 0xffffffffU))) &&
          (lVar6 = *(long *)(*(long *)(this + 0x50) + uVar4 * 0x68 + 8), lVar6 != 0)) &&
         (uVar1 = param_1 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU), uVar3 = 0x80000008,
         uVar1 < *(uint *)(lVar6 + 0x18))) {
        *param_2 = pdVar5;
        *param_3 = (dtPoly *)
                   (*(long *)(*(long *)(this + 0x50) + uVar4 * 0x68 + 0x10) + (ulong)uVar1 * 0x20);
        uVar3 = 0x40000000;
      }
    }
    return uVar3;
  }
  return 0x80000000;
}

