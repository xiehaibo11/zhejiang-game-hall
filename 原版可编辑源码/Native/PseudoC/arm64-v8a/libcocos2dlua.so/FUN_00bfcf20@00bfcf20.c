
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfcf20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_208 [512];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_3 != 0) &&
      (uVar2 = *(ulong *)(param_3 + -8) & 0x7fffffffffff, *(char *)(uVar2 + 10) == '\0')) &&
     (iVar1 = FUN_00bfc240(param_1,uVar2 + 0x20,param_4), iVar1 != -1)) {
    lVar3 = *(long *)(uVar2 + 0x20);
    iVar1 = FUN_00bfc8bc(lVar3 + -0x68,iVar1);
    if (-1 < iVar1) {
      FUN_00bfcd70(auStack_208,*(undefined8 *)(lVar3 + -0x28),*(undefined4 *)(lVar3 + -0x20));
      FUN_00c00c18(param_1,"%s:%d: %s",auStack_208,iVar1,param_2);
      goto LAB_00bfcf74;
    }
  }
  FUN_00c00c18(param_1,"%s",param_2);
LAB_00bfcf74:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

