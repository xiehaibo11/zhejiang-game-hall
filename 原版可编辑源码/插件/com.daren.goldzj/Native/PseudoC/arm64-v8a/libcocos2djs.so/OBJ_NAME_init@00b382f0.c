
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int OBJ_NAME_init(void)

{
  uint uVar1;
  
  if (DAT_01d3ac98 == 0) {
    CRYPTO_mem_ctrl(3);
    DAT_01d3ac98 = OPENSSL_LH_new(FUN_00b38354,&LAB_00b383bc);
    CRYPTO_mem_ctrl(2);
    uVar1 = (uint)(DAT_01d3ac98 != 0);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

