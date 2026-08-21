
void FUN_00135b90(long *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = param_1[4];
  uVar1 = (param_1[5] - lVar4) + (param_1[1] - *param_1);
  if (10 < uVar1) {
    uVar1 = 0xb;
  }
  if ((ulong)(param_1[5] - lVar4) < uVar1) {
    uVar3 = FUN_00135af4(param_1);
    if ((int)uVar3 == 0) goto LAB_00135c4c;
    lVar4 = param_1[4];
    if (uVar1 <= (ulong)(param_1[5] - lVar4)) goto LAB_00135c04;
  }
  else {
LAB_00135c04:
    if (param_1[3] != 0) {
      lVar4 = param_1[3] + lVar4;
      local_50 = lVar4;
      uVar3 = FUN_00135704(&local_50,lVar4 + uVar1,param_2,param_3);
      if ((int)uVar3 != 0) {
        uVar3 = 1;
        param_1[4] = (local_50 - lVar4) + param_1[4];
      }
      goto LAB_00135c4c;
    }
  }
  uVar3 = 0;
LAB_00135c4c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

