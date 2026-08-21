
bool FUN_001380a0(undefined8 *param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((long)param_1[9] < 0) {
    bVar2 = true;
  }
  else if (param_1[9] == 0) {
    bVar2 = false;
  }
  else {
    uVar3 = *param_1;
    local_40 = uVar3;
    FUN_00137154(uVar3);
    if (*(char *)(param_1 + 0xb) == '\0') {
      do {
        bVar2 = (ulong)param_1[8] < (ulong)param_1[9];
        uVar3 = local_40;
        if (bVar2 || ((param_2 ^ 1) & 1) != 0) goto LAB_00138150;
        param_1[10] = param_1[10] + 1;
        FUN_001376fc(param_1[1],&local_40);
        param_1[10] = param_1[10] + -1;
      } while (*(char *)(param_1 + 0xb) == '\0');
      bVar2 = false;
      uVar3 = local_40;
    }
    else {
      bVar2 = false;
    }
LAB_00138150:
    FUN_001372b0(uVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}

