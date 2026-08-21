
/* dtNavMesh::connectExtOffMeshLinks(dtMeshTile*, dtMeshTile*, int) */

void __thiscall
dtNavMesh::connectExtOffMeshLinks
          (dtNavMesh *this,dtMeshTile *param_1,dtMeshTile *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  float *pfVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 uStack_70;
  float local_6c;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  if (param_1 != (dtMeshTile *)0x0) {
    lVar11 = *(long *)(param_2 + 8);
    uVar2 = param_3 + 4U & 7;
    if (param_3 == -1) {
      uVar2 = 0xffffffff;
    }
    if (0 < *(int *)(lVar11 + 0x34)) {
      lVar17 = 0;
      lVar18 = 0;
      iVar3 = 0xff;
      if (param_3 != -1) {
        iVar3 = param_3;
      }
      do {
        lVar19 = *(long *)(param_2 + 0x48);
        lVar15 = lVar19 + lVar17;
        if ((uint)*(byte *)(lVar15 + 0x1f) == (uVar2 & 0xff)) {
          lVar16 = *(long *)(param_2 + 0x10);
          uVar8 = *(ushort *)(lVar15 + 0x1c);
          puVar14 = (uint *)(lVar16 + (ulong)uVar8 * 0x20);
          if (*puVar14 != 0xffffffff) {
            lVar1 = lVar19 + lVar17;
            local_74 = *(float *)(lVar1 + 0x18);
            uStack_70 = *(undefined4 *)(lVar11 + 0x44);
            local_6c = local_74;
            uVar10 = findNearestPolyInTile(this,param_1,(float *)(lVar1 + 0xc),&local_74,&local_80);
            if ((uVar10 != 0) &&
               (fVar20 = local_80 - *(float *)(lVar1 + 0xc),
               fVar21 = local_78 - *(float *)(lVar1 + 0x14),
               fVar20 * fVar20 + fVar21 * fVar21 <=
               *(float *)(lVar1 + 0x18) * *(float *)(lVar1 + 0x18))) {
              pfVar12 = (float *)(*(long *)(param_2 + 0x18) +
                                 (ulong)*(ushort *)(lVar16 + (ulong)uVar8 * 0x20 + 6) * 0xc);
              *pfVar12 = local_80;
              pfVar12[2] = local_78;
              pfVar12[1] = local_7c;
              uVar6 = *(uint *)(param_2 + 4);
              if (uVar6 != 0xffffffff) {
                puVar13 = (uint *)(*(long *)(param_2 + 0x20) + (ulong)uVar6 * 0xc);
                *(uint *)(param_2 + 4) = puVar13[1];
                *puVar13 = uVar10;
                *(undefined1 *)(puVar13 + 2) = 1;
                *(char *)((long)puVar13 + 9) = (char)uVar2;
                *(undefined2 *)((long)puVar13 + 10) = 0;
                puVar13[1] = *puVar14;
                *puVar14 = uVar6;
              }
              if ((*(byte *)(lVar19 + lVar17 + 0x1e) & 1) != 0) {
                uVar6 = *(uint *)(param_1 + 4);
                if (uVar6 != 0xffffffff) {
                  puVar14 = (uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 0xc);
                  *(uint *)(param_1 + 4) = puVar14[1];
                  iVar4 = *(int *)(this + 0x5c);
                  uVar5 = *(uint *)(this + 0x60);
                  lVar19 = *(long *)(this + 0x50);
                  iVar7 = *(int *)param_2;
                  uVar8 = *(ushort *)(lVar15 + 0x1c);
                  lVar11 = *(long *)(param_1 + 0x10);
                  *(undefined1 *)(puVar14 + 2) = 0xff;
                  *(char *)((long)puVar14 + 9) = (char)iVar3;
                  *(undefined2 *)((long)puVar14 + 10) = 0;
                  lVar15 = (ulong)(uVar10 & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU) & 0xffff) *
                           0x20;
                  *puVar14 = iVar7 << (ulong)(iVar4 + uVar5 & 0x1f) |
                             (int)((ulong)((long)param_2 - lVar19) >> 3) * -0x3b13b13b <<
                             (ulong)(uVar5 & 0x1f) | (uint)uVar8;
                  puVar14[1] = *(uint *)(lVar11 + lVar15);
                  *(uint *)(lVar11 + lVar15) = uVar6;
                }
              }
            }
            lVar11 = *(long *)(param_2 + 8);
          }
        }
        lVar18 = lVar18 + 1;
        lVar17 = lVar17 + 0x24;
      } while (lVar18 < *(int *)(lVar11 + 0x34));
    }
  }
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

