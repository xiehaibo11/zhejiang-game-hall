
undefined8 FUN_00e6f4c4(long *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long local_350 [4];
  long local_330;
  long local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  
  uVar2 = param_2[1];
  uVar3 = param_1[1];
  local_350[2] = *param_2 << 2;
  lVar9 = param_3[1] << 2;
  local_350[0] = *param_3 << 2;
  local_350[1] = lVar9;
  local_350[3] = uVar2 << 2;
  local_330 = *param_1 << 2;
  local_328 = uVar3 << 2;
  uStack_320 = *(undefined8 *)(param_4 + 0x148);
  local_318 = *(undefined8 *)(param_4 + 0x150);
  iVar4 = *(int *)(param_4 + 0x114);
  iVar16 = (int)((ulong)param_3[1] >> 6);
  iVar19 = (int)((ulong)*(undefined8 *)(param_4 + 0x150) >> 8);
  if (((((iVar4 <= iVar16) && (iVar4 <= (int)(uVar2 >> 6))) && (iVar4 <= (int)(uVar3 >> 6))) &&
      (iVar4 <= iVar19)) ||
     (((iVar4 = *(int *)(param_4 + 0x110), iVar16 < iVar4 && ((int)(uVar2 >> 6) < iVar4)) &&
      (((int)(uVar3 >> 6) < iVar4 && (iVar19 < iVar4)))))) {
    *(long *)(param_4 + 0x148) = *param_3 << 2;
    *(long *)(param_4 + 0x150) = lVar9;
    return 0;
  }
  lVar22 = 0;
  do {
    lVar13 = lVar22 + 3;
    lVar8 = local_350[lVar22 * 2];
    lVar15 = local_350[lVar13 * 2];
    lVar14 = local_350[lVar22 * 2 + 7];
    lVar5 = lVar15 - lVar8;
    lVar18 = -lVar5;
    if (-1 < lVar5) {
      lVar18 = lVar5;
    }
    lVar6 = lVar14 - lVar9;
    lVar17 = -lVar6;
    if (-1 < lVar6) {
      lVar17 = lVar6;
    }
    lVar10 = lVar18;
    if (lVar18 <= lVar17) {
      lVar10 = lVar17;
      lVar17 = lVar18;
    }
    lVar10 = lVar10 + ((ulong)(lVar17 * 3) >> 3);
    if (lVar10 < 0x8000) {
      lVar18 = local_350[lVar22 * 2 + 2];
      lVar17 = local_350[lVar22 * 2 + 3];
      lVar10 = lVar10 * 0x2a;
      lVar20 = lVar17 - lVar9;
      lVar21 = lVar18 - lVar8;
      lVar7 = lVar21 * lVar6 - lVar20 * lVar5;
      lVar1 = -lVar7;
      if (-1 < lVar7) {
        lVar1 = lVar7;
      }
      if (lVar10 < lVar1) goto LAB_00e6f678;
      lVar11 = local_350[lVar22 * 2 + 4] - lVar8;
      lVar7 = local_350[lVar22 * 2 + 5] - lVar9;
      lVar12 = lVar11 * lVar6 - lVar7 * lVar5;
      lVar1 = -lVar12;
      if (-1 < lVar12) {
        lVar1 = lVar12;
      }
      if (((lVar10 < lVar1) || (0 < (lVar21 - lVar5) * lVar21 + (lVar20 - lVar6) * lVar20)) ||
         (0 < (lVar11 - lVar5) * lVar11 + (lVar7 - lVar6) * lVar7)) goto LAB_00e6f678;
      FUN_00e6f8c0(param_4);
      if (lVar22 == 0) {
        return 0;
      }
      lVar13 = lVar22 + -3;
    }
    else {
      lVar18 = local_350[lVar22 * 2 + 2];
      lVar17 = local_350[lVar22 * 2 + 3];
LAB_00e6f678:
      lVar8 = lVar18 + lVar8;
      if (lVar8 < 0) {
        lVar8 = lVar8 + 1;
      }
      lVar18 = local_350[lVar22 * 2 + 4] + lVar18;
      lVar5 = local_350[lVar22 * 2 + 4] + lVar15;
      if (lVar5 < 0) {
        lVar5 = lVar5 + 1;
      }
      if (lVar18 < 0) {
        lVar18 = lVar18 + 1;
      }
      local_350[lVar22 * 2 + 0xc] = lVar15;
      local_350[lVar22 * 2 + 0xd] = lVar14;
      lVar9 = lVar17 + lVar9;
      lVar14 = local_350[lVar22 * 2 + 5] + lVar14;
      lVar17 = local_350[lVar22 * 2 + 5] + lVar17;
      lVar15 = (lVar18 >> 1) + (lVar8 >> 1);
      lVar18 = (lVar5 >> 1) + (lVar18 >> 1);
      if (lVar15 < 0) {
        lVar15 = lVar15 + 1;
      }
      if (lVar18 < 0) {
        lVar18 = lVar18 + 1;
      }
      local_350[lVar22 * 2 + 4] = lVar15 >> 1;
      lVar15 = (lVar15 >> 1) + (lVar18 >> 1);
      if (lVar15 < 0) {
        lVar15 = lVar15 + 1;
      }
      if (lVar9 < 0) {
        lVar9 = lVar9 + 1;
      }
      if (lVar14 < 0) {
        lVar14 = lVar14 + 1;
      }
      if (lVar17 < 0) {
        lVar17 = lVar17 + 1;
      }
      local_350[lVar22 * 2 + 2] = lVar8 >> 1;
      local_350[lVar22 * 2 + 3] = lVar9 >> 1;
      lVar9 = (lVar17 >> 1) + (lVar9 >> 1);
      local_350[lVar22 * 2 + 10] = lVar5 >> 1;
      local_350[lVar22 * 2 + 0xb] = lVar14 >> 1;
      lVar8 = (lVar14 >> 1) + (lVar17 >> 1);
      if (lVar9 < 0) {
        lVar9 = lVar9 + 1;
      }
      if (lVar8 < 0) {
        lVar8 = lVar8 + 1;
      }
      local_350[lVar22 * 2 + 8] = lVar18 >> 1;
      local_350[lVar22 * 2 + 9] = lVar8 >> 1;
      lVar8 = (lVar9 >> 1) + (lVar8 >> 1);
      if (lVar8 < 0) {
        lVar8 = lVar8 + 1;
      }
      local_350[lVar22 * 2 + 5] = lVar9 >> 1;
      local_350[lVar22 * 2 + 6] = lVar15 >> 1;
      local_350[lVar22 * 2 + 7] = lVar8 >> 1;
    }
    lVar9 = local_350[lVar13 * 2 + 1];
    lVar22 = lVar13;
  } while( true );
}

