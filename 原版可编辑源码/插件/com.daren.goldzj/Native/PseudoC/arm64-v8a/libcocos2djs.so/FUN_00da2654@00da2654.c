
undefined8 FUN_00da2654(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint local_1a4;
  uint local_194 [65];
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  uint local_78;
  long *local_70;
  
  lVar19 = param_1[0x4e];
  if ((*(int *)((long)param_1 + 0x174) != 0) && (*(int *)(lVar19 + 0x40) == 0)) {
    lVar21 = param_1[0x4d];
    iVar2 = *(int *)(lVar19 + 0x20);
    iVar6 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar6 = iVar2;
    }
    *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + (iVar6 >> 3);
    *(undefined4 *)(lVar19 + 0x20) = 0;
    uVar9 = (**(code **)(lVar21 + 0x10))(param_1);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if (0 < (int)param_1[0x38]) {
      lVar21 = 0;
      do {
        *(undefined4 *)(lVar19 + 0x2c + lVar21 * 4) = 0;
        lVar21 = lVar21 + 1;
      } while (lVar21 < (int)param_1[0x38]);
    }
    *(undefined4 *)(lVar19 + 0x28) = 0;
    *(undefined4 *)(lVar19 + 0x40) = *(undefined4 *)((long)param_1 + 0x174);
    if (*(int *)((long)param_1 + 0x23c) == 0) {
      *(undefined4 *)(lVar19 + 0x3c) = 0;
      iVar6 = *(int *)(lVar19 + 0x3c);
      goto joined_r0x00da2694;
    }
  }
  iVar6 = *(int *)(lVar19 + 0x3c);
