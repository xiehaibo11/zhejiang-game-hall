
void FUN_0015572c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 7;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0015587c;
    lVar5 = param_2[1];
  }
  *(undefined4 *)((long)pvVar2 + lVar5 + 3) = 0x6164626d;
  *(undefined4 *)((long)pvVar2 + lVar5) = 0x6d616c27;
  lVar5 = param_2[1] + 7;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x30);
  __n = *(long *)(param_1 + 0x38) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0015587c;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0015587c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x27;
  param_2[1] = param_2[1] + 1;
  FUN_00155888(param_1,param_2);
  return;
}

