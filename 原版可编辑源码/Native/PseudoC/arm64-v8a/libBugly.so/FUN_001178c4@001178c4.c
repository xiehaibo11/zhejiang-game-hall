
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001178c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  log2Console(3,"Bugly-libunwind","looking for IP=0x%lx\n",param_2);
  uStack_a8 = 0;
  uStack_78 = 0;
  uStack_28 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  iStack_ac = 0;
  local_80 = 0xffffffff;
  local_30 = 0xffffffff;
  local_c0 = param_2;
  local_b8 = param_3;
  local_b0 = param_4;
  iVar1 = dl_iterate_phdr_wrapper(FUN_00116cf0,&local_c0);
  if (iVar1 < 1) {
    log2Console(3,"Bugly-libunwind","IP=0x%lx not found\n",param_2);
    uVar2 = 0xfffffff6;
  }
  else {
    uVar2 = 0;
    if ((iStack_ac == 0) &&
       (((int)local_80 == -1 ||
        (uVar2 = _Uaarch64_dwarf_search_unwind_table
                           (param_1,param_2,&uStack_a8,param_3,param_4,param_5), (int)uVar2 == -10))
       )) {
      if ((int)local_30 == -1) {
        uVar2 = 0xfffffff6;
      }
      else {
        uVar2 = _Uaarch64_dwarf_search_unwind_table
                          (param_1,param_2,&uStack_58,param_3,param_4,param_5);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

