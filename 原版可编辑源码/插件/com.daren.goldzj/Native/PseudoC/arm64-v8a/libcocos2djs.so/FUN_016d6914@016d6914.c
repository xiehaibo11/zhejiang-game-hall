
void FUN_016d6914(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t __n;
  undefined8 *puVar4;
  void *__src;
  ulong uVar5;
  ulong uVar6;
  Zone *this;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar9 = (undefined8 *)param_1[2];
  if (puVar9 != (undefined8 *)param_1[3]) goto LAB_016d6ae4;
  pvVar14 = (void *)*param_1;
  __src = (void *)param_1[1];
  if (pvVar14 <= __src && (long)__src - (long)pvVar14 != 0) {
    lVar10 = (long)__src - (long)pvVar14 >> 3;
    lVar1 = lVar10 + 2;
    if (-1 < lVar10 + 1) {
      lVar1 = lVar10 + 1;
    }
    __n = (long)puVar9 - (long)__src;
    pvVar14 = (void *)((long)__src + (lVar1 >> 1) * -8);
    if (__n != 0) {
      memmove(pvVar14,__src,__n);
      __src = (void *)param_1[1];
    }
    puVar9 = (undefined8 *)((long)pvVar14 + ((long)__n >> 3) * 8);
    param_1[1] = (ulong)((long)__src + (lVar1 >> 1) * -8);
    param_1[2] = (ulong)puVar9;
    goto LAB_016d6ae4;
  }
  puVar15 = (undefined8 *)param_1[4];
  lVar1 = (long)param_1[3] - (long)pvVar14;
  uVar6 = lVar1 >> 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  puVar4 = (undefined8 *)puVar15[1];
  uVar12 = uVar6 >> 2;
  if ((puVar4 == (undefined8 *)0x0) || ((ulong)puVar4[1] < uVar6)) {
    this = (Zone *)*puVar15;
    uVar5 = uVar6 * 8;
    puVar4 = *(undefined8 **)(this + 0x10);
    if (uVar5 < (ulong)(*(long *)(this + 0x18) - (long)puVar4) ||
        uVar5 - (*(long *)(this + 0x18) - (long)puVar4) == 0) {
      *(undefined8 **)(this + 0x10) = puVar4 + uVar6;
    }
    else {
      puVar4 = (undefined8 *)v8::internal::Zone::NewExpand(this,uVar5);
    }
  }
  else {
    puVar15[1] = *puVar4;
  }
  puVar11 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  puVar2 = puVar4 + uVar12;
  puVar9 = puVar2;
  if (puVar11 != puVar3) {
    uVar7 = (ulong)((long)puVar3 + (-8 - (long)puVar11)) >> 3;
    uVar5 = uVar7 + 1;
    puVar8 = puVar2;
    if ((3 < uVar5) && ((puVar11 + uVar7 + 1 <= puVar2 || (puVar4 + uVar12 + uVar7 + 1 <= puVar11)))
       ) {
      uVar7 = uVar5 & 0x3ffffffffffffffc;
      puVar9 = puVar11 + 2;
      puVar11 = puVar11 + uVar7;
      puVar8 = puVar4 + uVar12 + 2;
      uVar12 = uVar7;
      do {
        puVar13 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar18 = puVar9[1];
        uVar17 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar12 = uVar12 - 4;
        puVar8[-1] = *puVar13;
        puVar8[-2] = uVar16;
        puVar8[1] = uVar18;
        *puVar8 = uVar17;
        puVar8 = puVar8 + 4;
      } while (uVar12 != 0);
      puVar9 = puVar2 + uVar7;
      puVar8 = puVar2 + uVar7;
      if (uVar5 == uVar7) goto LAB_016d6a98;
    }
    do {
      puVar13 = puVar11 + 1;
      *puVar8 = *puVar11;
      puVar9 = puVar8 + 1;
      puVar8 = puVar8 + 1;
      puVar11 = puVar13;
    } while (puVar3 != puVar13);
  }
LAB_016d6a98:
  puVar11 = (undefined8 *)*param_1;
  uVar12 = param_1[3];
  *param_1 = (ulong)puVar4;
  param_1[1] = (ulong)puVar2;
  param_1[2] = (ulong)puVar9;
  param_1[3] = (ulong)(puVar4 + uVar6);
  if ((puVar11 != (undefined8 *)0x0) && (0xf < uVar12 - (long)puVar11)) {
    uVar6 = (long)(uVar12 - (long)puVar11) >> 3;
    if ((puVar15[1] == 0) || (*(ulong *)(puVar15[1] + 8) <= uVar6)) {
      puVar11[1] = uVar6;
      *puVar11 = puVar15[1];
      puVar15[1] = puVar11;
      puVar9 = (undefined8 *)param_1[2];
    }
  }
LAB_016d6ae4:
  *puVar9 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}

