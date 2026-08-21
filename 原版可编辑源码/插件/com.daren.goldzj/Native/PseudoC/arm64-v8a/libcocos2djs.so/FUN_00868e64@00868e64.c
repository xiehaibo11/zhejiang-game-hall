
void FUN_00868e64(long param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  void *__src;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0xa5) != '\0') {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
    puVar1 = *(undefined1 **)(param_1 + 0x48);
    if (puVar1 < *(undefined1 **)(param_1 + 0x50)) {
      *puVar1 = uVar3;
      goto LAB_00868f8c;
    }
    __src = *(void **)(param_1 + 0x40);
    sVar5 = (long)puVar1 - (long)__src;
    uVar7 = sVar5 + 1;
    if ((long)uVar7 < 0) goto LAB_0086900c;
    uVar4 = (long)*(undefined1 **)(param_1 + 0x50) - (long)__src;
    if (uVar4 < 0x3fffffffffffffff) {
      uVar4 = uVar4 * 2;
      if (uVar7 <= uVar4) {
        uVar7 = uVar4;
      }
      if (uVar7 != 0) goto LAB_00868f40;
      pvVar6 = (void *)0x0;
    }
    else {
      uVar7 = 0x7fffffffffffffff;
LAB_00868f40:
      pvVar6 = operator_new(uVar7);
    }
    *(undefined1 *)((long)pvVar6 + sVar5) = uVar3;
    if (0 < (long)sVar5) {
      memcpy(pvVar6,__src,sVar5);
    }
    *(void **)(param_1 + 0x40) = pvVar6;
    *(undefined1 **)(param_1 + 0x48) = (undefined1 *)((long)pvVar6 + sVar5) + 1;
    *(ulong *)(param_1 + 0x50) = (long)pvVar6 + uVar7;
    goto joined_r0x00868f78;
  }
  puVar1 = *(undefined1 **)(param_1 + 0x48);
  puVar2 = *(undefined1 **)(param_1 + 0x50);
  if (*(char *)(param_1 + 0xa6) == '\0') {
    if (puVar1 != puVar2) goto LAB_00868f88;
  }
  else if (puVar1 < puVar2) {
LAB_00868f88:
    *puVar1 = (char)param_2;
LAB_00868f8c:
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    return;
  }
  __src = *(void **)(param_1 + 0x40);
  sVar5 = (long)puVar1 - (long)__src;
  uVar7 = sVar5 + 1;
  if ((long)uVar7 < 0) {
LAB_0086900c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)((long)puVar2 - (long)__src) < 0x3fffffffffffffff) {
    uVar4 = ((long)puVar2 - (long)__src) * 2;
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 != 0) goto LAB_00868fb4;
    pvVar6 = (void *)0x0;
  }
  else {
    uVar7 = 0x7fffffffffffffff;
LAB_00868fb4:
    pvVar6 = operator_new(uVar7);
  }
  *(undefined1 *)((long)pvVar6 + sVar5) = (char)param_2;
  if (0 < (long)sVar5) {
    memcpy(pvVar6,__src,sVar5);
  }
  *(void **)(param_1 + 0x40) = pvVar6;
  *(undefined1 **)(param_1 + 0x48) = (undefined1 *)((long)pvVar6 + sVar5) + 1;
  *(ulong *)(param_1 + 0x50) = (long)pvVar6 + uVar7;
joined_r0x00868f78:
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

