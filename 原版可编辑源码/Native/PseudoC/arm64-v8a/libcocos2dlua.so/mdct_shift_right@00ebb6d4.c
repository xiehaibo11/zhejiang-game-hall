
void mdct_shift_right(uint param_1,long param_2,ulong param_3)

{
  undefined4 *puVar1;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar2;
  
  if ((int)param_1 < 4) {
    return;
  }
  uVar3 = (ulong)(param_1 >> 2);
  uVar4 = uVar3;
  if (param_1 >> 2 < 2) {
    uVar4 = 1;
  }
  if (8 < uVar4) {
    uVar7 = uVar3;
    if (uVar3 < 2) {
      uVar7 = 1;
    }
    if ((param_2 + uVar7 * 8 <= param_3) || (param_3 + uVar7 * 4 <= param_2 + 4U)) {
      uVar7 = 8;
      if ((uVar4 & 7) != 0) {
        uVar7 = uVar4 & 7;
      }
      uVar4 = uVar4 - uVar7;
      puVar5 = (undefined4 *)(param_2 + 0x24);
      puVar6 = (undefined8 *)(param_3 + 0x10);
      uVar7 = uVar4;
      do {
        uVar8 = *puVar5;
        uVar9 = puVar5[2];
        uVar10 = puVar5[4];
        uVar11 = puVar5[6];
        uVar12 = puVar5[-8];
        uVar13 = puVar5[-6];
        puVar1 = puVar5 + -4;
        puVar2 = puVar5 + -2;
        puVar5 = puVar5 + 0x10;
        uVar7 = uVar7 - 8;
        puVar6[-1] = CONCAT44(*puVar2,*puVar1);
        puVar6[-2] = CONCAT44(uVar13,uVar12);
        puVar6[1] = CONCAT44(uVar11,uVar10);
        *puVar6 = CONCAT44(uVar9,uVar8);
        puVar6 = puVar6 + 4;
      } while (uVar7 != 0);
      goto LAB_00ebb75c;
    }
  }
  uVar4 = 0;
LAB_00ebb75c:
  puVar5 = (undefined4 *)(param_2 + uVar4 * 8 + 4);
  do {
    *(undefined4 *)(param_3 + uVar4 * 4) = *puVar5;
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 2;
  } while (uVar4 < uVar3);
  return;
}

