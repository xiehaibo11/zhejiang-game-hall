
void FUN_001570a4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = param_2[1];
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar1 = lVar4 + 2;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00157230;
      lVar4 = param_2[1];
    }
    *(undefined2 *)((long)pvVar3 + lVar4) = 0x3a3a;
    lVar4 = param_2[1] + 2;
    param_2[1] = lVar4;
  }
  uVar1 = lVar4 + 6;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_00157230;
    lVar4 = param_2[1];
  }
  *(undefined2 *)((undefined4 *)((long)pvVar3 + lVar4) + 1) = 0x6574;
  *(undefined4 *)((long)pvVar3 + lVar4) = 0x656c6564;
  lVar6 = param_2[1];
  cVar2 = *(char *)(param_1 + 0x19);
  lVar4 = lVar6 + 6;
  param_2[1] = lVar4;
  if (cVar2 != '\0') {
    uVar1 = lVar6 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_00157230:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar3 + lVar4) + 1) = 0x20;
    *(undefined2 *)((long)pvVar3 + lVar4) = 0x5d5b;
    param_2[1] = param_2[1] + 3;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (*(char *)((long)plVar7 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0015722c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  return;
}

