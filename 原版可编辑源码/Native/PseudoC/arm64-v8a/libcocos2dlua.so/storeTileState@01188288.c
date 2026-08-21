
/* dtNavMesh::storeTileState(dtMeshTile const*, unsigned char*, int) const */

undefined8 __thiscall
dtNavMesh::storeTileState(dtNavMesh *this,dtMeshTile *param_1,uchar *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  
  if (param_1 == (dtMeshTile *)0x0) {
    if ((uint)param_3 < 0x80000000) goto LAB_011882bc;
  }
  else if (*(int *)(*(long *)(param_1 + 8) + 0x18) * 4 + 0xc <= param_3) {
LAB_011882bc:
    uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x18);
    uVar3 = (ulong)uVar2;
    builtin_memcpy(param_2,"SMND\x01",6);
    param_2[6] = '\0';
    param_2[7] = '\0';
    if (param_1 == (dtMeshTile *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)param_1 << (ulong)(*(int *)(this + 0x5c) + *(uint *)(this + 0x60) & 0x1f) |
              (int)((ulong)((long)param_1 - *(long *)(this + 0x50)) >> 3) * -0x3b13b13b <<
              (ulong)(*(uint *)(this + 0x60) & 0x1f);
    }
    *(uint *)(param_2 + 8) = uVar4;
    if (0 < (int)uVar2) {
      puVar5 = (undefined2 *)(*(long *)(param_1 + 0x10) + 0x1c);
      pbVar6 = param_2 + 0xe;
      do {
        uVar3 = uVar3 - 1;
        *(undefined2 *)(pbVar6 + -2) = *puVar5;
        pbVar1 = (byte *)((long)puVar5 + 3);
        puVar5 = puVar5 + 0x10;
        *pbVar6 = *pbVar1 & 0x3f;
        pbVar6 = pbVar6 + 4;
      } while (uVar3 != 0);
    }
    return 0x40000000;
  }
  return 0x80000010;
}

