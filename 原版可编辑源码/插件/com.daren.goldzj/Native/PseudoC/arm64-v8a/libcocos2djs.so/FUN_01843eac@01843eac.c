
void FUN_01843eac(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x10);
  lVar4 = param_2[1];
  __n = *(long *)(param_1 + 0x18) - (long)pvVar3;
  if (__n != 0) {
    uVar1 = lVar4 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_01844068;
      lVar4 = param_2[1];
    }
    memmove((void *)((long)pvVar2 + lVar4),pvVar3,__n);
    lVar4 = param_2[1] + __n;
    param_2[1] = lVar4;
  }
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_01844068;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3c;
  param_2[1] = param_2[1] + 1;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(*(long **)(param_1 + 0x20),param_2);
  lVar4 = param_2[1];
  uVar1 = lVar4 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_01844068;
    lVar4 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar4) = 0x283e;
  param_2[1] = param_2[1] + 2;
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))(*(long **)(param_1 + 0x28),param_2);
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_01844068:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}

