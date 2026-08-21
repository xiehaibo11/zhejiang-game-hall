
undefined8
mbedtls_platform_entropy_poll(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  *param_4 = 0;
  lVar1 = thunk_EXT_FUN_00002bb0("/dev/urandom",&DAT_0010b00d);
  if (lVar1 != 0) {
    lVar2 = thunk_EXT_FUN_00002bb0(param_2,1,param_3,lVar1);
    thunk_EXT_FUN_00002bb0(lVar1);
    if (lVar2 == param_3) {
      *param_4 = param_3;
      return 0;
    }
  }
  return 0xffffffc4;
}