joined_r0x00da2694:
  if (iVar6 == 0) {
    iVar2 = (int)param_1[0x44];
    lVar22 = param_1[0x46];
    uStack_88 = ((undefined8 *)param_1[5])[1];
    local_90 = *(undefined8 *)param_1[5];
    uVar4 = 1 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f);
    uVar14 = *(ulong *)(lVar19 + 0x18);
    uVar16 = (ulong)*(uint *)(lVar19 + 0x20);
    local_1a4 = *(int *)(lVar19 + 0x28);
    lVar21 = *param_2;
    iVar6 = *(int *)((long)param_1 + 0x21c);
    local_194[0] = -1 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f);
    local_70 = param_1;
    if (local_1a4 == 0) {
      iVar5 = 0;
      lVar13 = *(long *)(lVar19 + 0x68);
      do {
        if ((int)uVar16 < 8) {
          iVar7 = FUN_00da3d1c(&local_90,uVar14,uVar16,0);
          if (iVar7 == 0) goto LAB_00da2a94;
          uVar16 = (ulong)local_78;
          uVar14 = local_80;
          if (7 < (int)local_78) goto LAB_00da2894;
          uVar9 = 1;
LAB_00da28c0:
          uVar8 = FUN_00da3e70(&local_90,uVar14,uVar16,lVar13,uVar9);
          uVar14 = local_80;
          uVar15 = local_78;
          if ((int)uVar8 < 0) goto LAB_00da2a94;
        }
        else {
LAB_00da2894:
          uVar11 = (long)uVar14 >> ((ulong)((int)uVar16 - 8) & 0x3f);
          iVar7 = *(int *)(lVar13 + (uVar11 & 0xff) * 4 + 0x120);
          if (iVar7 == 0) {
            uVar9 = 9;
            goto LAB_00da28c0;
          }
          uVar8 = (uint)*(byte *)(lVar13 + (uVar11 & 0xff) + 0x520);
          uVar15 = (int)uVar16 - iVar7;
        }
        uVar16 = (ulong)uVar15;
        uVar18 = (int)uVar8 >> 4;
        if ((uVar8 & 0xf) == 0) {
          if (uVar18 != 0xf) {
            local_1a4 = 1 << (ulong)(uVar18 & 0x1f);
            if (uVar18 == 0) goto LAB_00da26ec;
            if (((int)uVar15 < (int)uVar18) &&
               (iVar7 = FUN_00da3d1c(&local_90,uVar14,uVar16,uVar18), uVar14 = local_80,
               uVar15 = local_78, iVar7 == 0)) goto LAB_00da2a94;
            uVar15 = uVar15 - uVar18;
            uVar16 = (ulong)uVar15;
            local_1a4 = (*(uint *)(&DAT_01950530 + (long)(int)uVar18 * 4) &
                        (uint)((long)uVar14 >> (uVar16 & 0x3f))) + local_1a4;
            if (local_1a4 != 0) goto LAB_00da26ec;
            break;
          }
          local_1a4 = 0;
        }
        else {
          if ((uVar8 & 0xf) != 1) {
            lVar20 = *param_1;
            *(undefined4 *)(lVar20 + 0x28) = 0x79;
            (**(code **)(lVar20 + 8))(param_1,0xffffffff);
          }
          if (((int)uVar15 < 1) &&
             (iVar7 = FUN_00da3d1c(&local_90,uVar14,uVar16,1), uVar14 = local_80, uVar15 = local_78,
             iVar7 == 0)) goto LAB_00da2a94;
          uVar16 = (ulong)(uVar15 - 1);
          local_1a4 = local_194[0];
          if ((1L << (uVar16 & 0x3f) & uVar14) != 0) {
            local_1a4 = uVar4;
          }
        }
        lVar20 = (long)iVar6;
        do {
          lVar17 = (long)*(int *)(lVar22 + lVar20 * 4);
          if (*(short *)(lVar21 + lVar17 * 2) == 0) {
            bVar1 = (int)uVar18 < 1;
            uVar18 = uVar18 - 1;
            lVar17 = lVar20;
            if (bVar1) break;
          }
          else {
            uVar15 = (uint)uVar16;
            if (((int)(uint)uVar16 < 1) &&
               (iVar6 = FUN_00da3d1c(&local_90,uVar14,uVar16,1), uVar14 = local_80,
               uVar15 = local_78, iVar6 == 0)) goto LAB_00da2a94;
            uVar16 = (ulong)(uVar15 - 1);
            if (((1L << (uVar16 & 0x3f) & uVar14) != 0) &&
               (sVar3 = *(short *)(lVar21 + lVar17 * 2), (uVar4 & (int)sVar3) == 0)) {
              uVar15 = uVar4;
              if (sVar3 < 0) {
                uVar15 = local_194[0];
              }
              *(short *)(lVar21 + lVar17 * 2) = (short)uVar15 + sVar3;
            }
          }
          lVar17 = lVar20 + 1;
          bVar1 = lVar20 < iVar2;
          lVar20 = lVar17;
        } while (bVar1);
        iVar7 = (int)lVar17;
        if (local_1a4 != 0) {
          uVar15 = *(uint *)(lVar22 + (long)iVar7 * 4);
          *(short *)(lVar21 + (long)(int)uVar15 * 2) = (short)local_1a4;
          local_194[(long)iVar5 + 1] = uVar15;
          iVar5 = iVar5 + 1;
        }
        uVar15 = (uint)uVar16;
        iVar6 = iVar7 + 1;
      } while (iVar7 < iVar2);
      iVar6 = 0;
    }
    else {
      iVar5 = 0;
LAB_00da26ec:
      lVar13 = (long)iVar6;
      do {
        lVar20 = (long)*(int *)(lVar22 + lVar13 * 4);
        if (*(short *)(lVar21 + lVar20 * 2) != 0) {
          uVar15 = (uint)uVar16;
          if (((int)(uint)uVar16 < 1) &&
             (iVar6 = FUN_00da3d1c(&local_90,uVar14,uVar16,1), uVar14 = local_80, uVar15 = local_78,
             iVar6 == 0)) {
LAB_00da2a94:
            if (iVar5 != 0) {
              uVar14 = (ulong)(iVar5 - 1U) + 1;
              lVar22 = (long)iVar5;
              lVar19 = lVar22;
              if (1 < uVar14) {
                uVar4 = ~(iVar5 - 1U) & 1;
                lVar13 = uVar14 - uVar4;
                if (lVar13 != 0) {
                  lVar19 = lVar22 - lVar13;
                  puVar12 = local_194 + lVar22;
                  do {
                    uVar15 = puVar12[-1];
                    uVar8 = *puVar12;
                    lVar13 = lVar13 + -2;
                    puVar12 = puVar12 + -2;
                    *(undefined2 *)(lVar21 + (long)(int)uVar8 * 2) = 0;
                    *(undefined2 *)(lVar21 + (long)(int)uVar15 * 2) = 0;
                  } while (lVar13 != 0);
                  if (uVar4 == 0) {
                    return 0;
                  }
                }
              }
              do {
                lVar22 = lVar19 + -1;
                *(undefined2 *)(lVar21 + (long)(int)local_194[lVar19] * 2) = 0;
                lVar19 = lVar22;
              } while ((int)lVar22 != 0);
            }
            return 0;
          }
          uVar16 = (ulong)(uVar15 - 1);
          if (((1L << (uVar16 & 0x3f) & uVar14) != 0) &&
             (sVar3 = *(short *)(lVar21 + lVar20 * 2), (uVar4 & (int)sVar3) == 0)) {
            uVar15 = uVar4;
            if (sVar3 < 0) {
              uVar15 = local_194[0];
            }
            *(short *)(lVar21 + lVar20 * 2) = (short)uVar15 + sVar3;
          }
        }
        uVar15 = (uint)uVar16;
        bVar1 = lVar13 < iVar2;
        lVar13 = lVar13 + 1;
      } while (bVar1);
      iVar6 = local_1a4 + -1;
    }
    puVar10 = (undefined8 *)param_1[5];
    puVar10[1] = uStack_88;
    *puVar10 = local_90;
    *(ulong *)(lVar19 + 0x18) = uVar14;
    *(uint *)(lVar19 + 0x20) = uVar15;
    *(int *)(lVar19 + 0x28) = iVar6;
  }
  *(int *)(lVar19 + 0x40) = *(int *)(lVar19 + 0x40) + -1;
  return 1;
}

