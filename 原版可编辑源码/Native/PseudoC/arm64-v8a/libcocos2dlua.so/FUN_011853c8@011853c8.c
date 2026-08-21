
void FUN_011853c8(long *param_1,long param_2,undefined4 param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  long lVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  undefined4 uVar20;
  float *pfVar21;
  ulong uVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long local_80 [4];
  
  lVar8 = tpidr_el0;
  local_80[3] = *(long *)(lVar8 + 0x28);
  (**(code **)(*param_1 + 0x20))(param_1,1);
  if (0 < *(int *)(*(long *)(param_2 + 8) + 0x18)) {
    lVar18 = 0;
    do {
      lVar12 = *(long *)(param_2 + 0x10);
      lVar2 = lVar12 + lVar18 * 0x20;
      if ((*(byte *)(lVar2 + 0x1f) & 0xc0) != 0x40) {
        pbVar15 = (byte *)(lVar2 + 0x1e);
        uVar16 = (ulong)*pbVar15;
        if (uVar16 != 0) {
          piVar13 = (int *)(*(long *)(param_2 + 0x28) + lVar18 * 0xc);
          uVar17 = 0;
          puVar3 = (uint *)(lVar12 + lVar18 * 0x20);
          do {
            sVar7 = *(short *)((long)puVar3 + uVar17 * 2 + 0x10);
            if ((param_4 & 1) == 0) {
              uVar20 = param_3;
              if (sVar7 == 0) goto LAB_0118554c;
            }
            else if (sVar7 != 0) {
              if (sVar7 < 0) {
                uVar10 = *puVar3;
                if (uVar10 != 0xffffffff) {
                  do {
                    if (uVar17 == *(byte *)(*(long *)(param_2 + 0x20) + (ulong)uVar10 * 0xc + 8)) {
                      uVar20 = 0x30ffffff;
                      goto LAB_0118554c;
                    }
                    uVar10 = *(uint *)(*(long *)(param_2 + 0x20) + (ulong)uVar10 * 0xc + 4);
                  } while (uVar10 != 0xffffffff);
                }
                uVar20 = 0x30000000;
              }
              else {
                uVar20 = 0x20403000;
              }
LAB_0118554c:
              uVar22 = 0;
              if (uVar17 + 1 != uVar16) {
                uVar22 = uVar17 + 1 & 0xffffffff;
              }
              if (*(byte *)((long)piVar13 + 9) != 0) {
                uVar10 = 0;
                lVar2 = lVar12 + lVar18 * 0x20 + 4;
                pfVar19 = (float *)(*(long *)(param_2 + 0x18) +
                                   (ulong)*(ushort *)(lVar2 + uVar17 * 2) * 0xc);
                pfVar23 = (float *)(*(long *)(param_2 + 0x18) +
                                   (ulong)*(ushort *)(lVar2 + uVar22 * 2) * 0xc);
                do {
                  pbVar4 = (byte *)(*(long *)(param_2 + 0x38) + (ulong)((piVar13[1] + uVar10) * 4));
                  bVar5 = *pbVar4;
                  bVar6 = *pbVar15;
                  if ((uint)bVar5 < (uint)bVar6) {
                    local_80[0] = *(long *)(param_2 + 0x18) +
                                  (ulong)*(ushort *)(lVar12 + lVar18 * 0x20 + (ulong)bVar5 * 2 + 4)
                                  * 0xc;
                  }
                  else {
                    local_80[0] = *(long *)(param_2 + 0x30) +
                                  (ulong)((((uint)bVar5 - (uint)bVar6) + *piVar13) * 3) * 4;
                  }
                  bVar5 = pbVar4[1];
                  uVar11 = (uint)bVar6;
                  if (bVar5 < uVar11) {
                    local_80[1] = *(long *)(param_2 + 0x18) +
                                  (ulong)*(ushort *)(lVar12 + lVar18 * 0x20 + (ulong)bVar5 * 2 + 4)
                                  * 0xc;
                  }
                  else {
                    local_80[1] = *(long *)(param_2 + 0x30) +
                                  (ulong)(((bVar5 - uVar11) + *piVar13) * 3) * 4;
                  }
                  bVar5 = pbVar4[2];
                  if (bVar5 < uVar11) {
                    local_80[2] = *(long *)(param_2 + 0x18) +
                                  (ulong)*(ushort *)(lVar12 + lVar18 * 0x20 + (ulong)bVar5 * 2 + 4)
                                  * 0xc;
                  }
                  else {
                    local_80[2] = *(long *)(param_2 + 0x30) +
                                  (ulong)(((bVar5 - uVar11) + *piVar13) * 3) * 4;
                  }
                  uVar14 = 2;
                  uVar22 = 0;
                  do {
                    if ((3 << (ulong)(((uint)uVar14 & 0xf) << 1) & (uint)pbVar4[3]) != 0) {
                      pfVar9 = (float *)local_80[uVar14];
                      fVar24 = *pfVar19;
                      fVar25 = pfVar19[2];
                      fVar27 = *pfVar23 - fVar24;
                      fVar26 = pfVar23[2] - fVar25;
                      fVar28 = fVar27 * fVar27 + fVar26 * fVar26;
                      fVar30 = fVar27 * (*pfVar9 - fVar24) + fVar26 * (pfVar9[2] - fVar25);
                      fVar29 = fVar30 / fVar28;
                      if (fVar28 == 0.0) {
                        fVar29 = fVar30;
                      }
                      fVar30 = (fVar24 + fVar27 * fVar29) - *pfVar9;
                      fVar29 = (fVar25 + fVar26 * fVar29) - pfVar9[2];
                      if (fVar30 * fVar30 + fVar29 * fVar29 < 0.0001) {
                        pfVar21 = (float *)local_80[uVar22];
                        fVar30 = fVar27 * (*pfVar21 - fVar24) + fVar26 * (pfVar21[2] - fVar25);
                        fVar29 = fVar30 / fVar28;
                        if (fVar28 == 0.0) {
                          fVar29 = fVar30;
                        }
                        fVar24 = (fVar24 + fVar27 * fVar29) - *pfVar21;
                        fVar29 = (fVar25 + fVar26 * fVar29) - pfVar21[2];
                        if (fVar24 * fVar24 + fVar29 * fVar29 < 0.0001) {
                          (**(code **)(*param_1 + 0x28))(param_1,pfVar9,uVar20);
                          (**(code **)(*param_1 + 0x28))(param_1,pfVar21,uVar20);
                        }
                      }
                    }
                    uVar1 = uVar22 + 1;
                    uVar14 = uVar22 & 0xffffffff;
                    uVar22 = uVar1;
                  } while (uVar1 != 3);
                  uVar10 = uVar10 + 1;
                } while (uVar10 < *(byte *)((long)piVar13 + 9));
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar16);
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(*(long *)(param_2 + 8) + 0x18));
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  if (*(long *)(lVar8 + 0x28) == local_80[3]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

