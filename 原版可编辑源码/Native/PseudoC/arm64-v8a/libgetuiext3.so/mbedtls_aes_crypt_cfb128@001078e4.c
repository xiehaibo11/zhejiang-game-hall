
undefined8
mbedtls_aes_crypt_cfb128
          (undefined8 param_1,int param_2,long param_3,ulong *param_4,long param_5,byte *param_6,
          byte *param_7)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = *param_4;
  if (param_2 == 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (uVar2 == 0) {
        thunk_EXT_FUN_00002bb0(param_1,param_5,param_5);
      }
      bVar1 = *param_6;
      *param_7 = *(byte *)(param_5 + uVar2) ^ bVar1;
      *(byte *)(param_5 + uVar2) = bVar1;
      uVar2 = (ulong)((int)uVar2 + 1) & 0xf;
      param_7 = param_7 + 1;
      param_6 = param_6 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (uVar2 == 0) {
        thunk_EXT_FUN_00002bb0(param_1,param_5,param_5);
      }
      bVar1 = *param_6 ^ *(byte *)(param_5 + uVar2);
      *param_7 = bVar1;
      *(byte *)(param_5 + uVar2) = bVar1;
      uVar2 = (ulong)((int)uVar2 + 1) & 0xf;
      param_7 = param_7 + 1;
      param_6 = param_6 + 1;
    }
  }
  *param_4 = uVar2;
  return 0;
}

