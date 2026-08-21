
void FUN_008662f0(long param_1,undefined4 param_2)

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
    puVar1 = *(undefined1 **)(param_1 + 0x30);
    if (puVar1 < *(undefined1 **)(param_1 + 0x38)) {
      *puVar1 = uVar3;
      goto LAB_00866418;
    }
    __src = *(void **)(param_1 + 0x28);
    sVar5 = (long)puVar1 - (long)__src;
    uVar7 = sVar5 + 1;
    if ((long)uVar7 < 0) goto LAB_00866498;
    uVar4 = (long)*(undefined1 **)(param_1 + 0x38) - (long)__src;
    if (uVar4 < 0x3fffffffffffffff) {
      uVar4 = uVar4 * 2;
      if (uVar7 <= uVar4) {
        uVar7 = uVar4;
      }
      if (uVar7 != 0) goto LAB_008663cc;
      pvVar6 = (void *)0x0;
    }
    else {
      uVar7 = 0x7fffffffffffffff;
LAB_008663cc:
      pvVar6 = operator_new(uVar7);
    }
    *(undefined1 *)((long)pvVar6 + sVar5) = uVar3;
    if (0 < (long)sVar5) {
      memcpy(pvVar6,__src,sVar5);
    }
    *(void **)(param_1 + 0x28) = pvVar6;
    *(undefined1 **)(param_1 + 0x30) = (undefined1 *)((long)pvVar6 + sVar5) + 1;
    *(ulong *)(param_1 + 0x38) = (long)pvVar6 + uVar7;
    goto joined_r0x00866404;
  }
  puVar1 = *(undefined1 **)(param_1 + 0x30);
  puVar2 = *(undefined1 **)(param_1 + 0x38);
  if (*(char *)(param_1 + 0xa6) == '\0') {
    if (puVar1 != puVar2) goto LAB_00866414;
  }
  else if (puVar1 < puVar2) {
LAB_00866414:
    *puVar1 = (char)param_2;
LAB_00866418:
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    return;
  }
  __src = *(void **)(param_1 + 0x28);
  sVar5 = (long)puVar1 - (long)__src;
  uVar7 = sVar5 + 1;
  if ((long)uVar7 < 0) {
LAB_00866498:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)((long)puVar2 - (long)__src) < 0x3fffffffffffffff) {
    uVar4 = ((long)puVar2 - (long)__src) * 2;
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 != 0) goto LAB_00866440;
    pvVar6 = (void *)0x0;
  }
  else {
    uVar7 = 0x7fffffffffffffff;
LAB_00866440:
    pvVar6 = operator_new(uVar7);
  }
  *(undefined1 *)((long)pvVar6 + sVar5) = (char)param_2;
  if (0 < (long)sVar5) {
    memcpy(pvVar6,__src,sVar5);
  }
  *(void **)(param_1 + 0x28) = pvVar6;
  *(undefined1 **)(param_1 + 0x30) = (undefined1 *)((long)pvVar6 + sVar5) + 1;
  *(ulong *)(param_1 + 0x38) = (long)pvVar6 + uVar7;
joined_r0x00866404:
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

