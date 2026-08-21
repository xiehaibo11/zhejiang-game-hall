
/* dtNavMesh::unconnectExtLinks(dtMeshTile*, dtMeshTile*) */

void __thiscall
dtNavMesh::unconnectExtLinks(dtNavMesh *this,dtMeshTile *param_1,dtMeshTile *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  
  if (((param_1 != (dtMeshTile *)0x0) && (param_2 != (dtMeshTile *)0x0)) &&
     (iVar7 = *(int *)(*(long *)(param_1 + 8) + 0x18), 0 < iVar7)) {
    uVar3 = *(uint *)(this + 0x5c);
    uVar4 = *(uint *)(this + 0x60);
    lVar12 = *(long *)(this + 0x50);
    iVar5 = *(int *)param_2;
    lVar13 = *(long *)(param_1 + 0x10);
    lVar11 = 0;
    do {
      puVar1 = (uint *)(lVar13 + lVar11 * 0x20);
      uVar15 = *puVar1;
      if (uVar15 != 0xffffffff) {
        lVar14 = *(long *)(param_1 + 0x20);
        uVar8 = 0xffffffff;
        do {
          uVar9 = (ulong)uVar15;
          if ((*(char *)(lVar14 + (ulong)uVar15 * 0xc + 9) == -1) ||
             (((*(uint *)(lVar14 + uVar9 * 0xc) ^
               (iVar5 << (ulong)(uVar3 + uVar4 & 0x1f) |
               (int)((ulong)((long)param_2 - lVar12) >> 3) * -0x3b13b13b << (ulong)(uVar4 & 0x1f)))
               >> (ulong)(uVar4 & 0x1f) & ~(-1 << (ulong)(uVar3 & 0x1f))) != 0)) {
            uVar8 = (ulong)uVar15;
            uVar15 = *(uint *)(lVar14 + uVar9 * 0xc + 4);
          }
          else {
            lVar10 = lVar14 + uVar9 * 0xc;
            uVar6 = *(uint *)(lVar10 + 4);
            puVar2 = puVar1;
            if ((int)uVar8 != -1) {
              puVar2 = (uint *)(lVar14 + uVar8 * 0xc + 4);
            }
            *puVar2 = uVar6;
            *(undefined4 *)(lVar10 + 4) = *(undefined4 *)(param_1 + 4);
            *(uint *)(param_1 + 4) = uVar15;
            uVar15 = uVar6;
          }
        } while (uVar15 != 0xffffffff);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar7);
  }
  return;
}

