
void FUN_018444d4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar3 = param_2[1];
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar1 = lVar3 + 2;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0184466c;
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x3a3a;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  uVar5 = param_2[2];
  uVar1 = lVar3 + 6;
  if (uVar1 < uVar5) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar5 = uVar5 << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_0184466c;
    lVar3 = param_2[1];
  }
  *(undefined2 *)((undefined4 *)((long)pvVar2 + lVar3) + 1) = 0x6574;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x656c6564;
  lVar4 = param_2[1];
  lVar3 = lVar4 + 6;
  param_2[1] = lVar3;
  if (*(char *)(param_1 + 0x19) != '\0') {
    uVar5 = param_2[2];
    uVar1 = lVar4 + 9;
    if (uVar1 < uVar5) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = uVar5 << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_0184466c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x20;
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
    param_2[1] = param_2[1] + 3;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x01844668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    return;
  }
  return;
}

