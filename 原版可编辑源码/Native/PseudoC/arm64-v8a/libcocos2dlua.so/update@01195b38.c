
/* dtTileCache::update(float, dtNavMesh*) */

int dtTileCache::update(float param_1,dtNavMesh *param_2)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  dtNavMesh *in_x1;
  int iVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  dtNavMesh *pdVar19;
  byte *pbVar20;
  long lVar21;
  float *pfVar22;
  uint local_84;
  undefined8 local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_2 + 0x38c) == 0) {
    if (*(int *)(param_2 + 0x288) < 1) {
      *(undefined4 *)(param_2 + 0x288) = 0;
    }
    else {
      lVar21 = 0;
      do {
        uVar18 = (ulong)*(uint *)(param_2 + lVar21 * 8 + 0x8c) & 0xffff;
        if (((int)uVar18 < *(int *)(param_2 + 0x58)) &&
           (lVar8 = *(long *)(param_2 + 0x78),
           (uint)*(ushort *)(lVar8 + uVar18 * 0x68 + 0x54) ==
           *(uint *)(param_2 + lVar21 * 8 + 0x8c) >> 0x10)) {
          if (*(int *)(param_2 + lVar21 * 8 + 0x88) == 1) {
            lVar9 = lVar8 + uVar18 * 0x68;
            *(byte *)(lVar9 + 0x58) = 0;
            bVar10 = *(byte *)(lVar9 + 0x57);
            *(undefined1 *)(lVar9 + 0x56) = 3;
            if ((ulong)bVar10 != 0) {
              bVar11 = 0;
              uVar6 = 0;
              do {
                uVar2 = *(uint *)(param_2 + 0x38c);
                uVar13 = (ulong)uVar2;
                if ((int)uVar2 < 0x40) {
                  piVar15 = (int *)(lVar8 + uVar18 * 0x68 + uVar6 * 4 + 0x14);
                  iVar12 = *piVar15;
                  pdVar19 = param_2 + 0x28c;
                  if (0 < (int)uVar2) {
                    do {
                      if (*(int *)pdVar19 == iVar12) goto LAB_01195e50;
                      uVar13 = uVar13 - 1;
                      pdVar19 = pdVar19 + 4;
                    } while (uVar13 != 0);
                  }
                  *(uint *)(param_2 + 0x38c) = uVar2 + 1;
                  *(int *)(param_2 + (long)(int)uVar2 * 4 + 0x28c) = iVar12;
                  iVar12 = *piVar15;
LAB_01195e50:
                  uVar13 = (ulong)bVar11;
                  bVar11 = bVar11 + 1;
                  *(byte *)(lVar9 + 0x58) = bVar11;
                  *(int *)(lVar8 + uVar18 * 0x68 + uVar13 * 4 + 0x34) = iVar12;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < bVar10);
            }
          }
          else if (*(int *)(param_2 + lVar21 * 8 + 0x88) == 0) {
            pfVar22 = (float *)(lVar8 + uVar18 * 0x68);
            local_78 = (float)*(undefined8 *)(pfVar22 + 3);
            local_74 = *pfVar22 - local_78;
            local_70 = pfVar22[1];
            local_80 = CONCAT44(local_70 + (float)((ulong)*(undefined8 *)(pfVar22 + 3) >> 0x20),
                                *pfVar22 + local_78);
            local_84 = 0;
            local_6c = pfVar22[2] - local_78;
            local_78 = local_78 + pfVar22[2];
            queryTiles((dtTileCache *)param_2,&local_74,(float *)&local_80,(uint *)(pfVar22 + 5),
                       (int *)&local_84,8);
            *(byte *)(pfVar22 + 0x16) = 0;
            *(char *)((long)pfVar22 + 0x57) = (char)local_84;
            if ((int)((ulong)local_84 & 0xff) != 0) {
              bVar10 = 0;
              uVar6 = 0;
              do {
                uVar2 = *(uint *)(param_2 + 0x38c);
                uVar13 = (ulong)uVar2;
                if ((int)uVar2 < 0x40) {
                  piVar15 = (int *)(lVar8 + uVar18 * 0x68 + uVar6 * 4 + 0x14);
                  iVar12 = *piVar15;
                  pdVar19 = param_2 + 0x28c;
                  if (0 < (int)uVar2) {
                    do {
                      if (*(int *)pdVar19 == iVar12) goto LAB_01195db0;
                      uVar13 = uVar13 - 1;
                      pdVar19 = pdVar19 + 4;
                    } while (uVar13 != 0);
                  }
                  *(uint *)(param_2 + 0x38c) = uVar2 + 1;
                  *(int *)(param_2 + (long)(int)uVar2 * 4 + 0x28c) = iVar12;
                  iVar12 = *piVar15;
LAB_01195db0:
                  uVar13 = (ulong)bVar10;
                  bVar10 = bVar10 + 1;
                  *(byte *)(pfVar22 + 0x16) = bVar10;
                  *(int *)(lVar8 + uVar18 * 0x68 + uVar13 * 4 + 0x34) = iVar12;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 != ((ulong)local_84 & 0xff));
            }
          }
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(param_2 + 0x288));
      *(undefined4 *)(param_2 + 0x288) = 0;
      if (*(int *)(param_2 + 0x38c) != 0) goto LAB_01195b74;
    }
  }
  else {
LAB_01195b74:
    uVar2 = *(uint *)(param_2 + 0x28c);
    iVar5 = buildNavMeshTile((dtTileCache *)param_2,uVar2,in_x1);
    iVar12 = *(int *)(param_2 + 0x38c);
    iVar7 = (int)((long)iVar12 + -1);
    *(int *)(param_2 + 0x38c) = iVar7;
    if (0 < iVar7) {
      memmove(param_2 + 0x28c,param_2 + 0x290,((long)iVar12 + -1) * 4);
    }
    if (0 < *(int *)(param_2 + 0x58)) {
      lVar9 = *(long *)(param_2 + 0x78);
      lVar8 = 0;
      lVar21 = lVar9 + 0x34;
      do {
        lVar14 = lVar9 + lVar8 * 0x68;
        pbVar17 = (byte *)(lVar14 + 0x56);
        bVar10 = *pbVar17;
        if ((bVar10 | 2) == 3) {
          pbVar20 = (byte *)(lVar9 + lVar8 * 0x68 + 0x58);
          bVar11 = *pbVar20;
          uVar18 = (ulong)bVar11;
          if (uVar18 != 0) {
            uVar6 = 0;
            do {
              if (*(uint *)(lVar21 + uVar6 * 4) == uVar2) {
                *(undefined4 *)(lVar21 + uVar6 * 4) =
                     *(undefined4 *)(lVar9 + lVar8 * 0x68 + uVar18 * 4 + 0x30);
                *pbVar20 = bVar11 - 1;
                if (bVar11 == 1) goto LAB_01195c60;
                goto LAB_01195c04;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar18);
            if (bVar11 != 0) goto LAB_01195c04;
          }
LAB_01195c60:
          if (bVar10 == 3) {
            *pbVar17 = 0;
            lVar16 = lVar9 + lVar8 * 0x68;
            uVar3 = *(ushort *)(lVar16 + 0x54);
            sVar1 = uVar3 + 2;
            if ((uVar3 + 1 & 0x10000) == 0) {
              sVar1 = uVar3 + 1;
            }
            *(short *)(lVar16 + 0x54) = sVar1;
            *(undefined8 *)(lVar16 + 0x60) = *(undefined8 *)(param_2 + 0x80);
            *(long *)(param_2 + 0x80) = lVar14;
          }
          else if (bVar10 == 1) {
            *pbVar17 = 2;
          }
        }
LAB_01195c04:
        lVar8 = lVar8 + 1;
        lVar21 = lVar21 + 0x68;
      } while (lVar8 < *(int *)(param_2 + 0x58));
    }
    if (iVar5 < 0) goto LAB_01195ed0;
  }
  iVar5 = 0x40000000;
LAB_01195ed0:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}

