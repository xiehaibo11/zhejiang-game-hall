
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_STRING_TABLE_cleanup(void)

{
  long lVar1;
  
  lVar1 = DAT_01d3b350;
  if (DAT_01d3b350 != 0) {
    DAT_01d3b350 = 0;
    OPENSSL_sk_pop_free(lVar1,&LAB_00b7e500);
    return;
  }
  return;
}

