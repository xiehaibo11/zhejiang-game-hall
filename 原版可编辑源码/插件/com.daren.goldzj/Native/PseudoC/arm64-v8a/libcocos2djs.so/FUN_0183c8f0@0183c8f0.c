
void FUN_0183c8f0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  uVar1 = lVar4 + 0x18;
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
    if (pvVar2 == (void *)0x0) goto LAB_0183ca4c;
    lVar4 = param_2[1];
  }
  builtin_strncpy((char *)((long)pvVar2 + lVar4),"construction vtable for ",0x18);
  param_2[1] = param_2[1] + 0x18;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 4;
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
LAB_0183ca4c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined4 *)((long)pvVar2 + lVar4) = 0x2d6e692d;
  param_2[1] = param_2[1] + 4;
  plVar5 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0183ca48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}

