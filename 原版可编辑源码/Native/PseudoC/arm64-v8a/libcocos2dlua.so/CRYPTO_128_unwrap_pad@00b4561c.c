
ulong CRYPTO_128_unwrap_pad
                (undefined8 param_1,void *param_2,ulong *param_3,void *param_4,ulong param_5,
                code *param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong local_58;
  
  if (param_5 < 0x10) {
    return 0;
  }
  if ((param_5 & 0xffffffff80000007) != 0) {
    return 0;
  }
  memmove(param_3,param_4,param_5);
  if (param_5 - 0x10 == 0) {
    (*param_6)(param_3,param_3,param_1);
    local_58 = *param_3;
    lVar4 = 8;
    *param_3 = param_3[1];
  }
  else {
    lVar4 = param_5 - 8;
    lVar2 = FUN_00b45150(param_1,&local_58,param_3,param_3,param_5,param_6);
    if (lVar4 != lVar2) goto LAB_00b45754;
  }
  if (param_2 == (void *)0x0) {
    iVar1 = CRYPTO_memcmp(&local_58,&DAT_013e1e56,4);
  }
  else {
    iVar1 = CRYPTO_memcmp(&local_58,param_2,4);
  }
  if ((((iVar1 == 0) &&
       (uVar3 = (local_58 >> 0x20 & 0xff) << 0x18 | (local_58 >> 0x28 & 0xff) << 0x10 |
                (local_58 >> 0x30 & 0xff) << 8 | local_58 >> 0x38,
       (param_5 - 0x10 & 0xfffffffffffffff8) < uVar3)) &&
      (uVar3 <= (param_5 - 8 & 0xfffffffffffffff8))) &&
     (iVar1 = CRYPTO_memcmp((void *)((long)param_3 + uVar3),&DAT_01784a00,lVar4 - uVar3), iVar1 == 0
     )) {
    return uVar3;
  }
LAB_00b45754:
  OPENSSL_cleanse(param_3,param_5);
  return 0;
}

