
void mbedtls_ctr_drbg_update(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 != 0) {
    if (0x17f < param_3) {
      param_3 = 0x180;
    }
    FUN_00107dd0(auStack_58,param_2,param_3);
    FUN_001080a0(param_1,auStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
  thunk_EXT_FUN_00002bb0();
  return;
}

