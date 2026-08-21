
void FUN_01848bbc(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  uVar4 = lVar3 + 0xc;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_01848c9c;
    lVar3 = param_2[1];
  }
  builtin_strncpy((char *)((long)pvVar1 + lVar3)," [enable_if:",0xc);
  param_2[1] = param_2[1] + 0xc;
  FUN_01844180(param_1 + 0x10,param_2);
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
LAB_01848c9c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x5d;
  return;
}

