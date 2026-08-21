
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int OBJ_NAME_init(void)

{
  uint uVar1;
  
  if (DAT_01784a18 == 0) {
    CRYPTO_mem_ctrl(3);
    DAT_01784a18 = OPENSSL_LH_new(FUN_00b467d4,&LAB_00b4683c);
    CRYPTO_mem_ctrl(2);
    uVar1 = (uint)(DAT_01784a18 != 0);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

