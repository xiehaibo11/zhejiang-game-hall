
long FUN_010b9d2c(undefined8 param_1,long *param_2,undefined8 *param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  uVar3 = FUN_010babfc(*param_3);
  lVar4 = *param_2;
  lVar1 = *(long *)(lVar4 + 0x27) + (ulong)*(uint *)(lVar4 + 0x2f);
  puVar5 = (undefined4 *)(lVar1 + param_4 * 4);
  uVar6 = (lVar1 + param_5 * 4) - (long)puVar5;
  if ((long)uVar6 < 1) {
    return lVar4;
  }
  uVar6 = uVar6 >> 2;
  uVar2 = uVar6;
  if (uVar6 == 0) {
    uVar2 = 1;
  }
  if (7 < uVar2) {
    uVar7 = uVar2 & 0x7ffffffffffffff8;
    uVar6 = uVar6 - uVar7;
    puVar8 = (undefined8 *)(lVar1 + param_4 * 4 + 0x10);
    uVar9 = uVar7;
    do {
      puVar8[-1] = CONCAT44(uVar3,uVar3);
      puVar8[-2] = CONCAT44(uVar3,uVar3);
      puVar8[1] = CONCAT44(uVar3,uVar3);
      *puVar8 = CONCAT44(uVar3,uVar3);
      uVar9 = uVar9 - 8;
      puVar8 = puVar8 + 4;
    } while (uVar9 != 0);
    puVar5 = puVar5 + uVar7;
    if (uVar2 == uVar7) goto LAB_010b9dcc;
  }
  do {
    uVar6 = uVar6 - 1;
    *puVar5 = uVar3;
    puVar5 = puVar5 + 1;
  } while (0 < (long)uVar6);
LAB_010b9dcc:
  return *param_2;
}

