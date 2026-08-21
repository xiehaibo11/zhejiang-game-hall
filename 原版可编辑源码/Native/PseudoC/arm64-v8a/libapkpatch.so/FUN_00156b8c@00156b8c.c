
void FUN_00156b8c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  pvVar3 = *(void **)(param_1 + 0x10);
  lVar5 = param_2[1];
  __n = *(long *)(param_1 + 0x18) - (long)pvVar3;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00156d3c;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar2 + lVar5),pvVar3,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_00156d3c;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x3c;
  plVar4 = *(long **)(param_1 + 0x20);
  lVar5 = *plVar4;
  param_2[1] = param_2[1] + 1;
  (**(code **)(lVar5 + 0x20))(plVar4,param_2);
  lVar5 = param_2[1];
  uVar1 = lVar5 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_00156d3c;
    lVar5 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar5) = 0x283e;
  plVar4 = *(long **)(param_1 + 0x28);
  lVar5 = *plVar4;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar5 + 0x20))(plVar4,param_2);
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_00156d3c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}

