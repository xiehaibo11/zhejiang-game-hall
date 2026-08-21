
void FUN_00d915c4(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = param_1[0x52];
  param_1[0x14] = *(undefined8 *)(lVar14 + 0x20);
  iVar12 = *(int *)(param_1 + 0xe);
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(lVar14 + 0x28);
  if (iVar12 == 2) {
    *(code **)(lVar14 + 8) = FUN_00d91e38;
    *(undefined4 *)(lVar14 + 0x90) = 0;
    if (*(long *)(lVar14 + 0x70) == 0) {
      iVar12 = *(int *)(param_1 + 0x11);
      if (*(int *)(param_1 + 0x12) < 1) {
        return;
      }
      lVar15 = 0;
      do {
        uVar4 = (**(code **)(param_1[1] + 8))(param_1,1,(ulong)(iVar12 + 2) << 1);
        *(undefined8 *)(lVar14 + 0x70 + lVar15 * 8) = uVar4;
        iVar2 = *(int *)(param_1 + 0x12);
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar2);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x12);
    }
    if (0 < iVar2) {
      iVar12 = *(int *)(param_1 + 0x11);
      lVar15 = 0;
      do {
        memset(*(void **)(lVar14 + 0x70 + lVar15 * 8),0,(ulong)(iVar12 + 2) << 1);
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_1 + 0x12));
    }
  }
  else if (iVar12 == 1) {
    pcVar1 = FUN_00d91c18;
    if (*(int *)(param_1 + 0x12) != 3) {
      pcVar1 = FUN_00d91d10;
    }
    *(code **)(lVar14 + 8) = pcVar1;
    *(undefined4 *)(lVar14 + 0x4c) = 0;
    if (*(int *)(lVar14 + 0x38) == 0) {
      FUN_00d9188c(param_1);
      lVar14 = *(long *)(lVar14 + 0x50);
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x50);
    }
    if ((lVar14 == 0) && (iVar12 = *(int *)(param_1 + 0x12), 0 < iVar12)) {
      lVar15 = param_1[0x52];
      lVar14 = 0;
      do {
        iVar2 = *(int *)(lVar15 + lVar14 * 4 + 0x3c);
        if (0 < lVar14) {
          lVar7 = 0;
          do {
            if (iVar2 == *(int *)(lVar15 + 0x3c + lVar7 * 4)) {
              lVar7 = *(long *)(lVar15 + 0x3c + lVar7 * 8 + 0x14);
              if (lVar7 != 0) goto LAB_00d91848;
              break;
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < lVar14);
        }
        lVar7 = (**(code **)param_1[1])(param_1,1,0x400);
        uVar3 = iVar2 - 1;
        lVar6 = 0;
        uVar8 = -(ulong)(uVar3 >> 0x1f) & 0xfffffe0000000000 | (ulong)uVar3 << 9;
        puVar9 = &DAT_0194f830;
        lVar10 = lVar7;
        do {
          lVar11 = 0;
          do {
            lVar13 = (ulong)(byte)puVar9[lVar11] * -2 + 0xff;
            if ((int)lVar13 < 0) {
              iVar12 = 0;
              if (uVar8 != 0) {
                iVar12 = (int)((lVar13 * -0xff) / (long)uVar8);
              }
              iVar12 = -iVar12;
            }
            else {
              iVar12 = 0;
              if (uVar8 != 0) {
                iVar12 = (int)((lVar13 * 0xff) / (long)uVar8);
              }
            }
            *(int *)(lVar10 + lVar11 * 4) = iVar12;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x10);
          lVar6 = lVar6 + 1;
          lVar10 = lVar10 + 0x40;
          puVar9 = puVar9 + 0x10;
        } while (lVar6 != 0x10);
        iVar12 = *(int *)(param_1 + 0x12);
LAB_00d91848:
        lVar6 = lVar14 * 8;
        lVar14 = lVar14 + 1;
        *(long *)(lVar15 + lVar6 + 0x50) = lVar7;
      } while (lVar14 < iVar12);
    }
  }
  else {
    if (iVar12 != 0) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x31;
                    /* WARNING: Could not recover jumptable at 0x00d916c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(param_1);
      return;
    }
    pcVar1 = FUN_00d91a64;
    if (*(int *)(param_1 + 0x12) != 3) {
      pcVar1 = FUN_00d91adc;
    }
    *(code **)(lVar14 + 8) = pcVar1;
  }
  return;
}

