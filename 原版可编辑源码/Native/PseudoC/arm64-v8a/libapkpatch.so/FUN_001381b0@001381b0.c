
undefined4 FUN_001381b0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = *param_1;
  uStack_40 = param_2;
  FUN_00137154();
  while (*(char *)(param_1 + 0xb) == '\0') {
    if (((long)param_1[9] < 1) || ((ulong)param_1[8] < (ulong)param_1[9])) {
      FUN_00138524(param_1 + 3,&uStack_40);
      FUN_0013785c(param_1[2]);
      uVar3 = 1;
      bVar2 = param_1[9] == 0;
      goto LAB_00138268;
    }
    if ((param_3 & 1) == 0) break;
    param_1[10] = param_1[10] + 1;
    FUN_001376fc(param_1[1],&local_48);
    param_1[10] = param_1[10] + -1;
  }
  uVar3 = 0;
  bVar2 = false;
LAB_00138268:
  FUN_001372b0(local_48);
  if (bVar2) {
    while( true ) {
      uVar4 = *param_1;
      FUN_00137154(uVar4);
      if (*(char *)(param_1 + 0xb) != '\0') break;
      lVar5 = param_1[8];
      FUN_001372b0(uVar4);
      if (lVar5 == 0) goto LAB_001382a8;
      sched_yield();
    }
    FUN_001372b0(uVar4);
LAB_001382a8:
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

