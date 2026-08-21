
undefined8 FUN_010fb368(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long local_70 [4];
  
  lVar20 = *(long *)(param_1 + 0x250);
  if (0 < *(int *)(param_1 + 0x1c0)) {
    lVar19 = 0;
    do {
      lVar12 = *(long *)(param_1 + 0x1c8 + lVar19 * 8);
      iVar11 = *(int *)(lVar12 + 0xc);
      lVar12 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                         (param_1,*(undefined8 *)(lVar20 + (long)*(int *)(lVar12 + 4) * 8 + 0x88),
                          iVar11 * *(int *)(param_1 + 0xb0),iVar11,1);
      local_70[lVar19] = lVar12;
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(param_1 + 0x1c0));
  }
  iVar11 = *(int *)(lVar20 + 0x30);
  lVar19 = (long)*(int *)(lVar20 + 0x2c);
  if (*(int *)(lVar20 + 0x2c) < iVar11) {
    uVar21 = *(uint *)(lVar20 + 0x28);
    uVar13 = *(uint *)(param_1 + 0x1e8);
    do {
      if (uVar21 < uVar13) {
        do {
          iVar11 = *(int *)(param_1 + 0x1c0);
          if (0 < iVar11) {
            lVar15 = 0;
            lVar12 = 0;
            do {
              lVar16 = *(long *)(param_1 + lVar15 * 8 + 0x1c8);
              iVar4 = *(int *)(lVar16 + 0x3c);
              if (0 < iVar4) {
                uVar13 = *(uint *)(lVar16 + 0x38);
                if (0 < (int)uVar13) {
                  lVar17 = local_70[lVar15];
                  uVar2 = (ulong)(uVar13 - 1) + 1;
                  lVar16 = 0;
                  uVar18 = uVar2 - (uVar13 & 3);
                  do {
                    lVar7 = *(long *)(lVar17 + (lVar16 + lVar19) * 8);
                    lVar8 = (long)(int)lVar12;
                    lVar6 = lVar7 + (ulong)(uVar13 * uVar21) * 0x80;
                    if ((uVar2 < 4) || (uVar18 == 0)) {
                      uVar10 = 0;
LAB_010fb4e8:
                      do {
                        lVar12 = lVar8 + 1;
                        uVar1 = (int)uVar10 + 1;
                        uVar10 = (ulong)uVar1;
                        *(long *)(lVar20 + lVar8 * 8 + 0x38) = lVar6;
                        lVar6 = lVar6 + 0x80;
                        lVar8 = lVar12;
                      } while ((int)uVar1 < (int)uVar13);
                    }
                    else {
                      lVar12 = uVar18 + lVar8;
                      lVar6 = lVar6 + uVar18 * 0x80;
                      plVar9 = (long *)(lVar20 + 0x48 + lVar8 * 8);
                      lVar8 = lVar7 + (ulong)(uVar21 * uVar13) * 0x80 + 0x180;
                      uVar10 = uVar18;
                      do {
                        uVar10 = uVar10 - 4;
                        plVar9[-1] = lVar8 + -0x100;
                        plVar9[-2] = lVar8 + -0x180;
                        plVar9[1] = lVar8;
                        *plVar9 = lVar8 + -0x80;
                        plVar9 = plVar9 + 4;
                        lVar8 = lVar8 + 0x200;
                      } while (uVar10 != 0);
                      uVar10 = uVar18 & 0xffffffff;
                      lVar8 = lVar12;
                      if ((uVar13 & 3) != 0) goto LAB_010fb4e8;
                    }
                    lVar16 = lVar16 + 1;
                  } while (lVar16 < iVar4);
                }
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < iVar11);
          }
          uVar5 = (**(code **)(*(long *)(param_1 + 0x270) + 8))(param_1,lVar20 + 0x38);
          if ((int)uVar5 == 0) {
            *(uint *)(lVar20 + 0x28) = uVar21;
            *(int *)(lVar20 + 0x2c) = (int)lVar19;
            return uVar5;
          }
          uVar13 = *(uint *)(param_1 + 0x1e8);
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar13);
        iVar11 = *(int *)(lVar20 + 0x30);
      }
      lVar19 = lVar19 + 1;
      uVar21 = 0;
      *(undefined4 *)(lVar20 + 0x28) = 0;
    } while (lVar19 < iVar11);
  }
  uVar21 = *(int *)(param_1 + 0xb0) + 1;
  *(uint *)(param_1 + 0xb0) = uVar21;
  if (uVar21 < *(uint *)(param_1 + 0x1b0)) {
    lVar20 = *(long *)(param_1 + 0x250);
    if (*(int *)(param_1 + 0x1c0) < 2) {
      puVar3 = (undefined4 *)(*(long *)(param_1 + 0x1c8) + 0xc);
      if (*(uint *)(param_1 + 0x1b0) - 1 <= uVar21) {
        puVar3 = (undefined4 *)(*(long *)(param_1 + 0x1c8) + 0x4c);
      }
      uVar14 = *puVar3;
    }
    else {
      uVar14 = 1;
    }
    *(undefined4 *)(lVar20 + 0x30) = uVar14;
    *(undefined8 *)(lVar20 + 0x28) = 0;
    uVar5 = 3;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x260) + 0x18))(param_1);
    uVar5 = 4;
  }
  return uVar5;
}

