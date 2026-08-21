
void FUN_01848040(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  size_t __n;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = param_2[1];
  uVar1 = lVar6 + 7;
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
    if (pvVar3 == (void *)0x0) goto LAB_018481e0;
    lVar6 = param_2[1];
  }
  puVar2 = (undefined4 *)((long)pvVar3 + lVar6);
  *(undefined1 *)((long)puVar2 + 6) = 0x61;
  *(undefined2 *)(puVar2 + 1) = 0x6462;
  *puVar2 = 0x6d616c27;
  lVar6 = param_2[1] + 7;
  param_2[1] = lVar6;
  pvVar3 = *(void **)(param_1 + 0x20);
  __n = *(long *)(param_1 + 0x28) - (long)pvVar3;
  if (__n != 0) {
    uVar1 = lVar6 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_018481e0;
      lVar6 = param_2[1];
    }
    memmove((void *)((long)pvVar4 + lVar6),pvVar3,__n);
    lVar6 = param_2[1] + __n;
    param_2[1] = lVar6;
  }
  uVar1 = lVar6 + 2;
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
    if (pvVar3 == (void *)0x0) goto LAB_018481e0;
    lVar6 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar6) = 0x2827;
  param_2[1] = param_2[1] + 2;
  FUN_01844180(param_1 + 0x10,param_2);
  lVar6 = param_2[1];
  uVar1 = lVar6 + 1;
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
LAB_018481e0:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}

