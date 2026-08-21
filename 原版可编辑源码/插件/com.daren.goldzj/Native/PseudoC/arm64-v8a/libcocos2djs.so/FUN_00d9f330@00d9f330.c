
undefined8 FUN_00d9f330(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  code *pcVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int local_80;
  
  lVar13 = *(long *)(param_1 + 0x250);
  uVar10 = *(uint *)(param_1 + 0x1b0);
  local_80 = *(int *)(lVar13 + 0x2c);
  iVar8 = *(int *)(lVar13 + 0x30);
  if (local_80 < iVar8) {
    uVar18 = *(uint *)(lVar13 + 0x28);
    uVar6 = *(int *)(param_1 + 0x1e8) - 1;
    puVar1 = (undefined8 *)(lVar13 + 0x38);
    do {
      if (uVar18 <= uVar6) {
        do {
          if (*(int *)(param_1 + 0x238) != 0) {
            memset((void *)*puVar1,0,(long)*(int *)(param_1 + 0x1f0) << 7);
          }
          uVar7 = (**(code **)(*(long *)(param_1 + 0x270) + 8))(param_1,puVar1);
          if ((int)uVar7 == 0) {
            *(uint *)(lVar13 + 0x28) = uVar18;
            *(int *)(lVar13 + 0x2c) = local_80;
            return uVar7;
          }
          iVar8 = *(int *)(param_1 + 0x1c0);
          if (0 < iVar8) {
            lVar15 = 0;
            iVar22 = 0;
            do {
              lVar17 = *(long *)(param_1 + lVar15 * 8 + 0x1c8);
              if (*(int *)(lVar17 + 0x34) == 0) {
                iVar22 = *(int *)(lVar17 + 0x40) + iVar22;
              }
              else {
                uVar9 = *(uint *)(lVar17 + 0x3c);
                puVar2 = (uint *)(lVar17 + 0x38);
                puVar3 = puVar2;
                if (uVar6 <= uVar18) {
                  puVar3 = (uint *)(lVar17 + 0x48);
                }
                if (0 < (int)uVar9) {
                  uVar5 = *puVar3;
                  if ((int)uVar5 < 1) {
                    uVar5 = *puVar2;
                    if (uVar9 < 8) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = uVar9 & 0xfffffff8;
                      if (uVar12 != 0) {
                        iVar23 = 0;
                        iVar24 = 0;
                        iVar25 = 0;
                        iVar26 = 0;
                        iVar27 = 0;
                        iVar28 = 0;
                        iVar29 = 0;
                        uVar14 = uVar12;
                        do {
                          iVar22 = uVar5 + iVar22;
                          iVar23 = uVar5 + iVar23;
                          iVar24 = uVar5 + iVar24;
                          iVar25 = uVar5 + iVar25;
                          uVar14 = uVar14 - 8;
                          iVar26 = uVar5 + iVar26;
                          iVar27 = uVar5 + iVar27;
                          iVar28 = uVar5 + iVar28;
                          iVar29 = uVar5 + iVar29;
                        } while (uVar14 != 0);
                        iVar22 = iVar26 + iVar22 + iVar27 + iVar23 +
                                 iVar28 + iVar24 + iVar29 + iVar25;
                        if (uVar9 == uVar12) goto LAB_00d9f570;
                      }
                    }
                    do {
                      uVar12 = uVar12 + 1;
                      iVar22 = iVar22 + uVar5;
                    } while ((int)uVar12 < (int)uVar9);
                  }
                  else {
                    iVar23 = *(int *)(lVar17 + 0x44);
                    iVar24 = *(int *)(lVar17 + 0x28);
                    pcVar21 = *(code **)(*(long *)(param_1 + 0x278) + (long)*(int *)(lVar17 + 4) * 8
                                        + 8);
                    iVar8 = 0;
                    lVar19 = *(long *)(param_2 + (long)*(int *)(lVar17 + 4) * 8) +
                             (long)(iVar24 * local_80) * 8;
                    do {
                      if ((*(uint *)(param_1 + 0xb0) < uVar10 - 1) ||
                         (iVar8 + local_80 < *(int *)(lVar17 + 0x4c))) {
                        uVar16 = (ulong)uVar5;
                        puVar20 = puVar1 + iVar22;
                        iVar24 = iVar23 * uVar18;
                        do {
                          (*pcVar21)(param_1,lVar17,*puVar20,lVar19,iVar24);
                          uVar16 = uVar16 - 1;
                          iVar24 = *(int *)(lVar17 + 0x24) + iVar24;
                          puVar20 = puVar20 + 1;
                        } while (uVar16 != 0);
                        iVar24 = *(int *)(lVar17 + 0x28);
                        uVar9 = *(uint *)(lVar17 + 0x3c);
                      }
                      iVar8 = iVar8 + 1;
                      lVar19 = lVar19 + (long)iVar24 * 8;
                      iVar22 = *puVar2 + iVar22;
                    } while (iVar8 < (int)uVar9);
                    iVar8 = *(int *)(param_1 + 0x1c0);
                  }
                }
              }
LAB_00d9f570:
              lVar15 = lVar15 + 1;
            } while (lVar15 < iVar8);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 <= uVar6);
        iVar8 = *(int *)(lVar13 + 0x30);
      }
      uVar18 = 0;
      local_80 = local_80 + 1;
      *(undefined4 *)(lVar13 + 0x28) = 0;
    } while (local_80 < iVar8);
    uVar10 = *(uint *)(param_1 + 0x1b0);
  }
  uVar18 = *(int *)(param_1 + 0xb0) + 1;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb0) = uVar18;
  if (uVar18 < uVar10) {
    lVar13 = *(long *)(param_1 + 0x250);
    if (*(int *)(param_1 + 0x1c0) < 2) {
      puVar4 = (undefined4 *)(*(long *)(param_1 + 0x1c8) + 0xc);
      if (uVar10 - 1 <= uVar18) {
        puVar4 = (undefined4 *)(*(long *)(param_1 + 0x1c8) + 0x4c);
      }
      uVar11 = *puVar4;
    }
    else {
      uVar11 = 1;
    }
    *(undefined4 *)(lVar13 + 0x30) = uVar11;
    *(undefined8 *)(lVar13 + 0x28) = 0;
    uVar7 = 3;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(param_1);
    uVar7 = 4;
  }
  return uVar7;
}

