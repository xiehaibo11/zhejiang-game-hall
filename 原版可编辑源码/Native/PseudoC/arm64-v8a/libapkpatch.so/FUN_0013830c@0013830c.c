
undefined8 FUN_0013830c(undefined8 *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *param_1;
  FUN_00137154();
  lVar2 = param_1[8];
  if (lVar2 == 0) {
    do {
      if (*(char *)(param_1 + 0xb) != '\0' || ((param_2 ^ 1) & 1) != 0) {
        uVar4 = 0;
        goto LAB_001383d8;
      }
      param_1[10] = param_1[10] + 1;
      FUN_001376fc(param_1[2],&local_40);
      param_1[10] = param_1[10] + -1;
      lVar2 = param_1[8];
    } while (lVar2 == 0);
  }
  uVar3 = param_1[7];
  uVar4 = *(undefined8 *)
           (*(long *)(param_1[4] + (uVar3 >> 6 & 0x3fffffffffffff8)) + (uVar3 & 0x1ff) * 8);
  param_1[7] = uVar3 + 1;
  param_1[8] = lVar2 + -1;
  FUN_00138e04(param_1 + 3,1);
  if (*(char *)(param_1 + 0xb) == '\0') {
    FUN_0013785c(param_1[1]);
  }
LAB_001383d8:
  FUN_001372b0(local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

