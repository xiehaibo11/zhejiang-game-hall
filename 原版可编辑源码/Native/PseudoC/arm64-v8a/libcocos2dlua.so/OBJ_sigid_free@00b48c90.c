
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void OBJ_sigid_free(void)

{
  OPENSSL_sk_pop_free(DAT_01784a30,&LAB_00b48cd0);
  DAT_01784a30 = 0;
  OPENSSL_sk_free(DAT_01784a38);
  DAT_01784a38 = 0;
  return;
}

