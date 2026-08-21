
undefined8 FUN_010f40ec(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long local_70 [4];
  
  iVar13 = *(int *)(param_1 + 0x174);
                    /* try { // try from 010f4110 to 011f4113 has its CatchHandler @ 010f41d8 */
  lVar20 = *(long *)(param_1 + 0x208);
                    /* try { // try from 010f4114 to 011f41f3 has its CatchHandler @ 010f402c */
  if (0 < iVar13) {
    lVar19 = 0;
    do {
      lVar11 = *(long *)(param_1 + 0x178 + lVar19 * 8);
      iVar13 = *(int *)(lVar11 + 0xc);
      lVar11 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                         (param_1,*(undefined8 *)(lVar20 + (long)*(int *)(lVar11 + 4) * 8 + 0x70),
                          iVar13 * *(int *)(lVar20 + 0x10),iVar13,0);
      local_70[lVar19] = lVar11;
      iVar13 = *(int *)(param_1 + 0x174);
      lVar19 = lVar19 + 1;
    } while (lVar19 < iVar13);
  }
  iVar10 = *(int *)(lVar20 + 0x1c);
  lVar19 = (long)*(int *)(lVar20 + 0x18);
  if (*(int *)(lVar20 + 0x18) < iVar10) {
    uVar21 = *(uint *)(lVar20 + 0x14);
    uVar12 = *(uint *)(param_1 + 0x198);
    do {
      if (uVar21 < uVar12) {
        do {
          iVar13 = *(int *)(param_1 + 0x174);
          if (0 < iVar13) {
            lVar15 = 0;
            lVar11 = 0;
            do {
              lVar16 = *(long *)(param_1 + lVar15 * 8 + 0x178);
              iVar10 = *(int *)(lVar16 + 0x3c);
              if (0 < iVar10) {
                uVar12 = *(uint *)(lVar16 + 0x38);
                if (0 < (int)uVar12) {
                  lVar17 = local_70[lVar15];
                  uVar2 = (ulong)(uVar12 - 1) + 1;
                    /* catch() { ... } // from try @ 010f4110 with catch @ 010f41d8 */
                  lVar16 = 0;
                  uVar18 = uVar2 - (uVar12 & 3);
                  do {
                    lVar6 = *(long *)(lVar17 + (lVar16 + lVar19) * 8);
                    lVar7 = (long)(int)lVar11;
                    lVar5 = lVar6 + (ulong)(uVar12 * uVar21) * 0x80;
                    if ((uVar2 < 4) || (uVar18 == 0)) {
                      uVar9 = 0;
LAB_010f426c:
                      do {
                        lVar11 = lVar7 + 1;
                        uVar1 = (int)uVar9 + 1;
                        uVar9 = (ulong)uVar1;
                        *(long *)(lVar20 + lVar7 * 8 + 0x20) = lVar5;
                        lVar5 = lVar5 + 0x80;
                        lVar7 = lVar11;
                      } while ((int)uVar1 < (int)uVar12);
                    }
                    else {
                      lVar11 = uVar18 + lVar7;
                      lVar5 = lVar5 + uVar18 * 0x80;
                      plVar8 = (long *)(lVar20 + 0x30 + lVar7 * 8);
                      lVar7 = lVar6 + (ulong)(uVar21 * uVar12) * 0x80 + 0x180;
                      uVar9 = uVar18;
                      do {
                        uVar9 = uVar9 - 4;
                        plVar8[-1] = lVar7 + -0x100;
                        plVar8[-2] = lVar7 + -0x180;
                        plVar8[1] = lVar7;
                        *plVar8 = lVar7 + -0x80;
                        plVar8 = plVar8 + 4;
                        lVar7 = lVar7 + 0x200;
                      } while (uVar9 != 0);
                      uVar9 = uVar18 & 0xffffffff;
                      lVar7 = lVar11;
                      if ((uVar12 & 3) != 0) goto LAB_010f426c;
                    }
                    lVar16 = lVar16 + 1;
                  } while (lVar16 < iVar10);
                }
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < iVar13);
          }
          uVar4 = (**(code **)(*(long *)(param_1 + 0x230) + 8))(param_1,lVar20 + 0x20);
          if ((int)uVar4 == 0) {
            *(uint *)(lVar20 + 0x14) = uVar21;
            *(int *)(lVar20 + 0x18) = (int)lVar19;
            return uVar4;
          }
          uVar12 = *(uint *)(param_1 + 0x198);
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar12);
        iVar10 = *(int *)(lVar20 + 0x1c);
      }
      lVar19 = lVar19 + 1;
      uVar21 = 0;
      *(undefined4 *)(lVar20 + 0x14) = 0;
    } while (lVar19 < iVar10);
    iVar13 = *(int *)(param_1 + 0x174);
  }
  *(int *)(lVar20 + 0x10) = *(int *)(lVar20 + 0x10) + 1;
  lVar20 = *(long *)(param_1 + 0x208);
  if (iVar13 < 2) {
    puVar3 = (undefined4 *)(*(long *)(param_1 + 0x178) + 0xc);
    if (*(int *)(param_1 + 0x170) - 1U <= *(uint *)(lVar20 + 0x10)) {
      puVar3 = (undefined4 *)(*(long *)(param_1 + 0x178) + 0x4c);
    }
    uVar14 = *puVar3;
  }
  else {
    uVar14 = 1;
  }
  *(undefined4 *)(lVar20 + 0x1c) = uVar14;
  *(undefined8 *)(lVar20 + 0x14) = 0;
  return 1;
}

