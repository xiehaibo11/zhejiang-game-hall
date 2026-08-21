
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_STRING_TABLE_cleanup(void)

{
  long lVar1;
  
  lVar1 = DAT_017850d0;
  if (DAT_017850d0 != 0) {
    DAT_017850d0 = 0;
    OPENSSL_sk_pop_free(lVar1,&LAB_00b8cd00);
    return;
  }
  return;
}

