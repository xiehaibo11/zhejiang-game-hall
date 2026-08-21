
void FUN_0015dbd8(long param_1,undefined8 *param_2)

{
  size_t __n;
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  lVar3 = param_2[1];
  __n = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (__n != 0) {
    uVar5 = lVar3 + __n;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0015dd04;
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),pvVar2,__n);
    lVar3 = param_2[1] + __n;
    param_2[1] = lVar3;
  }
  uVar5 = lVar3 + 1;
  if (uVar5 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    param_2[2] = uVar5;
    pvVar2 = realloc((void *)*param_2,uVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0015dd04:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  plVar6 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0015dd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  return;
}

