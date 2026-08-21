
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119670(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_cb8 [1632];
  undefined1 auStack_658 [1616];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_00117a44(param_1,param_1[3],1);
  if (iVar2 < 0) {
    if ((*(byte *)(param_1 + 0xcd) >> 3 & 1) != 0) {
      FUN_0011befc(param_1[1],param_1 + 0xce,*param_1);
      goto LAB_00119700;
    }
    if (param_1[0xd5] == 0) goto LAB_00119700;
    iVar1 = *(int *)(param_1 + 0xd4);
  }
  else {
    iVar2 = FUN_00119518(param_1,auStack_cb8,param_1[3]);
    if ((iVar2 < 0) || (iVar2 = FUN_00117b3c(param_1,auStack_658), iVar2 < 0)) {
      if ((*(byte *)(param_1 + 0xcd) >> 3 & 1) != 0) {
        FUN_0011befc(param_1[1],param_1 + 0xce,*param_1);
        goto LAB_00119700;
      }
      if (param_1[0xd5] == 0) goto LAB_00119700;
      iVar1 = *(int *)(param_1 + 0xd4);
    }
    else {
      if ((*(byte *)(param_1 + 0xcd) >> 3 & 1) != 0) {
        iVar2 = 0;
        FUN_0011befc(param_1[1],param_1 + 0xce,*param_1);
        goto LAB_00119700;
      }
      if (param_1[0xd5] == 0) {
        iVar2 = 0;
        goto LAB_00119700;
      }
      iVar1 = *(int *)(param_1 + 0xd4);
      iVar2 = 0;
    }
  }
  if (iVar1 == 1) {
    FUN_0011b9a8(&DAT_00176398);
    param_1[0xd5] = 0;
  }
LAB_00119700:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

