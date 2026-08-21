
undefined8 FUN_00e38e88(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar4 = *(uint **)(param_1 + 0x350);
  if (puVar4 == (uint *)0x0) {
    return 6;
  }
  if ((param_2 == 0) && (param_3 == 0)) {
    uVar1 = *puVar4;
    uVar5 = (ulong)uVar1;
    if (uVar1 == 0) {
      return 0;
    }
    uVar9 = *(ulong *)(puVar4 + 0x42);
    uVar11 = *(ulong *)(puVar4 + 0x44);
    if ((uVar1 < 4) || ((uVar9 < uVar11 + uVar5 * 8 && (uVar11 < uVar9 + uVar5 * 8)))) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5 & 0xfffffffc;
      puVar10 = (undefined8 *)(uVar11 + 0x10);
      puVar12 = (undefined8 *)(uVar9 + 0x10);
      uVar13 = uVar7;
      do {
        puVar3 = puVar10 + -1;
        uVar14 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar13 = uVar13 - 4;
        puVar12[-1] = *puVar3;
        puVar12[-2] = uVar14;
        puVar12[1] = uVar16;
        *puVar12 = uVar15;
        puVar12 = puVar12 + 4;
      } while (uVar13 != 0);
      if (uVar7 == uVar5) {
        return 0;
      }
    }
    do {
      lVar8 = uVar7 * 8;
      uVar7 = uVar7 + 1;
      *(undefined8 *)(uVar9 + lVar8) = *(undefined8 *)(uVar11 + lVar8);
    } while (uVar7 < uVar5);
    return 0;
  }
  if (param_3 == 0) {
    return 6;
  }
  uVar2 = *puVar4;
  uVar1 = param_2;
  if (uVar2 <= param_2) {
    uVar1 = uVar2;
  }
  if (uVar1 == 0) {
    uVar6 = 0;
    if (uVar2 == 0) goto LAB_00e38fa4;
  }
  else {
    uVar5 = *(ulong *)(puVar4 + 0x42);
    uVar6 = param_2;
    if (uVar2 <= param_2) {
      uVar6 = uVar2;
    }
    uVar9 = (ulong)uVar1;
    if ((uVar1 < 4) || ((uVar5 < param_3 + uVar9 * 8 && (param_3 < uVar5 + uVar9 * 8)))) {
      uVar11 = 0;
LAB_00e38f64:
      do {
        lVar8 = uVar11 * 8;
        uVar11 = uVar11 + 1;
        *(undefined8 *)(uVar5 + lVar8) = *(undefined8 *)(param_3 + lVar8);
      } while (uVar11 < uVar9);
    }
    else {
      uVar11 = uVar9 & 0xfffffffc;
      puVar10 = (undefined8 *)(param_3 + 0x10);
      puVar12 = (undefined8 *)(uVar5 + 0x10);
      uVar7 = uVar11;
      do {
        puVar3 = puVar10 + -1;
        uVar14 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar7 = uVar7 - 4;
        puVar12[-1] = *puVar3;
        puVar12[-2] = uVar14;
        puVar12[1] = uVar16;
        *puVar12 = uVar15;
        puVar12 = puVar12 + 4;
      } while (uVar7 != 0);
      if (uVar11 != uVar9) goto LAB_00e38f64;
    }
    if (uVar2 <= uVar6) goto LAB_00e38fa4;
  }
  memset((void *)(*(long *)(puVar4 + 0x42) + (ulong)uVar6 * 8),0,(ulong)(uVar2 + ~uVar6) * 8 + 8);
LAB_00e38fa4:
  if (param_2 == 0) {
    *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & 0xffffffffffff7fff;
    return 0;
  }
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x8000;
  return 0;
}

