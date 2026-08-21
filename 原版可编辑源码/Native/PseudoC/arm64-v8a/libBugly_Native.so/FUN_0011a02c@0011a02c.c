
void FUN_0011a02c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  int local_fc;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  log2Console(3,"Bugly-libunwind","looking for IP=0x%lx\n",param_2);
  local_60 = 0;
  uStack_f8 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  local_fc = 0;
  local_d0 = 0xffffffff;
  local_80 = 0xffffffff;
  local_110 = param_2;
  uStack_108 = param_3;
  local_100 = param_4;
  iVar2 = dl_iterate_phdr_wrapper(FUN_00119ae8,&local_110);
  if (iVar2 < 1) {
    log2Console(3,"Bugly-libunwind","IP=0x%lx not found\n",param_2);
  }
  else {
    if (local_fc != 0) {
      uVar3 = 0;
      goto LAB_0011a104;
    }
    if (((int)local_d0 != -1) &&
       (uVar3 = _Uaarch64_dwarf_search_unwind_table
                          (param_1,param_2,&uStack_f8,param_3,param_4,param_5), (int)uVar3 != -10))
    goto LAB_0011a104;
    if ((int)local_80 != -1) {
      uVar3 = _Uaarch64_dwarf_search_unwind_table
                        (param_1,param_2,&uStack_a8,param_3,param_4,param_5);
      goto LAB_0011a104;
    }
  }
  uVar3 = 0xfffffff6;
LAB_0011a104:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

