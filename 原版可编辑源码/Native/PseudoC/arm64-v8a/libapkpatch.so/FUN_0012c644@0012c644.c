
void FUN_0012c644(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_40;
  uint uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0012c50c(&local_40);
  if (((int)uVar3 == 0) && (uVar3 = FUN_0012c5a0(param_1,&local_40,param_4), (int)uVar3 == 0)) {
    uVar5 = (ulong)uStack_3c;
    uVar6 = 0xfffff;
    if (uStack_3c >> 0x16 == 0) {
      uVar6 = 0xfff;
    }
    uVar1 = 0x3fffff;
    if (uStack_3c >> 0x1e == 0) {
      uVar1 = uVar6;
    }
    uVar6 = uVar1 + uVar5 & (uVar1 ^ 0xffffffffffffffff);
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if ((param_1[3] == 0) || (uVar5 != param_1[4])) {
      (*(code *)param_4[1])(param_4);
      param_1[3] = 0;
      lVar4 = (*(code *)*param_4)(param_4,uVar5);
      param_1[3] = lVar4;
      if (lVar4 == 0) {
        (*(code *)param_4[1])(param_4,param_1[1]);
        param_1[1] = 0;
        uVar3 = 2;
        goto LAB_0012c72c;
      }
    }
    uVar3 = 0;
    param_1[4] = uVar5;
    *param_1 = CONCAT44(uStack_3c,local_40);
  }
LAB_0012c72c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

