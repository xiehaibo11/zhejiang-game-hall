
void OBJ_NAME_cleanup(int type)

{
  undefined8 uVar1;
  
  if (DAT_01784a18 != 0) {
    DAT_01784a10 = type;
    uVar1 = OPENSSL_LH_get_down_load(DAT_01784a18);
    OPENSSL_LH_set_down_load(DAT_01784a18,0);
    OPENSSL_LH_doall(DAT_01784a18,&LAB_00b46f2c);
    if (-1 < type) {
      OPENSSL_LH_set_down_load(DAT_01784a18,uVar1);
      return;
    }
    OPENSSL_LH_free(DAT_01784a18);
    OPENSSL_sk_pop_free(DAT_01784a20,&LAB_00b46fe8);
    DAT_01784a18 = 0;
    DAT_01784a20 = 0;
  }
  return;
}

