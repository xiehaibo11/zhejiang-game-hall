
undefined8 FUN_00e3907c(long param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar4 = *(uint **)(param_1 + 0x350);
  if (puVar4 == (uint *)0x0) {
    return 6;
  }
  uVar1 = *param_2;
  uVar2 = *puVar4;
  uVar11 = (ulong)uVar2;
  if (uVar1 < uVar2) {
    *param_2 = uVar2;
    return 6;
  }
  if (uVar2 != 0) {
    uVar5 = *(ulong *)(puVar4 + 0x42);
    if ((uVar2 < 4) || ((param_3 < uVar5 + uVar11 * 8 && (uVar5 < param_3 + uVar11 * 8)))) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar11 & 0xfffffffc;
      puVar6 = (undefined8 *)(uVar5 + 0x10);
      puVar9 = (undefined8 *)(param_3 + 0x10);
      uVar10 = uVar7;
      do {
        puVar3 = puVar6 + -1;
        uVar12 = puVar6[-2];
        uVar14 = puVar6[1];
        uVar13 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar10 = uVar10 - 4;
        puVar9[-1] = *puVar3;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      if (uVar7 == uVar11) goto LAB_00e39110;
    }
    lVar8 = uVar11 - uVar7;
    puVar6 = (undefined8 *)(uVar5 + uVar7 * 8);
    puVar9 = (undefined8 *)(param_3 + uVar7 * 8);
    do {
      lVar8 = lVar8 + -1;
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar8 != 0);
  }
LAB_00e39110:
  if (uVar2 < uVar1) {
    memset((void *)(param_3 + uVar11 * 8),0,(ulong)(uVar1 + ~uVar2) * 8 + 8);
  }
  *param_2 = uVar2;
  return 0;
}

