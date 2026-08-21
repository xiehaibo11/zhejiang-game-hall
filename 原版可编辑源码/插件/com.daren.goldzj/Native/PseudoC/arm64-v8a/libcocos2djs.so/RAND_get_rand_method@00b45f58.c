
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

RAND_METHOD * RAND_get_rand_method(void)

{
  int iVar1;
  ENGINE *e;
  
  if (DAT_01d3acc8 == (RAND_METHOD *)0x0) {
    e = ENGINE_get_default_RAND();
    iVar1 = 0;
    if (e != (ENGINE *)0x0) {
      DAT_01d3acc8 = ENGINE_get_RAND(e);
      if (DAT_01d3acc8 != (RAND_METHOD *)0x0) {
        DAT_01d3acc0 = e;
        return DAT_01d3acc8;
      }
      iVar1 = ENGINE_finish(e);
    }
    DAT_01d3acc8 = (RAND_METHOD *)RAND_OpenSSL(iVar1);
  }
  return DAT_01d3acc8;
}

