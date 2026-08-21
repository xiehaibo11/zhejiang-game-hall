
undefined8 FUN_00e2dc08(long param_1,uint param_2,void *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar12 = *(uint **)(param_1 + 0x4c0);
  if (puVar12 == (uint *)0x0) {
    uVar3 = FUN_00e2dd88(param_1,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    puVar12 = *(uint **)(param_1 + 0x4c0);
    lVar4 = *(long *)(puVar12 + 2);
  }
  else {
    lVar4 = *(long *)(puVar12 + 2);
  }
  if ((lVar4 == 0) && (uVar3 = FUN_00e2ef50(param_1,0,0,1), (int)uVar3 != 0)) {
    return uVar3;
  }
  uVar11 = *puVar12;
  uVar1 = uVar11;
  if (param_2 <= uVar11) {
    uVar1 = param_2;
  }
  if (*(char *)(param_1 + 0x4b9) == '\0') {
    if (uVar1 == 0) goto LAB_00e2dd44;
    if (param_2 <= uVar11) {
      uVar11 = param_2;
    }
    memset(param_3,0,(ulong)uVar1 << 3);
  }
  else {
    if (uVar1 == 0) {
LAB_00e2dd44:
      uVar11 = 0;
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_00e2dca4;
    }
    pvVar5 = *(void **)(puVar12 + 4);
    if (param_2 <= uVar11) {
      uVar11 = param_2;
    }
    uVar6 = (ulong)uVar1;
    if ((uVar1 < 4) ||
       ((param_3 < (void *)((long)pvVar5 + uVar6 * 8) &&
        (pvVar5 < (void *)((long)param_3 + uVar6 * 8))))) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6 & 0xfffffffc;
      puVar8 = (undefined8 *)((long)pvVar5 + 0x10);
      puVar9 = (undefined8 *)((long)param_3 + 0x10);
      uVar10 = uVar7;
      do {
        puVar2 = puVar8 + -1;
        uVar3 = puVar8[-2];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar10 = uVar10 - 4;
        puVar9[-1] = *puVar2;
        puVar9[-2] = uVar3;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      if (uVar7 == uVar6) goto joined_r0x00e2dd3c;
    }
    do {
      lVar4 = uVar7 * 8;
      uVar7 = uVar7 + 1;
      *(undefined8 *)((long)param_3 + lVar4) = *(undefined8 *)((long)pvVar5 + lVar4);
    } while (uVar7 < uVar6);
  }
joined_r0x00e2dd3c:
  if (param_2 <= uVar11) {
    return 0;
  }
LAB_00e2dca4:
  memset((void *)((long)param_3 + (ulong)uVar11 * 8),0,(ulong)(~uVar11 + param_2) * 8 + 8);
  return 0;
}

