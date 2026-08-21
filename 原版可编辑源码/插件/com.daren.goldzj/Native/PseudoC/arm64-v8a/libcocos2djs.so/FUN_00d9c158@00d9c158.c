
undefined8 FUN_00d9c158(long *param_1,long param_2)

{
  short sVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  short *psVar16;
  long *plVar17;
  long lVar18;
  
  lVar11 = param_1[0x46];
  if (*(int *)((long)param_1 + 0x13c) != 0) {
    iVar9 = *(int *)(lVar11 + 0x38);
    if (iVar9 == 0) {
      iVar9 = *(int *)((long)param_1 + 0x13c);
      if (0 < *(int *)((long)param_1 + 0x174)) {
        lVar5 = 0;
        do {
          *(undefined4 *)(lVar11 + 0x24 + lVar5 * 4) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)((long)param_1 + 0x174));
        iVar9 = *(int *)((long)param_1 + 0x13c);
      }
      *(int *)(lVar11 + 0x38) = iVar9;
    }
    *(int *)(lVar11 + 0x38) = iVar9 + -1;
  }
  if (0 < (int)param_1[0x34]) {
    lVar5 = 0;
    do {
      lVar6 = (long)*(int *)((long)param_1 + lVar5 * 4 + 0x1a4);
      psVar16 = *(short **)(param_2 + lVar5 * 8);
      piVar15 = (int *)(lVar11 + lVar6 * 4 + 0x24);
      lVar2 = param_1[0x3d];
      lVar18 = param_1[0x3c];
      iVar4 = (int)*psVar16 - *piVar15;
      lVar13 = *(long *)(lVar11 + (long)*(int *)(param_1[lVar6 + 0x2f] + 0x14) * 8 + 0x80);
      plVar17 = *(long **)(lVar11 + (long)*(int *)(param_1[lVar6 + 0x2f] + 0x18) * 8 + 0xa0);
      iVar9 = -iVar4;
      if (-1 < iVar4) {
        iVar9 = iVar4;
      }
      if (iVar9 == 0) {
        uVar14 = 0;
      }
      else {
        iVar4 = -1;
        do {
          iVar3 = iVar4;
          iVar9 = iVar9 >> 1;
          iVar4 = iVar3 + 1;
        } while (iVar9 != 0);
        uVar14 = (ulong)(iVar3 + 2);
        if (10 < iVar4) {
          puVar7 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar7 + 5) = 6;
          (*(code *)*puVar7)(param_1);
        }
      }
      uVar14 = -(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3;
      *(long *)(lVar13 + uVar14) = *(long *)(lVar13 + uVar14) + 1;
      if (0 < (int)lVar2) {
        uVar12 = 0;
        uVar14 = 1;
        do {
          sVar1 = psVar16[*(int *)(lVar18 + uVar14 * 4)];
          if (sVar1 == 0) {
            uVar12 = uVar12 + 1;
          }
          else {
            if (0xf < (int)uVar12) {
              uVar10 = 0xffffffe0;
              if (-0x20 < (int)~uVar12) {
                uVar10 = ~uVar12;
              }
              uVar10 = uVar12 + uVar10 + 0x10;
              uVar12 = (uVar12 - 0x10) - (uVar10 & 0xfffffff0);
              plVar17[0xf0] = plVar17[0xf0] + (ulong)((uVar10 >> 4) + 1);
            }
            iVar9 = 0;
            iVar4 = -(int)sVar1;
            if (-1 < sVar1) {
              iVar4 = (int)sVar1;
            }
            do {
              iVar4 = iVar4 >> 1;
              iVar9 = iVar9 + 1;
            } while (iVar4 != 0);
            if (10 < iVar9) {
              puVar7 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar7 + 5) = 6;
              (*(code *)*puVar7)(param_1);
            }
            uVar12 = iVar9 + uVar12 * 0x10;
            uVar8 = -(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3;
            uVar12 = 0;
            *(long *)((long)plVar17 + uVar8) = *(long *)((long)plVar17 + uVar8) + 1;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != (int)lVar2 + 1);
        if (0 < (int)uVar12) {
          *plVar17 = *plVar17 + 1;
        }
      }
      lVar2 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      *piVar15 = (int)**(short **)(param_2 + lVar2);
    } while (lVar5 < (int)param_1[0x34]);
  }
  return 1;
}

