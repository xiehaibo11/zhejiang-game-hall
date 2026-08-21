
undefined8 BLAKE2b_Final(undefined8 *param_1,undefined8 *param_2)

{
  param_2[10] = 0xffffffffffffffff;
  memset((void *)((long)(param_2 + 0xc) + param_2[0x1c]),0,0x80 - param_2[0x1c]);
  FUN_00bf6b4c(param_2,param_2 + 0xc,param_2[0x1c]);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  OPENSSL_cleanse(param_2,0xe8);
  return 1;
}

