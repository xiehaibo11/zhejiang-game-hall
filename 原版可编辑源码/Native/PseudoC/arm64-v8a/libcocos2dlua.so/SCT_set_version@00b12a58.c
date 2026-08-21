
undefined8 SCT_set_version(undefined4 *param_1,int param_2)

{
  if (param_2 != 0) {
    ERR_put_error(0x32,0x68,0x67,"crypto/ct/ct_sct.c",0x33);
    return 0;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return 1;
}

