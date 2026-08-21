
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001156c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = _Uaarch64_get_elf_image(param_1,auStack_28,param_2,param_3,&local_38,&local_30,0,param_7);
  if (iVar2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00114b74(param_1,auStack_28,local_38,local_30,param_3,param_4,param_5,param_6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

