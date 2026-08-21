
void FUN_0184a9a0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 8;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0184ab50;
    lVar4 = param_2[1];
  }
  *(undefined8 *)((long)pvVar2 + lVar4) = 0x5b726f7463657620;
  lVar4 = param_2[1] + 8;
  param_2[1] = lVar4;
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
      if (*(char *)((long)plVar5 + 9) != '\x01') {
        (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
      }
    }
    else {
      __n = *(long *)(param_1 + 0x20) - (long)plVar5;
      if (__n != 0) {
        uVar1 = lVar4 + __n;
        if (uVar1 < (ulong)param_2[2]) {
          pvVar2 = (void *)*param_2;
        }
        else {
          uVar3 = param_2[2] << 1;
          if (uVar1 <= uVar3) {
            uVar1 = uVar3;
          }
          param_2[2] = uVar1;
          pvVar2 = realloc((void *)*param_2,uVar1);
          *param_2 = pvVar2;
          if (pvVar2 == (void *)0x0) goto LAB_0184ab50;
          lVar4 = param_2[1];
        }
        memmove((void *)((long)pvVar2 + lVar4),plVar5,__n);
        param_2[1] = param_2[1] + __n;
      }
    }
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_0184ab50:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}

