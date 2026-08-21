
void FUN_01848ad8(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_2[1];
  __size = lVar3 + 5;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar1 + lVar3) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar1 + lVar3) = 0x3a647473;
  param_2[1] = param_2[1] + 5;
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01848b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}

