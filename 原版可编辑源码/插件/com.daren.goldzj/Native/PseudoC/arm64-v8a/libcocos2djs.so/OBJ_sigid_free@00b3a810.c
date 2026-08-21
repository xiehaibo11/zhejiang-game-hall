
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OBJ_sigid_free(void)

{
  OPENSSL_sk_pop_free(DAT_01d3acb0,&LAB_00b3a850);
  DAT_01d3acb0 = 0;
  OPENSSL_sk_free(DAT_01d3acb8);
  DAT_01d3acb8 = 0;
  return;
}

