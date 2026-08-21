
/* dtNavMesh::connectIntLinks(dtMeshTile*) */

void __thiscall dtNavMesh::connectIntLinks(dtNavMesh *this,dtMeshTile *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  if ((param_1 != (dtMeshTile *)0x0) && (iVar7 = *(int *)(*(long *)(param_1 + 8) + 0x18), 0 < iVar7)
     ) {
    lVar12 = *(long *)(this + 0x50);
    iVar2 = *(int *)(this + 0x5c);
    uVar3 = *(uint *)(this + 0x60);
    iVar4 = *(int *)param_1;
    lVar11 = *(long *)(param_1 + 0x10);
    lVar10 = 0;
    lVar13 = lVar11 + 0xe;
    do {
      puVar1 = (uint *)(lVar11 + lVar10 * 0x20);
      *puVar1 = 0xffffffff;
      if (((*(byte *)((long)puVar1 + 0x1f) & 0xc0) != 0x40) &&
         (uVar14 = (ulong)*(byte *)((long)puVar1 + 0x1e), uVar14 != 0)) {
        uVar8 = 0xffffffff;
        do {
          uVar6 = *(ushort *)(lVar13 + uVar14 * 2);
          uVar14 = uVar14 - 1;
          if (0 < (short)uVar6) {
            uVar5 = *(uint *)(param_1 + 4);
            if (uVar5 != 0xffffffff) {
              puVar9 = (uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar5 * 0xc);
              *(uint *)(param_1 + 4) = puVar9[1];
              *puVar9 = iVar4 << (ulong)(iVar2 + uVar3 & 0x1f) |
                        (int)((ulong)((long)param_1 - lVar12) >> 3) * -0x3b13b13b <<
                        (ulong)(uVar3 & 0x1f) | uVar6 - 1;
              puVar9[1] = uVar8;
              *(char *)(puVar9 + 2) = (char)uVar14;
              *(undefined2 *)((long)puVar9 + 9) = 0xff;
              *(undefined1 *)((long)puVar9 + 0xb) = 0;
              *puVar1 = uVar5;
              uVar8 = uVar5;
            }
          }
        } while (0 < (long)uVar14);
      }
      lVar10 = lVar10 + 1;
      lVar13 = lVar13 + 0x20;
    } while (lVar10 < iVar7);
  }
  return;
}

