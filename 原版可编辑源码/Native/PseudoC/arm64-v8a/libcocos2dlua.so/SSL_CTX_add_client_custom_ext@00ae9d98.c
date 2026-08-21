
undefined8
SSL_CTX_add_client_custom_ext
          (long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0x12) && (iVar1 = SSL_CTX_ct_is_enabled(param_1), iVar1 != 0)) {
    return 0;
  }
  uVar2 = FUN_00ae9e34(*(long *)(param_1 + 0x120) + 0x198,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar2;
}

