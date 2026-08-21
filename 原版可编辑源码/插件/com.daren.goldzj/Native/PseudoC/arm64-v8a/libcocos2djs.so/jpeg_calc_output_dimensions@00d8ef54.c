
void jpeg_calc_output_dimensions(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  
  iVar9 = *(int *)((long)param_1 + 0x24);
  if (iVar9 != 0xca) {
    puVar10 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar10 + 5) = 0x15;
    *(int *)((long)puVar10 + 0x2c) = iVar9;
    (*(code *)*puVar10)(param_1);
  }
  jpeg_core_output_dimensions(param_1);
  iVar9 = (int)param_1[7];
  if (0 < iVar9) {
    iVar1 = (int)param_1[0x35];
    lVar11 = param_1[0x26];
    iVar2 = *(int *)((long)param_1 + 0x1ac);
    iVar12 = 8;
    if (*(int *)((long)param_1 + 100) == 0) {
      iVar12 = 4;
    }
    if (iVar12 < iVar1) {
      iVar13 = 0;
      lVar14 = lVar11;
      do {
        *(int *)(lVar14 + 0x24) = iVar1;
        if (iVar12 < iVar2) {
          iVar15 = 1;
        }
        else {
          iVar15 = 1;
          do {
            iVar16 = iVar15 * 2;
            iVar3 = iVar16 * *(int *)(lVar14 + 0xc);
            iVar4 = 0;
            if (iVar3 != 0) {
              iVar4 = *(int *)((long)param_1 + 0x1a4) / iVar3;
            }
          } while ((*(int *)((long)param_1 + 0x1a4) == iVar4 * iVar3) &&
                  (iVar15 = iVar16, iVar2 * iVar16 <= iVar12));
        }
        iVar15 = iVar2 * iVar15;
        *(int *)(lVar14 + 0x28) = iVar15;
        if (iVar15 * 2 < iVar1) {
          *(int *)(lVar14 + 0x24) = iVar15 * 2;
        }
        else if (iVar1 * 2 < iVar15) {
          *(int *)(lVar14 + 0x28) = iVar1 * 2;
        }
        iVar13 = iVar13 + 1;
        lVar14 = lVar14 + 0x60;
      } while (iVar13 < iVar9);
    }
    else {
      lVar7 = param_1[0x34];
      iVar13 = 0;
      lVar14 = lVar11;
      do {
        iVar15 = 1;
        do {
          iVar16 = iVar15 * 2;
          iVar3 = iVar16 * *(int *)(lVar14 + 8);
          iVar4 = 0;
          if (iVar3 != 0) {
            iVar4 = (int)lVar7 / iVar3;
          }
        } while (((int)lVar7 == iVar4 * iVar3) && (iVar15 = iVar16, iVar1 * iVar16 <= iVar12));
        iVar15 = iVar1 * iVar15;
        *(int *)(lVar14 + 0x24) = iVar15;
        if (iVar12 < iVar2) {
          iVar16 = 1;
        }
        else {
          iVar16 = 1;
          do {
            iVar3 = iVar16 * 2;
            iVar4 = iVar3 * *(int *)(lVar14 + 0xc);
            iVar5 = 0;
            if (iVar4 != 0) {
              iVar5 = *(int *)((long)param_1 + 0x1a4) / iVar4;
            }
          } while ((*(int *)((long)param_1 + 0x1a4) == iVar5 * iVar4) &&
                  (iVar16 = iVar3, iVar2 * iVar3 <= iVar12));
        }
        iVar16 = iVar2 * iVar16;
        *(int *)(lVar14 + 0x28) = iVar16;
        if (iVar16 * 2 < iVar15) {
          *(int *)(lVar14 + 0x24) = iVar16 * 2;
        }
        else if (iVar15 * 2 < iVar16) {
          *(int *)(lVar14 + 0x28) = iVar15 * 2;
        }
        iVar13 = iVar13 + 1;
        lVar14 = lVar14 + 0x60;
      } while (iVar13 < iVar9);
    }
    if (0 < iVar9) {
      iVar12 = 0;
      puVar17 = (undefined4 *)(lVar11 + 0x30);
      do {
        uVar8 = jdiv_round_up((long)(int)puVar17[-3] * (long)(int)puVar17[-10] *
                              (ulong)*(uint *)(param_1 + 6),
                              (long)*(int *)((long)param_1 + 0x22c) * (long)(int)param_1[0x34]);
        puVar17[-1] = uVar8;
        uVar8 = jdiv_round_up((long)(int)puVar17[-2] * (long)(int)puVar17[-9] *
                              (ulong)*(uint *)((long)param_1 + 0x34),
                              (long)*(int *)((long)param_1 + 0x22c) *
                              (long)*(int *)((long)param_1 + 0x1a4));
        *puVar17 = uVar8;
        iVar9 = (int)param_1[7];
        iVar12 = iVar12 + 1;
        puVar17 = puVar17 + 0x18;
      } while (iVar12 < iVar9);
    }
  }
  uVar6 = (int)param_1[8] - 1;
  if (uVar6 < 7) {
    iVar9 = *(int *)(&DAT_0194e5b0 + (long)(int)uVar6 * 4);
  }
  iVar12 = iVar9;
  if (*(int *)((long)param_1 + 0x6c) != 0) {
    iVar12 = 1;
  }
  *(int *)(param_1 + 0x12) = iVar9;
  *(int *)((long)param_1 + 0x94) = iVar12;
  iVar9 = FUN_00d8f1d8(param_1);
  if (iVar9 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = *(undefined4 *)((long)param_1 + 0x1a4);
  }
  *(undefined4 *)(param_1 + 0x13) = uVar8;
  return;
}

