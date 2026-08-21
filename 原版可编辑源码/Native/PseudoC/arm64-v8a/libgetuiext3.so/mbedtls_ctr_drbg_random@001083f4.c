
ulong mbedtls_ctr_drbg_random(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (*pcRam0000000000000000)(param_1 + 0x158);
  if ((int)uVar3 == 0) {
    uVar1 = thunk_EXT_FUN_00002bb0(param_1,param_2,param_3,0,0);
    iVar2 = (*pcRam0000000000000000)(param_1 + 0x158);
    if (iVar2 != 0) {
      uVar1 = 0xffffffe2;
    }
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}

