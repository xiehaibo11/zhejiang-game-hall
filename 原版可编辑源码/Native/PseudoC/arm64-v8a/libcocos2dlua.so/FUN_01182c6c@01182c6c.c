
void FUN_01182c6c(duDebugDraw *param_1,dtNavMesh *param_2,dtNavMeshQuery *param_3,
                 dtMeshTile *param_4,uint param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  long lVar16;
  float *pfVar17;
  byte *pbVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  float fVar23;
  uint uVar10;
  
  uVar8 = dtNavMesh::getPolyRefBase(param_2,param_4);
  uVar11 = *(uint *)(param_2 + 0x5c);
  uVar15 = *(uint *)(param_2 + 0x60);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,0);
  (**(code **)(*(long *)param_1 + 0x20))(0x3f800000,param_1,2);
  if (0 < *(int *)(*(long *)(param_4 + 8) + 0x18)) {
    lVar20 = 0;
    do {
      lVar21 = *(long *)(param_4 + 0x10);
      pbVar18 = (byte *)(lVar21 + lVar20 * 0x20 + 0x1f);
      if ((*pbVar18 & 0xc0) != 0x40) {
        lVar16 = *(long *)(param_4 + 0x28);
        if ((param_3 == (dtNavMeshQuery *)0x0) ||
           (uVar12 = dtNavMeshQuery::isInClosedList(param_3,uVar8 | (uint)lVar20), (uVar12 & 1) == 0
           )) {
          if ((param_5 >> 2 & 1) == 0) {
            bVar4 = *pbVar18;
            if ((bVar4 & 0x3f) == 0) {
              uVar9 = 0x40ffc000;
              goto LAB_01182d98;
            }
            iVar13 = 0x40;
            uVar10 = bVar4 & 0x3f;
          }
          else {
            iVar13 = 0x80;
            uVar10 = uVar8 >> (ulong)(uVar15 & 0x1f) & (-1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
          }
          uVar9 = duIntToCol(uVar10,iVar13);
        }
        else {
          uVar9 = 0x4000c4ff;
        }
LAB_01182d98:
        pbVar18 = (byte *)(lVar16 + lVar20 * 0xc + 9);
        if (*pbVar18 != 0) {
          piVar19 = (int *)(lVar16 + lVar20 * 0xc);
          uVar10 = 0;
          pbVar1 = (byte *)(lVar21 + lVar20 * 0x20 + 0x1e);
          do {
            pbVar2 = (byte *)(*(long *)(param_4 + 0x38) + (ulong)((uVar10 + piVar19[1]) * 4));
            bVar4 = *pbVar2;
            if ((uint)bVar4 < (uint)*pbVar1) {
              (**(code **)(*(long *)param_1 + 0x28))
                        (param_1,*(long *)(param_4 + 0x18) +
                                 (ulong)*(ushort *)(lVar21 + lVar20 * 0x20 + (ulong)bVar4 * 2 + 4) *
                                 0xc,uVar9);
            }
            else {
              (**(code **)(*(long *)param_1 + 0x28))
                        (param_1,*(long *)(param_4 + 0x30) +
                                 (ulong)((((uint)bVar4 - (uint)*pbVar1) + *piVar19) * 3) * 4,uVar9);
            }
            bVar4 = pbVar2[1];
            if ((uint)bVar4 < (uint)*pbVar1) {
              (**(code **)(*(long *)param_1 + 0x28))
                        (param_1,*(long *)(param_4 + 0x18) +
                                 (ulong)*(ushort *)(lVar21 + lVar20 * 0x20 + (ulong)bVar4 * 2 + 4) *
                                 0xc,uVar9);
            }
            else {
              (**(code **)(*(long *)param_1 + 0x28))
                        (param_1,*(long *)(param_4 + 0x30) +
                                 (ulong)((((uint)bVar4 - (uint)*pbVar1) + *piVar19) * 3) * 4,uVar9);
            }
            bVar4 = pbVar2[2];
            if ((uint)bVar4 < (uint)*pbVar1) {
              (**(code **)(*(long *)param_1 + 0x28))
                        (param_1,*(long *)(param_4 + 0x18) +
                                 (ulong)*(ushort *)(lVar21 + lVar20 * 0x20 + (ulong)bVar4 * 2 + 4) *
                                 0xc,uVar9);
            }
            else {
              (**(code **)(*(long *)param_1 + 0x28))
                        (param_1,*(long *)(param_4 + 0x30) +
                                 (ulong)((((uint)bVar4 - (uint)*pbVar1) + *piVar19) * 3) * 4,uVar9);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *pbVar18);
        }
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)(*(long *)(param_4 + 8) + 0x18));
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  FUN_011853c8(0x3fc00000,param_1,param_4,0x20403000,1);
  FUN_011853c8(0x40200000,param_1,param_4,0xdc403000,0);
  if ((param_5 & 1) != 0) {
    (**(code **)(*(long *)param_1 + 0x20))(0x40000000,param_1,1);
    lVar20 = *(long *)(param_4 + 8);
    if (0 < *(int *)(lVar20 + 0x18)) {
      lVar21 = 0;
      do {
        lVar16 = *(long *)(param_4 + 0x10);
        pbVar18 = (byte *)(lVar16 + lVar21 * 0x20 + 0x1f);
        bVar4 = *pbVar18;
        if ((bVar4 & 0xc0) == 0x40) {
          if (param_3 == (dtNavMeshQuery *)0x0) {
LAB_011831b8:
            uVar11 = duIntToCol(bVar4 & 0x3f,0xdc);
            uVar11 = uVar11 >> 1 & 0x7f7f7f | uVar11 & 0xff000000;
          }
          else {
            uVar12 = dtNavMeshQuery::isInClosedList(param_3,uVar8 | (uint)lVar21);
            if ((uVar12 & 1) == 0) {
              bVar4 = *pbVar18;
              goto LAB_011831b8;
            }
            uVar11 = 0xdc00c4ff;
          }
          puVar3 = (uint *)(lVar16 + lVar21 * 0x20);
          iVar13 = *(int *)(*(long *)(param_4 + 8) + 0x38);
          uVar15 = *puVar3;
          lVar20 = *(long *)(param_4 + 0x48);
          puVar14 = (undefined4 *)(*(long *)(param_4 + 0x18) + (ulong)(ushort)puVar3[1] * 0xc);
          puVar22 = (undefined4 *)
                    (*(long *)(param_4 + 0x18) + (ulong)*(ushort *)((long)puVar3 + 6) * 0xc);
          if (uVar15 == 0xffffffff) {
            bVar6 = false;
            bVar7 = false;
          }
          else {
            bVar7 = false;
            bVar6 = false;
            do {
              lVar16 = *(long *)(param_4 + 0x20) + (ulong)uVar15 * 0xc;
              cVar5 = *(char *)(lVar16 + 8);
              uVar15 = *(uint *)(lVar16 + 4);
              bVar6 = (bool)(bVar6 | cVar5 == '\0');
              bVar7 = (bool)(bVar7 | cVar5 == '\x01');
            } while (uVar15 != 0xffffffff);
          }
          (**(code **)(*(long *)param_1 + 0x30))(*puVar14,puVar14[1],puVar14[2],param_1,uVar11);
          pfVar17 = (float *)(lVar20 + (long)(int)((uint)lVar21 - iVar13) * 0x24);
          (**(code **)(*(long *)param_1 + 0x30))(*pfVar17,pfVar17[1],pfVar17[2],param_1,uVar11);
          uVar15 = uVar11;
          if (!bVar6) {
            uVar15 = 0xc41020dc;
          }
          duAppendCircle(param_1,*pfVar17,pfVar17[1] + 0.1,pfVar17[2],pfVar17[6],uVar15);
          (**(code **)(*(long *)param_1 + 0x30))(*puVar22,puVar22[1],puVar22[2],param_1,uVar11);
          (**(code **)(*(long *)param_1 + 0x30))(pfVar17[3],pfVar17[4],pfVar17[5],param_1,uVar11);
          uVar15 = uVar11;
          if (!bVar7) {
            uVar15 = 0xc41020dc;
          }
          duAppendCircle(param_1,pfVar17[3],pfVar17[4] + 0.1,pfVar17[5],pfVar17[6],uVar15);
          (**(code **)(*(long *)param_1 + 0x30))(*pfVar17,pfVar17[1],pfVar17[2],param_1,0xc4403000);
          (**(code **)(*(long *)param_1 + 0x30))
                    (*pfVar17,pfVar17[1] + 0.2,pfVar17[2],param_1,0xc4403000);
          (**(code **)(*(long *)param_1 + 0x30))
                    (pfVar17[3],pfVar17[4],pfVar17[5],param_1,0xc4403000);
          (**(code **)(*(long *)param_1 + 0x30))
                    (pfVar17[3],pfVar17[4] + 0.2,pfVar17[5],param_1,0xc4403000);
          fVar23 = 0.0;
          if ((*(byte *)((long)pfVar17 + 0x1e) & 1) != 0) {
            fVar23 = 0.6;
          }
          duAppendArc(param_1,*pfVar17,pfVar17[1],pfVar17[2],pfVar17[3],pfVar17[4],pfVar17[5],0.25,
                      fVar23,0.6,uVar11);
          lVar20 = *(long *)(param_4 + 8);
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(lVar20 + 0x18));
    }
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  (**(code **)(*(long *)param_1 + 0x20))(0x40400000,param_1,0);
  if (0 < *(int *)(*(long *)(param_4 + 8) + 0x1c)) {
    uVar12 = 0;
    lVar20 = 0;
    do {
      puVar14 = (undefined4 *)(*(long *)(param_4 + 0x18) + (uVar12 & 0xffffffff) * 4);
      (**(code **)(*(long *)param_1 + 0x30))(*puVar14,puVar14[1],puVar14[2],param_1,0xc4000000);
      lVar20 = lVar20 + 1;
      uVar12 = uVar12 + 3;
    } while (lVar20 < *(int *)(*(long *)(param_4 + 8) + 0x1c));
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
                    /* WARNING: Could not recover jumptable at 0x01183310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,1);
  return;
}

