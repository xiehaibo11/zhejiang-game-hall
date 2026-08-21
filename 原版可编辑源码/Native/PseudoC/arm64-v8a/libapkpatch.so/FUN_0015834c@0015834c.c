
void FUN_0015834c(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_2[1];
  __size = lVar4 + 1;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (__size <= uVar3) {
      __size = uVar3;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x7e;
  plVar2 = *(long **)(param_1 + 0x10);
  lVar4 = *plVar2;
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x001583d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x20))(plVar2,param_2);
  return;
}

