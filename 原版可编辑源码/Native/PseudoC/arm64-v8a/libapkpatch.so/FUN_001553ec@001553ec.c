
void FUN_001553ec(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_2[1];
  uVar1 = lVar4 + 9;
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
    if (pvVar2 == (void *)0x0) goto LAB_001554ec;
    lVar4 = param_2[1];
  }
  builtin_strncpy((char *)((long)pvVar2 + lVar4),"template<",9);
  param_2[1] = param_2[1] + 9;
  FUN_0015555c(param_1 + 0x18,param_2);
  lVar4 = param_2[1];
  uVar1 = lVar4 + 0xb;
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
LAB_001554ec:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  builtin_strncpy((char *)((long)pvVar2 + lVar4),"> typename ",0xb);
  param_2[1] = param_2[1] + 0xb;
  return;
}

