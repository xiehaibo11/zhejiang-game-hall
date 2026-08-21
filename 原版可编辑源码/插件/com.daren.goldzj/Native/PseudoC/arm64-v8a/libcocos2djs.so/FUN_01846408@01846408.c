
void FUN_01846408(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_2[1];
  __size = lVar3 + 1;
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
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x7e;
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x01846484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))(*(long **)(param_1 + 0x10),param_2);
  return;
}

