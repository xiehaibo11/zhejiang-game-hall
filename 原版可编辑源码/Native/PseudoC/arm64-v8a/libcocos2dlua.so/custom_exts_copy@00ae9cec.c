
undefined8 custom_exts_copy(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_2[1] != 0) {
    lVar1 = CRYPTO_memdup(*param_2,param_2[1] * 0x30,"ssl/t1_ext.c",0x8c);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    param_1[1] = param_2[1];
  }
  return 1;
}

