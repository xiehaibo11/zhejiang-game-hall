
undefined8 * FUN_01258a34(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong uVar10;
  size_t __n;
  long *__src;
  
  pbVar7 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if (pbVar7 == pbVar2) {
    return (undefined8 *)0x0;
  }
  if (*pbVar7 != 0x54) {
    return (undefined8 *)0x0;
  }
  pbVar6 = pbVar7 + 1;
  *param_1 = (long)pbVar6;
  if ((pbVar6 == pbVar2) || (*pbVar6 != 0x5f)) {
    if (pbVar2 == pbVar6) {
      return (undefined8 *)0x0;
    }
    if (9 < *pbVar6 - 0x30) {
      return (undefined8 *)0x0;
    }
    lVar5 = 0;
    while (pbVar2 + -1 != pbVar7) {
      pbVar6 = pbVar7 + 2;
      *param_1 = (long)pbVar6;
      lVar5 = lVar5 * 10 + (ulong)pbVar7[1] + -0x30;
      if ((pbVar2 + -2 == pbVar7) || (pbVar1 = pbVar7 + 2, pbVar7 = pbVar7 + 1, 9 < *pbVar1 - 0x30))
      goto LAB_01258c1c;
    }
    lVar5 = lVar5 * 10 + -0x30;
    pbVar6 = pbVar7 + 1;
LAB_01258c1c:
    if (pbVar6 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar6 != 0x5f) {
      return (undefined8 *)0x0;
    }
    uVar10 = lVar5 + 1;
  }
  else {
    uVar10 = 0;
  }
  *param_1 = (long)(pbVar6 + 1);
  if (*(char *)((long)param_1 + 0x2d2) != '\0') {
    pvVar8 = (void *)param_1[0x25c];
    lVar5 = *(long *)((long)pvVar8 + 8);
    puVar3 = pvVar8;
    if (0xfef < lVar5 + 0x20U) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_01258cc0;
      lVar5 = 0;
      *puVar3 = pvVar8;
      puVar3[1] = 0;
      param_1[0x25c] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar5 + 0x20;
    lVar4 = __strlen_chk(&DAT_014a7f2e,5);
    puVar9 = (undefined8 *)((long)puVar3 + lVar5 + 0x10);
    *puVar9 = &PTR_FUN_01735958;
    *(undefined4 *)((long)puVar3 + lVar5 + 0x18) = 0x1010107;
    *(undefined **)((long)puVar3 + lVar5 + 0x20) = &DAT_014a7f2e;
    *(undefined **)((long)puVar3 + lVar5 + 0x28) = &DAT_014a7f2e + lVar4;
    return puVar9;
  }
  if (*(char *)((long)param_1 + 0x2d1) == '\0') {
    if ((ulong)(param_1[0x49] - param_1[0x48] >> 3) <= uVar10) {
      return (undefined8 *)0x0;
    }
    return *(undefined8 **)(param_1[0x48] + uVar10 * 8);
  }
  pvVar8 = (void *)param_1[0x25c];
  lVar5 = *(long *)((long)pvVar8 + 8);
  puVar3 = pvVar8;
  if (0xfef < lVar5 + 0x30U) {
    puVar3 = malloc(0x1000);
    if (puVar3 == (void *)0x0) goto LAB_01258cc0;
    lVar5 = 0;
    *puVar3 = pvVar8;
    puVar3[1] = 0;
    param_1[0x25c] = (long)puVar3;
  }
  *(long *)((long)puVar3 + 8) = lVar5 + 0x30;
  puVar9 = (undefined8 *)((long)puVar3 + lVar5 + 0x10);
  *puVar9 = &PTR_FUN_01735a38;
  *(undefined4 *)((long)puVar3 + lVar5 + 0x18) = 0x202021f;
  *(ulong *)((long)puVar3 + lVar5 + 0x20) = uVar10;
  *(undefined8 *)((long)puVar3 + lVar5 + 0x28) = 0;
  *(undefined1 *)((long)puVar3 + lVar5 + 0x30) = 0;
  puVar3 = (undefined8 *)param_1[0x54];
  if (puVar3 == (undefined8 *)param_1[0x55]) {
    __src = (long *)param_1[0x53];
    __n = (long)puVar3 - (long)__src;
    if (param_1 + 0x56 == __src) {
      pvVar8 = malloc(__n * 2);
      if (pvVar8 == (void *)0x0) goto LAB_01258cc0;
      if (__n != 0) {
        memmove(pvVar8,__src,__n);
      }
      param_1[0x53] = (long)pvVar8;
    }
    else {
      pvVar8 = realloc(__src,__n * 2);
      param_1[0x53] = (long)pvVar8;
      if (pvVar8 == (void *)0x0) {
LAB_01258cc0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    puVar3 = (undefined8 *)((long)pvVar8 + ((long)__n >> 3) * 8);
    param_1[0x54] = (long)puVar3;
    param_1[0x55] = (long)((long)pvVar8 + ((long)__n >> 2) * 8);
  }
  param_1[0x54] = (long)(puVar3 + 1);
  *puVar3 = puVar9;
  return puVar9;
}

