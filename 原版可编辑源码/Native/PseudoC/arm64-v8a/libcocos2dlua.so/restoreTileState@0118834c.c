
/* dtNavMesh::restoreTileState(dtMeshTile*, unsigned char const*, int) */

undefined8 __thiscall
dtNavMesh::restoreTileState(dtNavMesh *this,dtMeshTile *param_1,uchar *param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_1 == (dtMeshTile *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x18) * 4 + 0xc;
  }
  if (iVar2 <= param_3) {
    if (*(int *)param_2 != 0x444e4d53) {
      return 0x80000001;
    }
    if (*(int *)(param_2 + 4) != 1) {
      return 0x80000002;
    }
    if (*(uint *)(param_2 + 8) ==
        (*(int *)param_1 << (ulong)(*(int *)(this + 0x5c) + *(uint *)(this + 0x60) & 0x1f) |
        (int)((ulong)((long)param_1 - *(long *)(this + 0x50)) >> 3) * -0x3b13b13b <<
        (ulong)(*(uint *)(this + 0x60) & 0x1f))) {
      uVar1 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x18);
      if (0 < (int)*(uint *)(*(long *)(param_1 + 8) + 0x18)) {
        pbVar3 = (byte *)(*(long *)(param_1 + 0x10) + 0x1f);
        pbVar4 = param_2 + 0xe;
        do {
          uVar1 = uVar1 - 1;
          *(undefined2 *)(pbVar3 + -3) = *(undefined2 *)(pbVar4 + -2);
          *pbVar3 = *pbVar3 & 0xc0 | *pbVar4 & 0x3f;
          pbVar3 = pbVar3 + 0x20;
          pbVar4 = pbVar4 + 4;
        } while (uVar1 != 0);
      }
      return 0x40000000;
    }
  }
  return 0x80000008;
}

